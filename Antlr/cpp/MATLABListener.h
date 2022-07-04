
// Generated from MATLAB.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "MATLABParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MATLABParser.
 */
class  MATLABListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterAtom_boolean(MATLABParser::Atom_booleanContext *ctx) = 0;
  virtual void exitAtom_boolean(MATLABParser::Atom_booleanContext *ctx) = 0;

  virtual void enterAtom_empty_array(MATLABParser::Atom_empty_arrayContext *ctx) = 0;
  virtual void exitAtom_empty_array(MATLABParser::Atom_empty_arrayContext *ctx) = 0;

  virtual void enterAtom_empty_cell(MATLABParser::Atom_empty_cellContext *ctx) = 0;
  virtual void exitAtom_empty_cell(MATLABParser::Atom_empty_cellContext *ctx) = 0;

  virtual void enterAtom_end(MATLABParser::Atom_endContext *ctx) = 0;
  virtual void exitAtom_end(MATLABParser::Atom_endContext *ctx) = 0;

  virtual void enterAtom_float(MATLABParser::Atom_floatContext *ctx) = 0;
  virtual void exitAtom_float(MATLABParser::Atom_floatContext *ctx) = 0;

  virtual void enterAtom_imaginary(MATLABParser::Atom_imaginaryContext *ctx) = 0;
  virtual void exitAtom_imaginary(MATLABParser::Atom_imaginaryContext *ctx) = 0;

  virtual void enterAtom_index_all(MATLABParser::Atom_index_allContext *ctx) = 0;
  virtual void exitAtom_index_all(MATLABParser::Atom_index_allContext *ctx) = 0;

  virtual void enterAtom_integer(MATLABParser::Atom_integerContext *ctx) = 0;
  virtual void exitAtom_integer(MATLABParser::Atom_integerContext *ctx) = 0;

  virtual void enterAtom_meta(MATLABParser::Atom_metaContext *ctx) = 0;
  virtual void exitAtom_meta(MATLABParser::Atom_metaContext *ctx) = 0;

  virtual void enterAtom_string(MATLABParser::Atom_stringContext *ctx) = 0;
  virtual void exitAtom_string(MATLABParser::Atom_stringContext *ctx) = 0;

  virtual void enterAtom_var(MATLABParser::Atom_varContext *ctx) = 0;
  virtual void exitAtom_var(MATLABParser::Atom_varContext *ctx) = 0;

  virtual void enterMatlab_file(MATLABParser::Matlab_fileContext *ctx) = 0;
  virtual void exitMatlab_file(MATLABParser::Matlab_fileContext *ctx) = 0;

  virtual void enterDef_class(MATLABParser::Def_classContext *ctx) = 0;
  virtual void exitDef_class(MATLABParser::Def_classContext *ctx) = 0;

  virtual void enterDef_function(MATLABParser::Def_functionContext *ctx) = 0;
  virtual void exitDef_function(MATLABParser::Def_functionContext *ctx) = 0;

  virtual void enterAttrib_class_boolean(MATLABParser::Attrib_class_booleanContext *ctx) = 0;
  virtual void exitAttrib_class_boolean(MATLABParser::Attrib_class_booleanContext *ctx) = 0;

  virtual void enterAttrib_class_meta(MATLABParser::Attrib_class_metaContext *ctx) = 0;
  virtual void exitAttrib_class_meta(MATLABParser::Attrib_class_metaContext *ctx) = 0;

  virtual void enterAttrib_property_boolean(MATLABParser::Attrib_property_booleanContext *ctx) = 0;
  virtual void exitAttrib_property_boolean(MATLABParser::Attrib_property_booleanContext *ctx) = 0;

  virtual void enterAttrib_property_access(MATLABParser::Attrib_property_accessContext *ctx) = 0;
  virtual void exitAttrib_property_access(MATLABParser::Attrib_property_accessContext *ctx) = 0;

  virtual void enterAttrib_method_boolean(MATLABParser::Attrib_method_booleanContext *ctx) = 0;
  virtual void exitAttrib_method_boolean(MATLABParser::Attrib_method_booleanContext *ctx) = 0;

  virtual void enterAttrib_method_access(MATLABParser::Attrib_method_accessContext *ctx) = 0;
  virtual void exitAttrib_method_access(MATLABParser::Attrib_method_accessContext *ctx) = 0;

  virtual void enterAtom_access(MATLABParser::Atom_accessContext *ctx) = 0;
  virtual void exitAtom_access(MATLABParser::Atom_accessContext *ctx) = 0;

  virtual void enterSt_assign(MATLABParser::St_assignContext *ctx) = 0;
  virtual void exitSt_assign(MATLABParser::St_assignContext *ctx) = 0;

  virtual void enterSt_command(MATLABParser::St_commandContext *ctx) = 0;
  virtual void exitSt_command(MATLABParser::St_commandContext *ctx) = 0;

  virtual void enterSt_if(MATLABParser::St_ifContext *ctx) = 0;
  virtual void exitSt_if(MATLABParser::St_ifContext *ctx) = 0;

  virtual void enterSt_for(MATLABParser::St_forContext *ctx) = 0;
  virtual void exitSt_for(MATLABParser::St_forContext *ctx) = 0;

  virtual void enterSt_switch(MATLABParser::St_switchContext *ctx) = 0;
  virtual void exitSt_switch(MATLABParser::St_switchContext *ctx) = 0;

  virtual void enterSt_try(MATLABParser::St_tryContext *ctx) = 0;
  virtual void exitSt_try(MATLABParser::St_tryContext *ctx) = 0;

  virtual void enterSt_while(MATLABParser::St_whileContext *ctx) = 0;
  virtual void exitSt_while(MATLABParser::St_whileContext *ctx) = 0;

  virtual void enterFunction_params(MATLABParser::Function_paramsContext *ctx) = 0;
  virtual void exitFunction_params(MATLABParser::Function_paramsContext *ctx) = 0;

  virtual void enterFunction_returns(MATLABParser::Function_returnsContext *ctx) = 0;
  virtual void exitFunction_returns(MATLABParser::Function_returnsContext *ctx) = 0;

  virtual void enterStatement(MATLABParser::StatementContext *ctx) = 0;
  virtual void exitStatement(MATLABParser::StatementContext *ctx) = 0;

  virtual void enterXpr_tree(MATLABParser::Xpr_treeContext *ctx) = 0;
  virtual void exitXpr_tree(MATLABParser::Xpr_treeContext *ctx) = 0;

  virtual void enterXpr_tree_(MATLABParser::Xpr_tree_Context *ctx) = 0;
  virtual void exitXpr_tree_(MATLABParser::Xpr_tree_Context *ctx) = 0;

  virtual void enterXpr_array(MATLABParser::Xpr_arrayContext *ctx) = 0;
  virtual void exitXpr_array(MATLABParser::Xpr_arrayContext *ctx) = 0;

  virtual void enterXpr_array_(MATLABParser::Xpr_array_Context *ctx) = 0;
  virtual void exitXpr_array_(MATLABParser::Xpr_array_Context *ctx) = 0;

  virtual void enterXpr_cell(MATLABParser::Xpr_cellContext *ctx) = 0;
  virtual void exitXpr_cell(MATLABParser::Xpr_cellContext *ctx) = 0;

  virtual void enterXpr_cell_(MATLABParser::Xpr_cell_Context *ctx) = 0;
  virtual void exitXpr_cell_(MATLABParser::Xpr_cell_Context *ctx) = 0;

  virtual void enterXpr_array_index(MATLABParser::Xpr_array_indexContext *ctx) = 0;
  virtual void exitXpr_array_index(MATLABParser::Xpr_array_indexContext *ctx) = 0;

  virtual void enterXpr_cell_index(MATLABParser::Xpr_cell_indexContext *ctx) = 0;
  virtual void exitXpr_cell_index(MATLABParser::Xpr_cell_indexContext *ctx) = 0;

  virtual void enterXpr_field(MATLABParser::Xpr_fieldContext *ctx) = 0;
  virtual void exitXpr_field(MATLABParser::Xpr_fieldContext *ctx) = 0;

  virtual void enterXpr_function(MATLABParser::Xpr_functionContext *ctx) = 0;
  virtual void exitXpr_function(MATLABParser::Xpr_functionContext *ctx) = 0;

  virtual void enterXpr_basefunction(MATLABParser::Xpr_basefunctionContext *ctx) = 0;
  virtual void exitXpr_basefunction(MATLABParser::Xpr_basefunctionContext *ctx) = 0;

  virtual void enterFunc_arg(MATLABParser::Func_argContext *ctx) = 0;
  virtual void exitFunc_arg(MATLABParser::Func_argContext *ctx) = 0;

  virtual void enterXpr_handle(MATLABParser::Xpr_handleContext *ctx) = 0;
  virtual void exitXpr_handle(MATLABParser::Xpr_handleContext *ctx) = 0;

  virtual void enterCommand_argument(MATLABParser::Command_argumentContext *ctx) = 0;
  virtual void exitCommand_argument(MATLABParser::Command_argumentContext *ctx) = 0;


};

