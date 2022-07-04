
// Generated from MATLAB.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "MATLABVisitor.h"


/**
 * This class provides an empty implementation of MATLABVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MATLABBaseVisitor : public MATLABVisitor {
public:

  virtual antlrcpp::Any visitAtom_boolean(MATLABParser::Atom_booleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_empty_array(MATLABParser::Atom_empty_arrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_empty_cell(MATLABParser::Atom_empty_cellContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_end(MATLABParser::Atom_endContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_float(MATLABParser::Atom_floatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_imaginary(MATLABParser::Atom_imaginaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_index_all(MATLABParser::Atom_index_allContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_integer(MATLABParser::Atom_integerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_meta(MATLABParser::Atom_metaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_string(MATLABParser::Atom_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_var(MATLABParser::Atom_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatlab_file(MATLABParser::Matlab_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDef_class(MATLABParser::Def_classContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDef_function(MATLABParser::Def_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib_class_boolean(MATLABParser::Attrib_class_booleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib_class_meta(MATLABParser::Attrib_class_metaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib_property_boolean(MATLABParser::Attrib_property_booleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib_property_access(MATLABParser::Attrib_property_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib_method_boolean(MATLABParser::Attrib_method_booleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttrib_method_access(MATLABParser::Attrib_method_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom_access(MATLABParser::Atom_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_assign(MATLABParser::St_assignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_command(MATLABParser::St_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_if(MATLABParser::St_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_for(MATLABParser::St_forContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_switch(MATLABParser::St_switchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_try(MATLABParser::St_tryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSt_while(MATLABParser::St_whileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_params(MATLABParser::Function_paramsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_returns(MATLABParser::Function_returnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(MATLABParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_tree(MATLABParser::Xpr_treeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_tree_(MATLABParser::Xpr_tree_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_array(MATLABParser::Xpr_arrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_array_(MATLABParser::Xpr_array_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_cell(MATLABParser::Xpr_cellContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_cell_(MATLABParser::Xpr_cell_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_array_index(MATLABParser::Xpr_array_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_cell_index(MATLABParser::Xpr_cell_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_field(MATLABParser::Xpr_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_function(MATLABParser::Xpr_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_basefunction(MATLABParser::Xpr_basefunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_arg(MATLABParser::Func_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXpr_handle(MATLABParser::Xpr_handleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand_argument(MATLABParser::Command_argumentContext *ctx) override {
    return visitChildren(ctx);
  }


};

