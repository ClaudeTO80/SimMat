grammar MATLAB;

@lexer::members
{
	bool maybeString = false;
}

//// LEXER RULES

// Match all newline characters
NL : ('\r' '\n' | '\r' | '\n') -> channel(HIDDEN);

// Match comments and send them to the HIDDEN channel
BLOCKCOMMENT	: '%{' .*?  '%}' -> channel(HIDDEN);
COMMENT			: '%' .*? NL  -> channel(HIDDEN);

// Match whitespace characters and skip
WS : [ \t] { maybeString = true; } -> skip;

// Match the multiline break and skip it
ELLIPSIS: '...' -> skip;

// Keywords
BREAK		: 'break';
CASE		: 'case';
CATCH		: 'catch';
CLASSDEF	: 'classdef';
CONTINUE	: 'continue';
ELSE		: 'else';
ELSEIF		: 'elseif';
END			: 'end';
FOR			: 'for';
FUNCTION	: 'function';
GET			: 'get';
GLOBAL		: 'global';
IF			: 'if';
OTHERWISE	: 'otherwise';
PERSISTENT	: 'persistent';
PROPERTIES	: 'properties';
RETURN		: 'return';
SET			: 'set';
SWITCH		: 'switch';
TRY			: 'try';
WHILE		: 'while';
PI			: 'pi';
// Special Keywords //
//////////////////////

STATIC	: 'Static';

// Two Character Operators
ELMENT_WISE_LEFT_DIVIDE		: './';
ELMENT_WISE_POWER			: '.^';
ELMENT_WISE_RIGHT_DIVIDE	: '.\\';
ELMENT_WISE_TIMES			: '.*';
ELMENT_WISE_TRANSPOSE		: '.\'';
EQUALS						: '==' {maybeString = true;};
GREATER_THAN_OR_EQUAL		: '>=';
LESS_THAN_OR_EQUAL			: '<=';
LOGICAL_AND					: '&&';
LOGICAL_OR					: '||';
NOT_EQUAL					: '~=';

// Single Character Operators
ASSIGN			: '=' { maybeString = true; };
BINARY_AND		: '&';
BINARY_OR		: '|';
COLON			: ':';
GREATER_THAN	: '>' { maybeString = true; };
LEFT_DIVIDE		: '/';
LESS_THAN		: '<' { maybeString = true; };
MINUS			: '-';
NOT				: '~';
PLUS			: '+';
POWER			: '^';
RIGHT_DIVIDE	: '\\';
TIMES			: '*';
TRANSPOSE		: '\'';

// Special Characters
AT						: '@';
COMMA					: ',' {maybeString = true;};
DOT						: '.';
SEMI_COLON				: ';' {maybeString = true;};
LEFT_BRACE				: '{' {maybeString = true;};
LEFT_PARENTHESIS		: '(' {maybeString = true;};
LEFT_SQUARE_BRACKET		: '[' {maybeString = true;};
QUESTION				: '?';
RIGHT_BRACE				: '}' {maybeString = false;};
RIGHT_PARENTHESIS		: ')' {maybeString = false;};
RIGHT_SQUARE_BRACKET	: ']' {maybeString = false;};

BASE_FUNC
:	'__' [a-zA-Z][a-zA-Z0-9]* '__'
|   'sin'
|	'cos'
|	'tan'
|	'asin'
|	'acos'
|	'atan'
|	'sinh'
|	'cosh'
|	'tanh'
|	'asinh'
|	'acosh'
|	'atanh'
|	'zeros'
|	'ones'
|	'eye'
|	'inv'
|	'size'
|	'reshape'
//|	'linspace'
|	'sqrt'
|	'sum'
|	'max'
|	'min'
|	'qr'
|	'lu'
|	'rand'
|	'linsolve'
;

// Atoms - identifiers, strings, numbers, whitespace
ID: [a-zA-Z] [a-zA-Z0-9_]* { maybeString = false; };

IMAGINARY
:	INT 'i'
|	FLOAT 'i'
;

INT: DIGIT+;

FLOAT
:	DIGIT+ '.' DIGIT* EXPONENT?
|	DIGIT+			  EXPONENT
|		   '.' DIGIT+ EXPONENT?
;

fragment
EXPONENT: ('e'|'E') ('+'|'-')? DIGIT+;

fragment
DIGIT: [0-9];

STRING : {maybeString}? '\'' ( ~('\'' | '\r' | '\n') | '\'\'')* '\'';
ANYCHAR : .; 

//// Parser Rules ////
//////////////////////

// Atoms //
///////////

atom_boolean
:	'true'
|	'false'
;

atom_empty_array
:	LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
;

atom_empty_cell
:	LEFT_BRACE RIGHT_BRACE
;

atom_end
:	END
;

atom_float
:	FLOAT
;

atom_imaginary
:	IMAGINARY
;

atom_index_all
:	COLON
;

atom_integer
:	INT
;

atom_meta
:	QUESTION atom_var
|	LEFT_BRACE (QUESTION atom_var (COMMA? QUESTION atom_var)*)? RIGHT_BRACE
;

atom_string
:	STRING
;

atom_var
:	ID
|	GET
|	SET
|	STATIC
;

matlab_file:
	( def_class | statement | def_function )*
;

// # Definitions
// 
// Definitions are MATLAB language constructs that only 'define' something. A definition when
// evaluated does not result in a value. A definition is a template only.

def_class
:	CLASSDEF 
	(	LEFT_PARENTHESIS 
		( attrib_class_boolean ( ASSIGN atom_boolean )? | attrib_class_meta ( ASSIGN atom_meta )? )*
		RIGHT_PARENTHESIS
	)*

	atom_var ( LESS_THAN atom_var (BINARY_AND atom_var)* )*

	(	PROPERTIES
		(	LEFT_PARENTHESIS
			(	attrib_property_boolean ( ASSIGN atom_boolean )?
			|	attrib_property_access  ( ASSIGN atom_access )?
			)
			(	COMMA
				(	attrib_property_boolean ( ASSIGN atom_boolean )?
				|	attrib_property_access  ( ASSIGN atom_access )?
				)
			)*
			RIGHT_PARENTHESIS
		)?	// Zero or one property attribute blocks
		( atom_var | st_assign )*
		END
	)*	// Zero or more property blocks
	
	(	'methods'
		(	LEFT_PARENTHESIS
			(	attrib_method_boolean ( ASSIGN atom_boolean )?
			|	attrib_method_access  ( ASSIGN atom_access )?
			)
			(	COMMA
				(	attrib_method_boolean ( ASSIGN atom_boolean )?
				|	attrib_method_access  ( ASSIGN atom_access )?
				)
			)*
			RIGHT_PARENTHESIS
		)?	// Zero or one property attribute blocks
		def_function*
		END
	)*	// Zero or more property blocks

	( RETURN | END )?
;

def_function:
	FUNCTION (function_returns ASSIGN)? ((GET | SET) DOT)? atom_var function_params?
	statement*
	(END | RETURN)?
;

attrib_class_boolean
:	'Abstract'
|	'ConstructOnLoad'
|	'HandleCompatible'
|	'Hidden'
|	'Sealed'
;

attrib_class_meta
:	'AllowedSubclasses'
|	'InferiorClasses'
;

attrib_property_boolean
:	'AbortSet'
|	'Abstract'
|	'Constant'
|	'Dependent'
|	'GetObservable'
|	'Hidden'
|	'NonCopyable'
|	'SetObservable'
|	'Transient'
;

attrib_property_access
:	'Access'
|	'GetAccess'
|	'SetAccess'	
;

attrib_method_boolean
:	'Abstract'
|	'Hidden'
|	'Sealed'
|	STATIC
;

attrib_method_access
:	'Access'
;

atom_access
:	'public'
|	'protected'
|	'private'
|	atom_meta
;

// # Statements

// MATLAB does allow for return values to be specified without a COMMA, e.g. [h w] = size(X); 
// However, it does give a warning saying this is not recommended. Thus we don't parse this kind
// of assignment.
st_assign
: 
	( atom_var | xpr_array_index | xpr_cell_index | xpr_field )
  	ASSIGN 
	( atom_empty_cell | xpr_tree | xpr_handle)

| 	LEFT_SQUARE_BRACKET 
	( NOT | atom_var | xpr_array_index | xpr_cell_index | xpr_field ) 
	( COMMA ( NOT | atom_var | xpr_array_index | xpr_cell_index | xpr_field ) )*
  	RIGHT_SQUARE_BRACKET

	ASSIGN 
	
	( atom_empty_cell | xpr_tree | xpr_handle )
;

//st_assign_dir_def
//:	( atom_var | xpr_array_index | xpr_cell_index | xpr_field )
//  	ASSIGN 
//	( atom_empty_cell | xpr_tree | xpr_handle)
//	;
st_command:
	atom_var command_argument+
;

// if_statement can be multiline or single line
st_if
:	(IF xpr_tree COMMA?
		statement*
	(ELSEIF xpr_tree COMMA?
		statement*)*
	(ELSE
		statement*)?
	END)
|	IF xpr_tree (COMMA | SEMI_COLON) statement (COMMA | SEMI_COLON) END
;

st_for:
	FOR atom_var ASSIGN xpr_tree COMMA?
		statement*
	END
;

st_switch:
	SWITCH xpr_tree
		(CASE xpr_tree
			statement*)*
		(OTHERWISE
			statement*)?
	END
;

st_try:
	TRY COMMA?
		statement*
	(CATCH atom_var?
		statement*)*
	END
;

st_while:
	WHILE xpr_tree COMMA?
		statement*
	END
;

function_params
:	LEFT_PARENTHESIS (atom_var (COMMA atom_var)*)? RIGHT_PARENTHESIS
;

function_returns
:	atom_var
|	LEFT_SQUARE_BRACKET atom_var (COMMA atom_var)* RIGHT_SQUARE_BRACKET
;

statement
:
	(	st_assign
	| 	st_command
	| 	st_if
	| 	st_for
	| 	st_switch
	| 	st_try
	| 	st_while
	| 	xpr_function
	| 	xpr_field
	| 	xpr_tree
	| 	atom_var
	| 	BREAK
	| 	CONTINUE
	| 	RETURN
	)
( COMMA | SEMI_COLON )?
;

// ## Expression Trees
//
// Expression trees model a generic expression in MATLAB. The difference between `xpr_tree` and
// `xpr_tree_` (with underscore) is that `xpr_tree_` includes the `end` keyword can can be used
// for array or cell indexing. To make this work we also need `xpr_array_` and `xpr_cell_` which
// are analogous.
xpr_tree
:	xpr_basefunction
|	atom_boolean
|	atom_empty_array
|	atom_float
|	atom_imaginary
|	atom_integer
|	atom_string
|	atom_var
|	xpr_array
|	xpr_array_index
|	xpr_cell
|	xpr_cell_index
|	xpr_field
|	xpr_function
|	LEFT_PARENTHESIS xpr_tree RIGHT_PARENTHESIS
|	xpr_tree (ELMENT_WISE_TRANSPOSE | TRANSPOSE)
|	xpr_tree (ELMENT_WISE_POWER | POWER) xpr_tree
|	(PLUS | MINUS | NOT) xpr_tree
|	xpr_tree (ELMENT_WISE_TIMES | ELMENT_WISE_RIGHT_DIVIDE | ELMENT_WISE_LEFT_DIVIDE) xpr_tree
|	xpr_tree (TIMES | RIGHT_DIVIDE | LEFT_DIVIDE) xpr_tree
|	xpr_tree (PLUS | MINUS) xpr_tree
|	xpr_tree COLON xpr_tree
|	xpr_tree LESS_THAN xpr_tree
|	xpr_tree LESS_THAN_OR_EQUAL xpr_tree
|	xpr_tree GREATER_THAN xpr_tree
|	xpr_tree GREATER_THAN_OR_EQUAL xpr_tree
|	xpr_tree EQUALS xpr_tree
|	xpr_tree NOT_EQUAL xpr_tree
|	xpr_tree BINARY_AND xpr_tree
|	xpr_tree BINARY_OR xpr_tree
|	xpr_tree LOGICAL_AND xpr_tree
|	xpr_tree LOGICAL_OR xpr_tree
;

xpr_tree_
:	xpr_basefunction
|	atom_boolean
|	atom_empty_array
|	atom_end
|	atom_float
|	atom_imaginary
|	atom_integer
|	atom_string
|	atom_var
|	xpr_array_
|	xpr_array_index
|	xpr_cell_
|	xpr_cell_index
|	xpr_field
|	xpr_function
|	LEFT_PARENTHESIS xpr_tree_ RIGHT_PARENTHESIS
|	xpr_tree_ (ELMENT_WISE_TRANSPOSE | TRANSPOSE)
|	xpr_tree_ (ELMENT_WISE_POWER | POWER) xpr_tree_
|	(PLUS | MINUS | NOT) xpr_tree_
|	xpr_tree_ (ELMENT_WISE_TIMES | ELMENT_WISE_RIGHT_DIVIDE | ELMENT_WISE_LEFT_DIVIDE) xpr_tree_
|	xpr_tree_ (TIMES | RIGHT_DIVIDE | LEFT_DIVIDE) xpr_tree_
|	xpr_tree_ (PLUS | MINUS) xpr_tree_
|	xpr_tree_ COLON xpr_tree_
|	xpr_tree_ LESS_THAN xpr_tree_
|	xpr_tree_ LESS_THAN_OR_EQUAL xpr_tree_
|	xpr_tree_ GREATER_THAN xpr_tree_
|	xpr_tree_ GREATER_THAN_OR_EQUAL xpr_tree_
|	xpr_tree_ EQUALS xpr_tree_
|	xpr_tree_ NOT_EQUAL xpr_tree_
|	xpr_tree_ BINARY_AND xpr_tree_
|	xpr_tree_ BINARY_OR xpr_tree_
|	xpr_tree_ LOGICAL_AND xpr_tree_
|	xpr_tree_ LOGICAL_OR xpr_tree_
;

// Apparently MATLAB doesn't care whether you add commas to an array definition or not. E.g.
// [0 0 8]	[[0 0 8] [9 0 8]]	[[0 0 8],[9 0 8]]	[[0 0, 8],[9 0 8]] and
// [0 8 9, 10, 40 50 60] are all valid matlab expressions.
// The caveat is that you can't have two simultaneous commas. That throws an error. 
// E.g. [0,,1] is not allowed.
xpr_array
:	LEFT_SQUARE_BRACKET xpr_tree (COMMA? xpr_tree)* RIGHT_SQUARE_BRACKET
|	LEFT_SQUARE_BRACKET xpr_tree (COMMA? xpr_tree)* (SEMI_COLON xpr_tree (COMMA? xpr_tree)*)* RIGHT_SQUARE_BRACKET
;

xpr_array_
:	LEFT_SQUARE_BRACKET xpr_tree_ (COMMA? xpr_tree_)* RIGHT_SQUARE_BRACKET
|	LEFT_SQUARE_BRACKET xpr_tree_ (COMMA? xpr_tree_)* (SEMI_COLON xpr_tree_ (COMMA? xpr_tree_)*)* RIGHT_SQUARE_BRACKET
;

xpr_cell
:	LEFT_BRACE (xpr_tree | xpr_handle) (COMMA? (xpr_tree | xpr_handle))* RIGHT_BRACE
|	LEFT_BRACE (xpr_tree | xpr_handle) (COMMA? (xpr_tree | xpr_handle))* (SEMI_COLON (xpr_tree | xpr_handle) (COMMA? (xpr_tree | xpr_handle))*)* RIGHT_BRACE
;

xpr_cell_
:	LEFT_BRACE xpr_tree_ (COMMA? xpr_tree_)* RIGHT_BRACE
|	LEFT_BRACE xpr_tree_ (COMMA? xpr_tree_)* (SEMI_COLON xpr_tree_ (COMMA? xpr_tree_)*)* RIGHT_BRACE
;

// An array_index expression in MATLAB is an expression that takes an array and indexes it to give
// some subset of the array. This can work on multidimentional arrays or cell arrays.
// 
// SYNTAX
//	identifier (index_express [, indexexpression] ...)
xpr_array_index
:	(xpr_cell_index | atom_var) LEFT_PARENTHESIS (atom_index_all | xpr_tree_) (COMMA (atom_index_all | xpr_tree_))* RIGHT_PARENTHESIS
;

xpr_cell_index
:	atom_var LEFT_BRACE (atom_index_all | xpr_tree_) (COMMA (atom_index_all | xpr_tree_))* RIGHT_BRACE
;

// a.b == identifier DOT identifier
// a.b.c == (a.b).c == field_access DOT identifier
// a.b.c.f() == ((a.b).c).f()
xpr_field
:	atom_var DOT atom_var
|	atom_var DOT xpr_array_index
|	atom_var DOT xpr_cell_index
|	atom_var DOT xpr_function
|	xpr_array_index DOT atom_var
|	xpr_array_index DOT xpr_array_index
|	xpr_array_index DOT xpr_cell_index
|	xpr_array_index DOT xpr_function
|	xpr_cell_index DOT atom_var
|	xpr_cell_index DOT xpr_array_index
|	xpr_cell_index DOT xpr_cell_index
|	xpr_cell_index DOT xpr_function
|	xpr_field DOT atom_var
|	xpr_field DOT xpr_array_index
|	xpr_field DOT xpr_cell_index
|	xpr_field DOT xpr_function
;

xpr_function
:	atom_var 
	LEFT_PARENTHESIS 
	//((xpr_tree | xpr_handle | atom_empty_cell) (COMMA (xpr_tree | xpr_handle | atom_empty_cell))*)? 
	((func_arg) (COMMA (func_arg))*)? 
	RIGHT_PARENTHESIS
;

xpr_basefunction
:	BASE_FUNC 
	LEFT_PARENTHESIS 
	//((xpr_tree | xpr_handle | atom_empty_cell) (COMMA (xpr_tree | xpr_handle | atom_empty_cell))*)? 
	((func_arg) (COMMA (func_arg))*)? 
	RIGHT_PARENTHESIS
;

func_arg
:	xpr_tree 
| 	xpr_handle 
| 	atom_empty_cell

;
xpr_handle
:	AT atom_var
|	AT function_params statement
;

command_argument
:	ID
;