
// Generated from MATLAB.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  MATLABParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, NL = 24, BLOCKCOMMENT = 25, COMMENT = 26, 
    WS = 27, ELLIPSIS = 28, BREAK = 29, CASE = 30, CATCH = 31, CLASSDEF = 32, 
    CONTINUE = 33, ELSE = 34, ELSEIF = 35, END = 36, FOR = 37, FUNCTION = 38, 
    GET = 39, GLOBAL = 40, IF = 41, OTHERWISE = 42, PERSISTENT = 43, PROPERTIES = 44, 
    RETURN = 45, SET = 46, SWITCH = 47, TRY = 48, WHILE = 49, PI = 50, STATIC = 51, 
    ELMENT_WISE_LEFT_DIVIDE = 52, ELMENT_WISE_POWER = 53, ELMENT_WISE_RIGHT_DIVIDE = 54, 
    ELMENT_WISE_TIMES = 55, ELMENT_WISE_TRANSPOSE = 56, EQUALS = 57, GREATER_THAN_OR_EQUAL = 58, 
    LESS_THAN_OR_EQUAL = 59, LOGICAL_AND = 60, LOGICAL_OR = 61, NOT_EQUAL = 62, 
    ASSIGN = 63, BINARY_AND = 64, BINARY_OR = 65, COLON = 66, GREATER_THAN = 67, 
    LEFT_DIVIDE = 68, LESS_THAN = 69, MINUS = 70, NOT = 71, PLUS = 72, POWER = 73, 
    RIGHT_DIVIDE = 74, TIMES = 75, TRANSPOSE = 76, AT = 77, COMMA = 78, 
    DOT = 79, SEMI_COLON = 80, LEFT_BRACE = 81, LEFT_PARENTHESIS = 82, LEFT_SQUARE_BRACKET = 83, 
    QUESTION = 84, RIGHT_BRACE = 85, RIGHT_PARENTHESIS = 86, RIGHT_SQUARE_BRACKET = 87, 
    BASE_FUNC = 88, ID = 89, IMAGINARY = 90, INT = 91, FLOAT = 92, STRING = 93, 
    ANYCHAR = 94
  };

  enum {
    RuleAtom_boolean = 0, RuleAtom_empty_array = 1, RuleAtom_empty_cell = 2, 
    RuleAtom_end = 3, RuleAtom_float = 4, RuleAtom_imaginary = 5, RuleAtom_index_all = 6, 
    RuleAtom_integer = 7, RuleAtom_meta = 8, RuleAtom_string = 9, RuleAtom_var = 10, 
    RuleMatlab_file = 11, RuleDef_class = 12, RuleDef_function = 13, RuleAttrib_class_boolean = 14, 
    RuleAttrib_class_meta = 15, RuleAttrib_property_boolean = 16, RuleAttrib_property_access = 17, 
    RuleAttrib_method_boolean = 18, RuleAttrib_method_access = 19, RuleAtom_access = 20, 
    RuleSt_assign = 21, RuleSt_command = 22, RuleSt_if = 23, RuleSt_for = 24, 
    RuleSt_switch = 25, RuleSt_try = 26, RuleSt_while = 27, RuleFunction_params = 28, 
    RuleFunction_returns = 29, RuleStatement = 30, RuleXpr_tree = 31, RuleXpr_tree_ = 32, 
    RuleXpr_array = 33, RuleXpr_array_ = 34, RuleXpr_cell = 35, RuleXpr_cell_ = 36, 
    RuleXpr_array_index = 37, RuleXpr_cell_index = 38, RuleXpr_field = 39, 
    RuleXpr_function = 40, RuleXpr_basefunction = 41, RuleFunc_arg = 42, 
    RuleXpr_handle = 43, RuleCommand_argument = 44
  };

  explicit MATLABParser(antlr4::TokenStream *input);
  ~MATLABParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Atom_booleanContext;
  class Atom_empty_arrayContext;
  class Atom_empty_cellContext;
  class Atom_endContext;
  class Atom_floatContext;
  class Atom_imaginaryContext;
  class Atom_index_allContext;
  class Atom_integerContext;
  class Atom_metaContext;
  class Atom_stringContext;
  class Atom_varContext;
  class Matlab_fileContext;
  class Def_classContext;
  class Def_functionContext;
  class Attrib_class_booleanContext;
  class Attrib_class_metaContext;
  class Attrib_property_booleanContext;
  class Attrib_property_accessContext;
  class Attrib_method_booleanContext;
  class Attrib_method_accessContext;
  class Atom_accessContext;
  class St_assignContext;
  class St_commandContext;
  class St_ifContext;
  class St_forContext;
  class St_switchContext;
  class St_tryContext;
  class St_whileContext;
  class Function_paramsContext;
  class Function_returnsContext;
  class StatementContext;
  class Xpr_treeContext;
  class Xpr_tree_Context;
  class Xpr_arrayContext;
  class Xpr_array_Context;
  class Xpr_cellContext;
  class Xpr_cell_Context;
  class Xpr_array_indexContext;
  class Xpr_cell_indexContext;
  class Xpr_fieldContext;
  class Xpr_functionContext;
  class Xpr_basefunctionContext;
  class Func_argContext;
  class Xpr_handleContext;
  class Command_argumentContext; 

  class  Atom_booleanContext : public antlr4::ParserRuleContext {
  public:
    Atom_booleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_booleanContext* atom_boolean();

  class  Atom_empty_arrayContext : public antlr4::ParserRuleContext {
  public:
    Atom_empty_arrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_empty_arrayContext* atom_empty_array();

  class  Atom_empty_cellContext : public antlr4::ParserRuleContext {
  public:
    Atom_empty_cellContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_empty_cellContext* atom_empty_cell();

  class  Atom_endContext : public antlr4::ParserRuleContext {
  public:
    Atom_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_endContext* atom_end();

  class  Atom_floatContext : public antlr4::ParserRuleContext {
  public:
    Atom_floatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_floatContext* atom_float();

  class  Atom_imaginaryContext : public antlr4::ParserRuleContext {
  public:
    Atom_imaginaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMAGINARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_imaginaryContext* atom_imaginary();

  class  Atom_index_allContext : public antlr4::ParserRuleContext {
  public:
    Atom_index_allContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_index_allContext* atom_index_all();

  class  Atom_integerContext : public antlr4::ParserRuleContext {
  public:
    Atom_integerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_integerContext* atom_integer();

  class  Atom_metaContext : public antlr4::ParserRuleContext {
  public:
    Atom_metaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> QUESTION();
    antlr4::tree::TerminalNode* QUESTION(size_t i);
    std::vector<Atom_varContext *> atom_var();
    Atom_varContext* atom_var(size_t i);
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_metaContext* atom_meta();

  class  Atom_stringContext : public antlr4::ParserRuleContext {
  public:
    Atom_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_stringContext* atom_string();

  class  Atom_varContext : public antlr4::ParserRuleContext {
  public:
    Atom_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_varContext* atom_var();

  class  Matlab_fileContext : public antlr4::ParserRuleContext {
  public:
    Matlab_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Def_classContext *> def_class();
    Def_classContext* def_class(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<Def_functionContext *> def_function();
    Def_functionContext* def_function(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Matlab_fileContext* matlab_file();

  class  Def_classContext : public antlr4::ParserRuleContext {
  public:
    Def_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASSDEF();
    std::vector<Atom_varContext *> atom_var();
    Atom_varContext* atom_var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode* LEFT_PARENTHESIS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_PARENTHESIS();
    antlr4::tree::TerminalNode* RIGHT_PARENTHESIS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LESS_THAN();
    antlr4::tree::TerminalNode* LESS_THAN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PROPERTIES();
    antlr4::tree::TerminalNode* PROPERTIES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> END();
    antlr4::tree::TerminalNode* END(size_t i);
    antlr4::tree::TerminalNode *RETURN();
    std::vector<Attrib_class_booleanContext *> attrib_class_boolean();
    Attrib_class_booleanContext* attrib_class_boolean(size_t i);
    std::vector<Attrib_class_metaContext *> attrib_class_meta();
    Attrib_class_metaContext* attrib_class_meta(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BINARY_AND();
    antlr4::tree::TerminalNode* BINARY_AND(size_t i);
    std::vector<St_assignContext *> st_assign();
    St_assignContext* st_assign(size_t i);
    std::vector<Def_functionContext *> def_function();
    Def_functionContext* def_function(size_t i);
    std::vector<Attrib_property_booleanContext *> attrib_property_boolean();
    Attrib_property_booleanContext* attrib_property_boolean(size_t i);
    std::vector<Attrib_property_accessContext *> attrib_property_access();
    Attrib_property_accessContext* attrib_property_access(size_t i);
    std::vector<Attrib_method_booleanContext *> attrib_method_boolean();
    Attrib_method_booleanContext* attrib_method_boolean(size_t i);
    std::vector<Attrib_method_accessContext *> attrib_method_access();
    Attrib_method_accessContext* attrib_method_access(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<Atom_booleanContext *> atom_boolean();
    Atom_booleanContext* atom_boolean(size_t i);
    std::vector<Atom_metaContext *> atom_meta();
    Atom_metaContext* atom_meta(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Atom_accessContext *> atom_access();
    Atom_accessContext* atom_access(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Def_classContext* def_class();

  class  Def_functionContext : public antlr4::ParserRuleContext {
  public:
    Def_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Atom_varContext *atom_var();
    Function_returnsContext *function_returns();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *DOT();
    Function_paramsContext *function_params();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Def_functionContext* def_function();

  class  Attrib_class_booleanContext : public antlr4::ParserRuleContext {
  public:
    Attrib_class_booleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attrib_class_booleanContext* attrib_class_boolean();

  class  Attrib_class_metaContext : public antlr4::ParserRuleContext {
  public:
    Attrib_class_metaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attrib_class_metaContext* attrib_class_meta();

  class  Attrib_property_booleanContext : public antlr4::ParserRuleContext {
  public:
    Attrib_property_booleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attrib_property_booleanContext* attrib_property_boolean();

  class  Attrib_property_accessContext : public antlr4::ParserRuleContext {
  public:
    Attrib_property_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attrib_property_accessContext* attrib_property_access();

  class  Attrib_method_booleanContext : public antlr4::ParserRuleContext {
  public:
    Attrib_method_booleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attrib_method_booleanContext* attrib_method_boolean();

  class  Attrib_method_accessContext : public antlr4::ParserRuleContext {
  public:
    Attrib_method_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attrib_method_accessContext* attrib_method_access();

  class  Atom_accessContext : public antlr4::ParserRuleContext {
  public:
    Atom_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atom_metaContext *atom_meta();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_accessContext* atom_access();

  class  St_assignContext : public antlr4::ParserRuleContext {
  public:
    St_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<Atom_varContext *> atom_var();
    Atom_varContext* atom_var(size_t i);
    std::vector<Xpr_array_indexContext *> xpr_array_index();
    Xpr_array_indexContext* xpr_array_index(size_t i);
    std::vector<Xpr_cell_indexContext *> xpr_cell_index();
    Xpr_cell_indexContext* xpr_cell_index(size_t i);
    std::vector<Xpr_fieldContext *> xpr_field();
    Xpr_fieldContext* xpr_field(size_t i);
    Atom_empty_cellContext *atom_empty_cell();
    Xpr_treeContext *xpr_tree();
    Xpr_handleContext *xpr_handle();
    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  St_assignContext* st_assign();

  class  St_commandContext : public antlr4::ParserRuleContext {
  public:
    St_commandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atom_varContext *atom_var();
    std::vector<Command_argumentContext *> command_argument();
    Command_argumentContext* command_argument(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  St_commandContext* st_command();

  class  St_ifContext : public antlr4::ParserRuleContext {
  public:
    St_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<Xpr_treeContext *> xpr_tree();
    Xpr_treeContext* xpr_tree(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<antlr4::tree::TerminalNode *> SEMI_COLON();
    antlr4::tree::TerminalNode* SEMI_COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  St_ifContext* st_if();

  class  St_forContext : public antlr4::ParserRuleContext {
  public:
    St_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Atom_varContext *atom_var();
    antlr4::tree::TerminalNode *ASSIGN();
    Xpr_treeContext *xpr_tree();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *COMMA();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  St_forContext* st_for();

  class  St_switchContext : public antlr4::ParserRuleContext {
  public:
    St_switchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    std::vector<Xpr_treeContext *> xpr_tree();
    Xpr_treeContext* xpr_tree(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *OTHERWISE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  St_switchContext* st_switch();

  class  St_tryContext : public antlr4::ParserRuleContext {
  public:
    St_tryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *COMMA();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CATCH();
    antlr4::tree::TerminalNode* CATCH(size_t i);
    std::vector<Atom_varContext *> atom_var();
    Atom_varContext* atom_var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  St_tryContext* st_try();

  class  St_whileContext : public antlr4::ParserRuleContext {
  public:
    St_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Xpr_treeContext *xpr_tree();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *COMMA();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  St_whileContext* st_while();

  class  Function_paramsContext : public antlr4::ParserRuleContext {
  public:
    Function_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    std::vector<Atom_varContext *> atom_var();
    Atom_varContext* atom_var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_paramsContext* function_params();

  class  Function_returnsContext : public antlr4::ParserRuleContext {
  public:
    Function_returnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Atom_varContext *> atom_var();
    Atom_varContext* atom_var(size_t i);
    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_returnsContext* function_returns();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    St_assignContext *st_assign();
    St_commandContext *st_command();
    St_ifContext *st_if();
    St_forContext *st_for();
    St_switchContext *st_switch();
    St_tryContext *st_try();
    St_whileContext *st_while();
    Xpr_functionContext *xpr_function();
    Xpr_fieldContext *xpr_field();
    Xpr_treeContext *xpr_tree();
    Atom_varContext *atom_var();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SEMI_COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Xpr_treeContext : public antlr4::ParserRuleContext {
  public:
    Xpr_treeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xpr_basefunctionContext *xpr_basefunction();
    Atom_booleanContext *atom_boolean();
    Atom_empty_arrayContext *atom_empty_array();
    Atom_floatContext *atom_float();
    Atom_imaginaryContext *atom_imaginary();
    Atom_integerContext *atom_integer();
    Atom_stringContext *atom_string();
    Atom_varContext *atom_var();
    Xpr_arrayContext *xpr_array();
    Xpr_array_indexContext *xpr_array_index();
    Xpr_cellContext *xpr_cell();
    Xpr_cell_indexContext *xpr_cell_index();
    Xpr_fieldContext *xpr_field();
    Xpr_functionContext *xpr_function();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    std::vector<Xpr_treeContext *> xpr_tree();
    Xpr_treeContext* xpr_tree(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ELMENT_WISE_POWER();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *ELMENT_WISE_TIMES();
    antlr4::tree::TerminalNode *ELMENT_WISE_RIGHT_DIVIDE();
    antlr4::tree::TerminalNode *ELMENT_WISE_LEFT_DIVIDE();
    antlr4::tree::TerminalNode *TIMES();
    antlr4::tree::TerminalNode *RIGHT_DIVIDE();
    antlr4::tree::TerminalNode *LEFT_DIVIDE();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *LESS_THAN_OR_EQUAL();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *GREATER_THAN_OR_EQUAL();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *NOT_EQUAL();
    antlr4::tree::TerminalNode *BINARY_AND();
    antlr4::tree::TerminalNode *BINARY_OR();
    antlr4::tree::TerminalNode *LOGICAL_AND();
    antlr4::tree::TerminalNode *LOGICAL_OR();
    antlr4::tree::TerminalNode *ELMENT_WISE_TRANSPOSE();
    antlr4::tree::TerminalNode *TRANSPOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_treeContext* xpr_tree();
  Xpr_treeContext* xpr_tree(int precedence);
  class  Xpr_tree_Context : public antlr4::ParserRuleContext {
  public:
    Xpr_tree_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xpr_basefunctionContext *xpr_basefunction();
    Atom_booleanContext *atom_boolean();
    Atom_empty_arrayContext *atom_empty_array();
    Atom_endContext *atom_end();
    Atom_floatContext *atom_float();
    Atom_imaginaryContext *atom_imaginary();
    Atom_integerContext *atom_integer();
    Atom_stringContext *atom_string();
    Atom_varContext *atom_var();
    Xpr_array_Context *xpr_array_();
    Xpr_array_indexContext *xpr_array_index();
    Xpr_cell_Context *xpr_cell_();
    Xpr_cell_indexContext *xpr_cell_index();
    Xpr_fieldContext *xpr_field();
    Xpr_functionContext *xpr_function();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    std::vector<Xpr_tree_Context *> xpr_tree_();
    Xpr_tree_Context* xpr_tree_(size_t i);
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ELMENT_WISE_POWER();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *ELMENT_WISE_TIMES();
    antlr4::tree::TerminalNode *ELMENT_WISE_RIGHT_DIVIDE();
    antlr4::tree::TerminalNode *ELMENT_WISE_LEFT_DIVIDE();
    antlr4::tree::TerminalNode *TIMES();
    antlr4::tree::TerminalNode *RIGHT_DIVIDE();
    antlr4::tree::TerminalNode *LEFT_DIVIDE();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *LESS_THAN_OR_EQUAL();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *GREATER_THAN_OR_EQUAL();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *NOT_EQUAL();
    antlr4::tree::TerminalNode *BINARY_AND();
    antlr4::tree::TerminalNode *BINARY_OR();
    antlr4::tree::TerminalNode *LOGICAL_AND();
    antlr4::tree::TerminalNode *LOGICAL_OR();
    antlr4::tree::TerminalNode *ELMENT_WISE_TRANSPOSE();
    antlr4::tree::TerminalNode *TRANSPOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_tree_Context* xpr_tree_();
  Xpr_tree_Context* xpr_tree_(int precedence);
  class  Xpr_arrayContext : public antlr4::ParserRuleContext {
  public:
    Xpr_arrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    std::vector<Xpr_treeContext *> xpr_tree();
    Xpr_treeContext* xpr_tree(size_t i);
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI_COLON();
    antlr4::tree::TerminalNode* SEMI_COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_arrayContext* xpr_array();

  class  Xpr_array_Context : public antlr4::ParserRuleContext {
  public:
    Xpr_array_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    std::vector<Xpr_tree_Context *> xpr_tree_();
    Xpr_tree_Context* xpr_tree_(size_t i);
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI_COLON();
    antlr4::tree::TerminalNode* SEMI_COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_array_Context* xpr_array_();

  class  Xpr_cellContext : public antlr4::ParserRuleContext {
  public:
    Xpr_cellContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<Xpr_treeContext *> xpr_tree();
    Xpr_treeContext* xpr_tree(size_t i);
    std::vector<Xpr_handleContext *> xpr_handle();
    Xpr_handleContext* xpr_handle(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI_COLON();
    antlr4::tree::TerminalNode* SEMI_COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_cellContext* xpr_cell();

  class  Xpr_cell_Context : public antlr4::ParserRuleContext {
  public:
    Xpr_cell_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    std::vector<Xpr_tree_Context *> xpr_tree_();
    Xpr_tree_Context* xpr_tree_(size_t i);
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI_COLON();
    antlr4::tree::TerminalNode* SEMI_COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_cell_Context* xpr_cell_();

  class  Xpr_array_indexContext : public antlr4::ParserRuleContext {
  public:
    Xpr_array_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    Xpr_cell_indexContext *xpr_cell_index();
    Atom_varContext *atom_var();
    std::vector<Atom_index_allContext *> atom_index_all();
    Atom_index_allContext* atom_index_all(size_t i);
    std::vector<Xpr_tree_Context *> xpr_tree_();
    Xpr_tree_Context* xpr_tree_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_array_indexContext* xpr_array_index();

  class  Xpr_cell_indexContext : public antlr4::ParserRuleContext {
  public:
    Xpr_cell_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atom_varContext *atom_var();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<Atom_index_allContext *> atom_index_all();
    Atom_index_allContext* atom_index_all(size_t i);
    std::vector<Xpr_tree_Context *> xpr_tree_();
    Xpr_tree_Context* xpr_tree_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_cell_indexContext* xpr_cell_index();

  class  Xpr_fieldContext : public antlr4::ParserRuleContext {
  public:
    Xpr_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Atom_varContext *> atom_var();
    Atom_varContext* atom_var(size_t i);
    antlr4::tree::TerminalNode *DOT();
    std::vector<Xpr_array_indexContext *> xpr_array_index();
    Xpr_array_indexContext* xpr_array_index(size_t i);
    std::vector<Xpr_cell_indexContext *> xpr_cell_index();
    Xpr_cell_indexContext* xpr_cell_index(size_t i);
    Xpr_functionContext *xpr_function();
    Xpr_fieldContext *xpr_field();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_fieldContext* xpr_field();
  Xpr_fieldContext* xpr_field(int precedence);
  class  Xpr_functionContext : public antlr4::ParserRuleContext {
  public:
    Xpr_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atom_varContext *atom_var();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    std::vector<Func_argContext *> func_arg();
    Func_argContext* func_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_functionContext* xpr_function();

  class  Xpr_basefunctionContext : public antlr4::ParserRuleContext {
  public:
    Xpr_basefunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASE_FUNC();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    std::vector<Func_argContext *> func_arg();
    Func_argContext* func_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_basefunctionContext* xpr_basefunction();

  class  Func_argContext : public antlr4::ParserRuleContext {
  public:
    Func_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xpr_treeContext *xpr_tree();
    Xpr_handleContext *xpr_handle();
    Atom_empty_cellContext *atom_empty_cell();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_argContext* func_arg();

  class  Xpr_handleContext : public antlr4::ParserRuleContext {
  public:
    Xpr_handleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    Atom_varContext *atom_var();
    Function_paramsContext *function_params();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xpr_handleContext* xpr_handle();

  class  Command_argumentContext : public antlr4::ParserRuleContext {
  public:
    Command_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Command_argumentContext* command_argument();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool xpr_treeSempred(Xpr_treeContext *_localctx, size_t predicateIndex);
  bool xpr_tree_Sempred(Xpr_tree_Context *_localctx, size_t predicateIndex);
  bool xpr_fieldSempred(Xpr_fieldContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

