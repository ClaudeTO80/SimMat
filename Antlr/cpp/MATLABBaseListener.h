
// Generated from MATLAB.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "MATLABListener.h"


/**
 * This class provides an empty implementation of MATLABListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MATLABBaseListener : public MATLABListener {
public:

  virtual void enterAtom_boolean(MATLABParser::Atom_booleanContext * /*ctx*/) override { }
  virtual void exitAtom_boolean(MATLABParser::Atom_booleanContext * /*ctx*/) override { }

  virtual void enterAtom_empty_array(MATLABParser::Atom_empty_arrayContext * /*ctx*/) override { }
  virtual void exitAtom_empty_array(MATLABParser::Atom_empty_arrayContext * /*ctx*/) override { }

  virtual void enterAtom_empty_cell(MATLABParser::Atom_empty_cellContext * /*ctx*/) override { }
  virtual void exitAtom_empty_cell(MATLABParser::Atom_empty_cellContext * /*ctx*/) override { }

  virtual void enterAtom_end(MATLABParser::Atom_endContext * /*ctx*/) override { }
  virtual void exitAtom_end(MATLABParser::Atom_endContext * /*ctx*/) override { }

  virtual void enterAtom_float(MATLABParser::Atom_floatContext * /*ctx*/) override { }
  virtual void exitAtom_float(MATLABParser::Atom_floatContext * /*ctx*/) override { }

  virtual void enterAtom_imaginary(MATLABParser::Atom_imaginaryContext * /*ctx*/) override { }
  virtual void exitAtom_imaginary(MATLABParser::Atom_imaginaryContext * /*ctx*/) override { }

  virtual void enterAtom_index_all(MATLABParser::Atom_index_allContext * /*ctx*/) override { }
  virtual void exitAtom_index_all(MATLABParser::Atom_index_allContext * /*ctx*/) override { }

  virtual void enterAtom_integer(MATLABParser::Atom_integerContext * /*ctx*/) override { }
  virtual void exitAtom_integer(MATLABParser::Atom_integerContext * /*ctx*/) override { }

  virtual void enterAtom_meta(MATLABParser::Atom_metaContext * /*ctx*/) override { }
  virtual void exitAtom_meta(MATLABParser::Atom_metaContext * /*ctx*/) override { }

  virtual void enterAtom_string(MATLABParser::Atom_stringContext * /*ctx*/) override { }
  virtual void exitAtom_string(MATLABParser::Atom_stringContext * /*ctx*/) override { }

  virtual void enterAtom_var(MATLABParser::Atom_varContext * /*ctx*/) override { }
  virtual void exitAtom_var(MATLABParser::Atom_varContext * /*ctx*/) override { }

  virtual void enterMatlab_file(MATLABParser::Matlab_fileContext * /*ctx*/) override { }
  virtual void exitMatlab_file(MATLABParser::Matlab_fileContext * /*ctx*/) override { }

  virtual void enterDef_class(MATLABParser::Def_classContext * /*ctx*/) override { }
  virtual void exitDef_class(MATLABParser::Def_classContext * /*ctx*/) override { }

  virtual void enterDef_function(MATLABParser::Def_functionContext * /*ctx*/) override { }
  virtual void exitDef_function(MATLABParser::Def_functionContext * /*ctx*/) override { }

  virtual void enterAttrib_class_boolean(MATLABParser::Attrib_class_booleanContext * /*ctx*/) override { }
  virtual void exitAttrib_class_boolean(MATLABParser::Attrib_class_booleanContext * /*ctx*/) override { }

  virtual void enterAttrib_class_meta(MATLABParser::Attrib_class_metaContext * /*ctx*/) override { }
  virtual void exitAttrib_class_meta(MATLABParser::Attrib_class_metaContext * /*ctx*/) override { }

  virtual void enterAttrib_property_boolean(MATLABParser::Attrib_property_booleanContext * /*ctx*/) override { }
  virtual void exitAttrib_property_boolean(MATLABParser::Attrib_property_booleanContext * /*ctx*/) override { }

  virtual void enterAttrib_property_access(MATLABParser::Attrib_property_accessContext * /*ctx*/) override { }
  virtual void exitAttrib_property_access(MATLABParser::Attrib_property_accessContext * /*ctx*/) override { }

  virtual void enterAttrib_method_boolean(MATLABParser::Attrib_method_booleanContext * /*ctx*/) override { }
  virtual void exitAttrib_method_boolean(MATLABParser::Attrib_method_booleanContext * /*ctx*/) override { }

  virtual void enterAttrib_method_access(MATLABParser::Attrib_method_accessContext * /*ctx*/) override { }
  virtual void exitAttrib_method_access(MATLABParser::Attrib_method_accessContext * /*ctx*/) override { }

  virtual void enterAtom_access(MATLABParser::Atom_accessContext * /*ctx*/) override { }
  virtual void exitAtom_access(MATLABParser::Atom_accessContext * /*ctx*/) override { }

  virtual void enterSt_assign(MATLABParser::St_assignContext * /*ctx*/) override { }
  virtual void exitSt_assign(MATLABParser::St_assignContext * /*ctx*/) override { }

  virtual void enterSt_command(MATLABParser::St_commandContext * /*ctx*/) override { }
  virtual void exitSt_command(MATLABParser::St_commandContext * /*ctx*/) override { }

  virtual void enterSt_if(MATLABParser::St_ifContext * /*ctx*/) override { }
  virtual void exitSt_if(MATLABParser::St_ifContext * /*ctx*/) override { }

  virtual void enterSt_for(MATLABParser::St_forContext * /*ctx*/) override { }
  virtual void exitSt_for(MATLABParser::St_forContext * /*ctx*/) override { }

  virtual void enterSt_switch(MATLABParser::St_switchContext * /*ctx*/) override { }
  virtual void exitSt_switch(MATLABParser::St_switchContext * /*ctx*/) override { }

  virtual void enterSt_try(MATLABParser::St_tryContext * /*ctx*/) override { }
  virtual void exitSt_try(MATLABParser::St_tryContext * /*ctx*/) override { }

  virtual void enterSt_while(MATLABParser::St_whileContext * /*ctx*/) override { }
  virtual void exitSt_while(MATLABParser::St_whileContext * /*ctx*/) override { }

  virtual void enterFunction_params(MATLABParser::Function_paramsContext * /*ctx*/) override { }
  virtual void exitFunction_params(MATLABParser::Function_paramsContext * /*ctx*/) override { }

  virtual void enterFunction_returns(MATLABParser::Function_returnsContext * /*ctx*/) override { }
  virtual void exitFunction_returns(MATLABParser::Function_returnsContext * /*ctx*/) override { }

  virtual void enterStatement(MATLABParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(MATLABParser::StatementContext * /*ctx*/) override { }

  virtual void enterXpr_tree(MATLABParser::Xpr_treeContext * /*ctx*/) override { }
  virtual void exitXpr_tree(MATLABParser::Xpr_treeContext * /*ctx*/) override { }

  virtual void enterXpr_tree_(MATLABParser::Xpr_tree_Context * /*ctx*/) override { }
  virtual void exitXpr_tree_(MATLABParser::Xpr_tree_Context * /*ctx*/) override { }

  virtual void enterXpr_array(MATLABParser::Xpr_arrayContext * /*ctx*/) override { }
  virtual void exitXpr_array(MATLABParser::Xpr_arrayContext * /*ctx*/) override { }

  virtual void enterXpr_array_(MATLABParser::Xpr_array_Context * /*ctx*/) override { }
  virtual void exitXpr_array_(MATLABParser::Xpr_array_Context * /*ctx*/) override { }

  virtual void enterXpr_cell(MATLABParser::Xpr_cellContext * /*ctx*/) override { }
  virtual void exitXpr_cell(MATLABParser::Xpr_cellContext * /*ctx*/) override { }

  virtual void enterXpr_cell_(MATLABParser::Xpr_cell_Context * /*ctx*/) override { }
  virtual void exitXpr_cell_(MATLABParser::Xpr_cell_Context * /*ctx*/) override { }

  virtual void enterXpr_array_index(MATLABParser::Xpr_array_indexContext * /*ctx*/) override { }
  virtual void exitXpr_array_index(MATLABParser::Xpr_array_indexContext * /*ctx*/) override { }

  virtual void enterXpr_cell_index(MATLABParser::Xpr_cell_indexContext * /*ctx*/) override { }
  virtual void exitXpr_cell_index(MATLABParser::Xpr_cell_indexContext * /*ctx*/) override { }

  virtual void enterXpr_field(MATLABParser::Xpr_fieldContext * /*ctx*/) override { }
  virtual void exitXpr_field(MATLABParser::Xpr_fieldContext * /*ctx*/) override { }

  virtual void enterXpr_function(MATLABParser::Xpr_functionContext * /*ctx*/) override { }
  virtual void exitXpr_function(MATLABParser::Xpr_functionContext * /*ctx*/) override { }

  virtual void enterXpr_basefunction(MATLABParser::Xpr_basefunctionContext * /*ctx*/) override { }
  virtual void exitXpr_basefunction(MATLABParser::Xpr_basefunctionContext * /*ctx*/) override { }

  virtual void enterFunc_arg(MATLABParser::Func_argContext * /*ctx*/) override { }
  virtual void exitFunc_arg(MATLABParser::Func_argContext * /*ctx*/) override { }

  virtual void enterXpr_handle(MATLABParser::Xpr_handleContext * /*ctx*/) override { }
  virtual void exitXpr_handle(MATLABParser::Xpr_handleContext * /*ctx*/) override { }

  virtual void enterCommand_argument(MATLABParser::Command_argumentContext * /*ctx*/) override { }
  virtual void exitCommand_argument(MATLABParser::Command_argumentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

