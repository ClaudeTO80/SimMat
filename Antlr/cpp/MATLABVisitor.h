
// Generated from MATLAB.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "MATLABParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MATLABParser.
 */
class  MATLABVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MATLABParser.
   */
    virtual antlrcpp::Any visitAtom_boolean(MATLABParser::Atom_booleanContext *context) = 0;

    virtual antlrcpp::Any visitAtom_empty_array(MATLABParser::Atom_empty_arrayContext *context) = 0;

    virtual antlrcpp::Any visitAtom_empty_cell(MATLABParser::Atom_empty_cellContext *context) = 0;

    virtual antlrcpp::Any visitAtom_end(MATLABParser::Atom_endContext *context) = 0;

    virtual antlrcpp::Any visitAtom_float(MATLABParser::Atom_floatContext *context) = 0;

    virtual antlrcpp::Any visitAtom_imaginary(MATLABParser::Atom_imaginaryContext *context) = 0;

    virtual antlrcpp::Any visitAtom_index_all(MATLABParser::Atom_index_allContext *context) = 0;

    virtual antlrcpp::Any visitAtom_integer(MATLABParser::Atom_integerContext *context) = 0;

    virtual antlrcpp::Any visitAtom_meta(MATLABParser::Atom_metaContext *context) = 0;

    virtual antlrcpp::Any visitAtom_string(MATLABParser::Atom_stringContext *context) = 0;

    virtual antlrcpp::Any visitAtom_var(MATLABParser::Atom_varContext *context) = 0;

    virtual antlrcpp::Any visitMatlab_file(MATLABParser::Matlab_fileContext *context) = 0;

    virtual antlrcpp::Any visitDef_class(MATLABParser::Def_classContext *context) = 0;

    virtual antlrcpp::Any visitDef_function(MATLABParser::Def_functionContext *context) = 0;

    virtual antlrcpp::Any visitAttrib_class_boolean(MATLABParser::Attrib_class_booleanContext *context) = 0;

    virtual antlrcpp::Any visitAttrib_class_meta(MATLABParser::Attrib_class_metaContext *context) = 0;

    virtual antlrcpp::Any visitAttrib_property_boolean(MATLABParser::Attrib_property_booleanContext *context) = 0;

    virtual antlrcpp::Any visitAttrib_property_access(MATLABParser::Attrib_property_accessContext *context) = 0;

    virtual antlrcpp::Any visitAttrib_method_boolean(MATLABParser::Attrib_method_booleanContext *context) = 0;

    virtual antlrcpp::Any visitAttrib_method_access(MATLABParser::Attrib_method_accessContext *context) = 0;

    virtual antlrcpp::Any visitAtom_access(MATLABParser::Atom_accessContext *context) = 0;

    virtual antlrcpp::Any visitSt_assign(MATLABParser::St_assignContext *context) = 0;

    virtual antlrcpp::Any visitSt_command(MATLABParser::St_commandContext *context) = 0;

    virtual antlrcpp::Any visitSt_if(MATLABParser::St_ifContext *context) = 0;

    virtual antlrcpp::Any visitSt_for(MATLABParser::St_forContext *context) = 0;

    virtual antlrcpp::Any visitSt_switch(MATLABParser::St_switchContext *context) = 0;

    virtual antlrcpp::Any visitSt_try(MATLABParser::St_tryContext *context) = 0;

    virtual antlrcpp::Any visitSt_while(MATLABParser::St_whileContext *context) = 0;

    virtual antlrcpp::Any visitFunction_params(MATLABParser::Function_paramsContext *context) = 0;

    virtual antlrcpp::Any visitFunction_returns(MATLABParser::Function_returnsContext *context) = 0;

    virtual antlrcpp::Any visitStatement(MATLABParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitXpr_tree(MATLABParser::Xpr_treeContext *context) = 0;

    virtual antlrcpp::Any visitXpr_tree_(MATLABParser::Xpr_tree_Context *context) = 0;

    virtual antlrcpp::Any visitXpr_array(MATLABParser::Xpr_arrayContext *context) = 0;

    virtual antlrcpp::Any visitXpr_array_(MATLABParser::Xpr_array_Context *context) = 0;

    virtual antlrcpp::Any visitXpr_cell(MATLABParser::Xpr_cellContext *context) = 0;

    virtual antlrcpp::Any visitXpr_cell_(MATLABParser::Xpr_cell_Context *context) = 0;

    virtual antlrcpp::Any visitXpr_array_index(MATLABParser::Xpr_array_indexContext *context) = 0;

    virtual antlrcpp::Any visitXpr_cell_index(MATLABParser::Xpr_cell_indexContext *context) = 0;

    virtual antlrcpp::Any visitXpr_field(MATLABParser::Xpr_fieldContext *context) = 0;

    virtual antlrcpp::Any visitXpr_function(MATLABParser::Xpr_functionContext *context) = 0;

    virtual antlrcpp::Any visitXpr_basefunction(MATLABParser::Xpr_basefunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunc_arg(MATLABParser::Func_argContext *context) = 0;

    virtual antlrcpp::Any visitXpr_handle(MATLABParser::Xpr_handleContext *context) = 0;

    virtual antlrcpp::Any visitCommand_argument(MATLABParser::Command_argumentContext *context) = 0;


};

