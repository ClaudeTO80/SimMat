
// Generated from MATLAB.g4 by ANTLR 4.9.3


#include "MATLABListener.h"
#include "MATLABVisitor.h"

#include "MATLABParser.h"


using namespace antlrcpp;
using namespace antlr4;

MATLABParser::MATLABParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MATLABParser::~MATLABParser() {
  delete _interpreter;
}

std::string MATLABParser::getGrammarFileName() const {
  return "MATLAB.g4";
}

const std::vector<std::string>& MATLABParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MATLABParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Atom_booleanContext ------------------------------------------------------------------

MATLABParser::Atom_booleanContext::Atom_booleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MATLABParser::Atom_booleanContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_boolean;
}

void MATLABParser::Atom_booleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_boolean(this);
}

void MATLABParser::Atom_booleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_boolean(this);
}


antlrcpp::Any MATLABParser::Atom_booleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_boolean(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_booleanContext* MATLABParser::atom_boolean() {
  Atom_booleanContext *_localctx = _tracker.createInstance<Atom_booleanContext>(_ctx, getState());
  enterRule(_localctx, 0, MATLABParser::RuleAtom_boolean);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _la = _input->LA(1);
    if (!(_la == MATLABParser::T__0

    || _la == MATLABParser::T__1)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_empty_arrayContext ------------------------------------------------------------------

MATLABParser::Atom_empty_arrayContext::Atom_empty_arrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_empty_arrayContext::LEFT_SQUARE_BRACKET() {
  return getToken(MATLABParser::LEFT_SQUARE_BRACKET, 0);
}

tree::TerminalNode* MATLABParser::Atom_empty_arrayContext::RIGHT_SQUARE_BRACKET() {
  return getToken(MATLABParser::RIGHT_SQUARE_BRACKET, 0);
}


size_t MATLABParser::Atom_empty_arrayContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_empty_array;
}

void MATLABParser::Atom_empty_arrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_empty_array(this);
}

void MATLABParser::Atom_empty_arrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_empty_array(this);
}


antlrcpp::Any MATLABParser::Atom_empty_arrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_empty_array(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_empty_arrayContext* MATLABParser::atom_empty_array() {
  Atom_empty_arrayContext *_localctx = _tracker.createInstance<Atom_empty_arrayContext>(_ctx, getState());
  enterRule(_localctx, 2, MATLABParser::RuleAtom_empty_array);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(MATLABParser::LEFT_SQUARE_BRACKET);
    setState(93);
    match(MATLABParser::RIGHT_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_empty_cellContext ------------------------------------------------------------------

MATLABParser::Atom_empty_cellContext::Atom_empty_cellContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_empty_cellContext::LEFT_BRACE() {
  return getToken(MATLABParser::LEFT_BRACE, 0);
}

tree::TerminalNode* MATLABParser::Atom_empty_cellContext::RIGHT_BRACE() {
  return getToken(MATLABParser::RIGHT_BRACE, 0);
}


size_t MATLABParser::Atom_empty_cellContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_empty_cell;
}

void MATLABParser::Atom_empty_cellContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_empty_cell(this);
}

void MATLABParser::Atom_empty_cellContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_empty_cell(this);
}


antlrcpp::Any MATLABParser::Atom_empty_cellContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_empty_cell(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_empty_cellContext* MATLABParser::atom_empty_cell() {
  Atom_empty_cellContext *_localctx = _tracker.createInstance<Atom_empty_cellContext>(_ctx, getState());
  enterRule(_localctx, 4, MATLABParser::RuleAtom_empty_cell);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(MATLABParser::LEFT_BRACE);
    setState(96);
    match(MATLABParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_endContext ------------------------------------------------------------------

MATLABParser::Atom_endContext::Atom_endContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_endContext::END() {
  return getToken(MATLABParser::END, 0);
}


size_t MATLABParser::Atom_endContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_end;
}

void MATLABParser::Atom_endContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_end(this);
}

void MATLABParser::Atom_endContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_end(this);
}


antlrcpp::Any MATLABParser::Atom_endContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_end(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_endContext* MATLABParser::atom_end() {
  Atom_endContext *_localctx = _tracker.createInstance<Atom_endContext>(_ctx, getState());
  enterRule(_localctx, 6, MATLABParser::RuleAtom_end);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(MATLABParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_floatContext ------------------------------------------------------------------

MATLABParser::Atom_floatContext::Atom_floatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_floatContext::FLOAT() {
  return getToken(MATLABParser::FLOAT, 0);
}


size_t MATLABParser::Atom_floatContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_float;
}

void MATLABParser::Atom_floatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_float(this);
}

void MATLABParser::Atom_floatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_float(this);
}


antlrcpp::Any MATLABParser::Atom_floatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_float(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_floatContext* MATLABParser::atom_float() {
  Atom_floatContext *_localctx = _tracker.createInstance<Atom_floatContext>(_ctx, getState());
  enterRule(_localctx, 8, MATLABParser::RuleAtom_float);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(MATLABParser::FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_imaginaryContext ------------------------------------------------------------------

MATLABParser::Atom_imaginaryContext::Atom_imaginaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_imaginaryContext::IMAGINARY() {
  return getToken(MATLABParser::IMAGINARY, 0);
}


size_t MATLABParser::Atom_imaginaryContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_imaginary;
}

void MATLABParser::Atom_imaginaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_imaginary(this);
}

void MATLABParser::Atom_imaginaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_imaginary(this);
}


antlrcpp::Any MATLABParser::Atom_imaginaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_imaginary(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_imaginaryContext* MATLABParser::atom_imaginary() {
  Atom_imaginaryContext *_localctx = _tracker.createInstance<Atom_imaginaryContext>(_ctx, getState());
  enterRule(_localctx, 10, MATLABParser::RuleAtom_imaginary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(MATLABParser::IMAGINARY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_index_allContext ------------------------------------------------------------------

MATLABParser::Atom_index_allContext::Atom_index_allContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_index_allContext::COLON() {
  return getToken(MATLABParser::COLON, 0);
}


size_t MATLABParser::Atom_index_allContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_index_all;
}

void MATLABParser::Atom_index_allContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_index_all(this);
}

void MATLABParser::Atom_index_allContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_index_all(this);
}


antlrcpp::Any MATLABParser::Atom_index_allContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_index_all(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_index_allContext* MATLABParser::atom_index_all() {
  Atom_index_allContext *_localctx = _tracker.createInstance<Atom_index_allContext>(_ctx, getState());
  enterRule(_localctx, 12, MATLABParser::RuleAtom_index_all);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(MATLABParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_integerContext ------------------------------------------------------------------

MATLABParser::Atom_integerContext::Atom_integerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_integerContext::INT() {
  return getToken(MATLABParser::INT, 0);
}


size_t MATLABParser::Atom_integerContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_integer;
}

void MATLABParser::Atom_integerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_integer(this);
}

void MATLABParser::Atom_integerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_integer(this);
}


antlrcpp::Any MATLABParser::Atom_integerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_integer(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_integerContext* MATLABParser::atom_integer() {
  Atom_integerContext *_localctx = _tracker.createInstance<Atom_integerContext>(_ctx, getState());
  enterRule(_localctx, 14, MATLABParser::RuleAtom_integer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(MATLABParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_metaContext ------------------------------------------------------------------

MATLABParser::Atom_metaContext::Atom_metaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MATLABParser::Atom_metaContext::QUESTION() {
  return getTokens(MATLABParser::QUESTION);
}

tree::TerminalNode* MATLABParser::Atom_metaContext::QUESTION(size_t i) {
  return getToken(MATLABParser::QUESTION, i);
}

std::vector<MATLABParser::Atom_varContext *> MATLABParser::Atom_metaContext::atom_var() {
  return getRuleContexts<MATLABParser::Atom_varContext>();
}

MATLABParser::Atom_varContext* MATLABParser::Atom_metaContext::atom_var(size_t i) {
  return getRuleContext<MATLABParser::Atom_varContext>(i);
}

tree::TerminalNode* MATLABParser::Atom_metaContext::LEFT_BRACE() {
  return getToken(MATLABParser::LEFT_BRACE, 0);
}

tree::TerminalNode* MATLABParser::Atom_metaContext::RIGHT_BRACE() {
  return getToken(MATLABParser::RIGHT_BRACE, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::Atom_metaContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Atom_metaContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::Atom_metaContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_meta;
}

void MATLABParser::Atom_metaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_meta(this);
}

void MATLABParser::Atom_metaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_meta(this);
}


antlrcpp::Any MATLABParser::Atom_metaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_meta(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_metaContext* MATLABParser::atom_meta() {
  Atom_metaContext *_localctx = _tracker.createInstance<Atom_metaContext>(_ctx, getState());
  enterRule(_localctx, 16, MATLABParser::RuleAtom_meta);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MATLABParser::QUESTION: {
        enterOuterAlt(_localctx, 1);
        setState(108);
        match(MATLABParser::QUESTION);
        setState(109);
        atom_var();
        break;
      }

      case MATLABParser::LEFT_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        match(MATLABParser::LEFT_BRACE);
        setState(123);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::QUESTION) {
          setState(111);
          match(MATLABParser::QUESTION);
          setState(112);
          atom_var();
          setState(120);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == MATLABParser::COMMA

          || _la == MATLABParser::QUESTION) {
            setState(114);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == MATLABParser::COMMA) {
              setState(113);
              match(MATLABParser::COMMA);
            }
            setState(116);
            match(MATLABParser::QUESTION);
            setState(117);
            atom_var();
            setState(122);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(125);
        match(MATLABParser::RIGHT_BRACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_stringContext ------------------------------------------------------------------

MATLABParser::Atom_stringContext::Atom_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_stringContext::STRING() {
  return getToken(MATLABParser::STRING, 0);
}


size_t MATLABParser::Atom_stringContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_string;
}

void MATLABParser::Atom_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_string(this);
}

void MATLABParser::Atom_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_string(this);
}


antlrcpp::Any MATLABParser::Atom_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_string(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_stringContext* MATLABParser::atom_string() {
  Atom_stringContext *_localctx = _tracker.createInstance<Atom_stringContext>(_ctx, getState());
  enterRule(_localctx, 18, MATLABParser::RuleAtom_string);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(MATLABParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_varContext ------------------------------------------------------------------

MATLABParser::Atom_varContext::Atom_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Atom_varContext::ID() {
  return getToken(MATLABParser::ID, 0);
}

tree::TerminalNode* MATLABParser::Atom_varContext::GET() {
  return getToken(MATLABParser::GET, 0);
}

tree::TerminalNode* MATLABParser::Atom_varContext::SET() {
  return getToken(MATLABParser::SET, 0);
}

tree::TerminalNode* MATLABParser::Atom_varContext::STATIC() {
  return getToken(MATLABParser::STATIC, 0);
}


size_t MATLABParser::Atom_varContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_var;
}

void MATLABParser::Atom_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_var(this);
}

void MATLABParser::Atom_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_var(this);
}


antlrcpp::Any MATLABParser::Atom_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_var(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_varContext* MATLABParser::atom_var() {
  Atom_varContext *_localctx = _tracker.createInstance<Atom_varContext>(_ctx, getState());
  enterRule(_localctx, 20, MATLABParser::RuleAtom_var);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    _la = _input->LA(1);
    if (!(((((_la - 39) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 39)) & ((1ULL << (MATLABParser::GET - 39))
      | (1ULL << (MATLABParser::SET - 39))
      | (1ULL << (MATLABParser::STATIC - 39))
      | (1ULL << (MATLABParser::ID - 39)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Matlab_fileContext ------------------------------------------------------------------

MATLABParser::Matlab_fileContext::Matlab_fileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MATLABParser::Def_classContext *> MATLABParser::Matlab_fileContext::def_class() {
  return getRuleContexts<MATLABParser::Def_classContext>();
}

MATLABParser::Def_classContext* MATLABParser::Matlab_fileContext::def_class(size_t i) {
  return getRuleContext<MATLABParser::Def_classContext>(i);
}

std::vector<MATLABParser::StatementContext *> MATLABParser::Matlab_fileContext::statement() {
  return getRuleContexts<MATLABParser::StatementContext>();
}

MATLABParser::StatementContext* MATLABParser::Matlab_fileContext::statement(size_t i) {
  return getRuleContext<MATLABParser::StatementContext>(i);
}

std::vector<MATLABParser::Def_functionContext *> MATLABParser::Matlab_fileContext::def_function() {
  return getRuleContexts<MATLABParser::Def_functionContext>();
}

MATLABParser::Def_functionContext* MATLABParser::Matlab_fileContext::def_function(size_t i) {
  return getRuleContext<MATLABParser::Def_functionContext>(i);
}


size_t MATLABParser::Matlab_fileContext::getRuleIndex() const {
  return MATLABParser::RuleMatlab_file;
}

void MATLABParser::Matlab_fileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatlab_file(this);
}

void MATLABParser::Matlab_fileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatlab_file(this);
}


antlrcpp::Any MATLABParser::Matlab_fileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitMatlab_file(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Matlab_fileContext* MATLABParser::matlab_file() {
  Matlab_fileContext *_localctx = _tracker.createInstance<Matlab_fileContext>(_ctx, getState());
  enterRule(_localctx, 22, MATLABParser::RuleMatlab_file);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
      | (1ULL << MATLABParser::T__1)
      | (1ULL << MATLABParser::BREAK)
      | (1ULL << MATLABParser::CLASSDEF)
      | (1ULL << MATLABParser::CONTINUE)
      | (1ULL << MATLABParser::FOR)
      | (1ULL << MATLABParser::FUNCTION)
      | (1ULL << MATLABParser::GET)
      | (1ULL << MATLABParser::IF)
      | (1ULL << MATLABParser::RETURN)
      | (1ULL << MATLABParser::SET)
      | (1ULL << MATLABParser::SWITCH)
      | (1ULL << MATLABParser::TRY)
      | (1ULL << MATLABParser::WHILE)
      | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
      | (1ULL << (MATLABParser::NOT - 70))
      | (1ULL << (MATLABParser::PLUS - 70))
      | (1ULL << (MATLABParser::LEFT_BRACE - 70))
      | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
      | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
      | (1ULL << (MATLABParser::BASE_FUNC - 70))
      | (1ULL << (MATLABParser::ID - 70))
      | (1ULL << (MATLABParser::IMAGINARY - 70))
      | (1ULL << (MATLABParser::INT - 70))
      | (1ULL << (MATLABParser::FLOAT - 70))
      | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
      setState(135);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MATLABParser::CLASSDEF: {
          setState(132);
          def_class();
          break;
        }

        case MATLABParser::T__0:
        case MATLABParser::T__1:
        case MATLABParser::BREAK:
        case MATLABParser::CONTINUE:
        case MATLABParser::FOR:
        case MATLABParser::GET:
        case MATLABParser::IF:
        case MATLABParser::RETURN:
        case MATLABParser::SET:
        case MATLABParser::SWITCH:
        case MATLABParser::TRY:
        case MATLABParser::WHILE:
        case MATLABParser::STATIC:
        case MATLABParser::MINUS:
        case MATLABParser::NOT:
        case MATLABParser::PLUS:
        case MATLABParser::LEFT_BRACE:
        case MATLABParser::LEFT_PARENTHESIS:
        case MATLABParser::LEFT_SQUARE_BRACKET:
        case MATLABParser::BASE_FUNC:
        case MATLABParser::ID:
        case MATLABParser::IMAGINARY:
        case MATLABParser::INT:
        case MATLABParser::FLOAT:
        case MATLABParser::STRING: {
          setState(133);
          statement();
          break;
        }

        case MATLABParser::FUNCTION: {
          setState(134);
          def_function();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Def_classContext ------------------------------------------------------------------

MATLABParser::Def_classContext::Def_classContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Def_classContext::CLASSDEF() {
  return getToken(MATLABParser::CLASSDEF, 0);
}

std::vector<MATLABParser::Atom_varContext *> MATLABParser::Def_classContext::atom_var() {
  return getRuleContexts<MATLABParser::Atom_varContext>();
}

MATLABParser::Atom_varContext* MATLABParser::Def_classContext::atom_var(size_t i) {
  return getRuleContext<MATLABParser::Atom_varContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::LEFT_PARENTHESIS() {
  return getTokens(MATLABParser::LEFT_PARENTHESIS);
}

tree::TerminalNode* MATLABParser::Def_classContext::LEFT_PARENTHESIS(size_t i) {
  return getToken(MATLABParser::LEFT_PARENTHESIS, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::RIGHT_PARENTHESIS() {
  return getTokens(MATLABParser::RIGHT_PARENTHESIS);
}

tree::TerminalNode* MATLABParser::Def_classContext::RIGHT_PARENTHESIS(size_t i) {
  return getToken(MATLABParser::RIGHT_PARENTHESIS, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::LESS_THAN() {
  return getTokens(MATLABParser::LESS_THAN);
}

tree::TerminalNode* MATLABParser::Def_classContext::LESS_THAN(size_t i) {
  return getToken(MATLABParser::LESS_THAN, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::PROPERTIES() {
  return getTokens(MATLABParser::PROPERTIES);
}

tree::TerminalNode* MATLABParser::Def_classContext::PROPERTIES(size_t i) {
  return getToken(MATLABParser::PROPERTIES, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::END() {
  return getTokens(MATLABParser::END);
}

tree::TerminalNode* MATLABParser::Def_classContext::END(size_t i) {
  return getToken(MATLABParser::END, i);
}

tree::TerminalNode* MATLABParser::Def_classContext::RETURN() {
  return getToken(MATLABParser::RETURN, 0);
}

std::vector<MATLABParser::Attrib_class_booleanContext *> MATLABParser::Def_classContext::attrib_class_boolean() {
  return getRuleContexts<MATLABParser::Attrib_class_booleanContext>();
}

MATLABParser::Attrib_class_booleanContext* MATLABParser::Def_classContext::attrib_class_boolean(size_t i) {
  return getRuleContext<MATLABParser::Attrib_class_booleanContext>(i);
}

std::vector<MATLABParser::Attrib_class_metaContext *> MATLABParser::Def_classContext::attrib_class_meta() {
  return getRuleContexts<MATLABParser::Attrib_class_metaContext>();
}

MATLABParser::Attrib_class_metaContext* MATLABParser::Def_classContext::attrib_class_meta(size_t i) {
  return getRuleContext<MATLABParser::Attrib_class_metaContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::BINARY_AND() {
  return getTokens(MATLABParser::BINARY_AND);
}

tree::TerminalNode* MATLABParser::Def_classContext::BINARY_AND(size_t i) {
  return getToken(MATLABParser::BINARY_AND, i);
}

std::vector<MATLABParser::St_assignContext *> MATLABParser::Def_classContext::st_assign() {
  return getRuleContexts<MATLABParser::St_assignContext>();
}

MATLABParser::St_assignContext* MATLABParser::Def_classContext::st_assign(size_t i) {
  return getRuleContext<MATLABParser::St_assignContext>(i);
}

std::vector<MATLABParser::Def_functionContext *> MATLABParser::Def_classContext::def_function() {
  return getRuleContexts<MATLABParser::Def_functionContext>();
}

MATLABParser::Def_functionContext* MATLABParser::Def_classContext::def_function(size_t i) {
  return getRuleContext<MATLABParser::Def_functionContext>(i);
}

std::vector<MATLABParser::Attrib_property_booleanContext *> MATLABParser::Def_classContext::attrib_property_boolean() {
  return getRuleContexts<MATLABParser::Attrib_property_booleanContext>();
}

MATLABParser::Attrib_property_booleanContext* MATLABParser::Def_classContext::attrib_property_boolean(size_t i) {
  return getRuleContext<MATLABParser::Attrib_property_booleanContext>(i);
}

std::vector<MATLABParser::Attrib_property_accessContext *> MATLABParser::Def_classContext::attrib_property_access() {
  return getRuleContexts<MATLABParser::Attrib_property_accessContext>();
}

MATLABParser::Attrib_property_accessContext* MATLABParser::Def_classContext::attrib_property_access(size_t i) {
  return getRuleContext<MATLABParser::Attrib_property_accessContext>(i);
}

std::vector<MATLABParser::Attrib_method_booleanContext *> MATLABParser::Def_classContext::attrib_method_boolean() {
  return getRuleContexts<MATLABParser::Attrib_method_booleanContext>();
}

MATLABParser::Attrib_method_booleanContext* MATLABParser::Def_classContext::attrib_method_boolean(size_t i) {
  return getRuleContext<MATLABParser::Attrib_method_booleanContext>(i);
}

std::vector<MATLABParser::Attrib_method_accessContext *> MATLABParser::Def_classContext::attrib_method_access() {
  return getRuleContexts<MATLABParser::Attrib_method_accessContext>();
}

MATLABParser::Attrib_method_accessContext* MATLABParser::Def_classContext::attrib_method_access(size_t i) {
  return getRuleContext<MATLABParser::Attrib_method_accessContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::ASSIGN() {
  return getTokens(MATLABParser::ASSIGN);
}

tree::TerminalNode* MATLABParser::Def_classContext::ASSIGN(size_t i) {
  return getToken(MATLABParser::ASSIGN, i);
}

std::vector<MATLABParser::Atom_booleanContext *> MATLABParser::Def_classContext::atom_boolean() {
  return getRuleContexts<MATLABParser::Atom_booleanContext>();
}

MATLABParser::Atom_booleanContext* MATLABParser::Def_classContext::atom_boolean(size_t i) {
  return getRuleContext<MATLABParser::Atom_booleanContext>(i);
}

std::vector<MATLABParser::Atom_metaContext *> MATLABParser::Def_classContext::atom_meta() {
  return getRuleContexts<MATLABParser::Atom_metaContext>();
}

MATLABParser::Atom_metaContext* MATLABParser::Def_classContext::atom_meta(size_t i) {
  return getRuleContext<MATLABParser::Atom_metaContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Def_classContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Def_classContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}

std::vector<MATLABParser::Atom_accessContext *> MATLABParser::Def_classContext::atom_access() {
  return getRuleContexts<MATLABParser::Atom_accessContext>();
}

MATLABParser::Atom_accessContext* MATLABParser::Def_classContext::atom_access(size_t i) {
  return getRuleContext<MATLABParser::Atom_accessContext>(i);
}


size_t MATLABParser::Def_classContext::getRuleIndex() const {
  return MATLABParser::RuleDef_class;
}

void MATLABParser::Def_classContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDef_class(this);
}

void MATLABParser::Def_classContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDef_class(this);
}


antlrcpp::Any MATLABParser::Def_classContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitDef_class(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Def_classContext* MATLABParser::def_class() {
  Def_classContext *_localctx = _tracker.createInstance<Def_classContext>(_ctx, getState());
  enterRule(_localctx, 24, MATLABParser::RuleDef_class);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(MATLABParser::CLASSDEF);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::LEFT_PARENTHESIS) {
      setState(141);
      match(MATLABParser::LEFT_PARENTHESIS);
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__3)
        | (1ULL << MATLABParser::T__4)
        | (1ULL << MATLABParser::T__5)
        | (1ULL << MATLABParser::T__6)
        | (1ULL << MATLABParser::T__7)
        | (1ULL << MATLABParser::T__8)
        | (1ULL << MATLABParser::T__9))) != 0)) {
        setState(152);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MATLABParser::T__3:
          case MATLABParser::T__4:
          case MATLABParser::T__5:
          case MATLABParser::T__6:
          case MATLABParser::T__7: {
            setState(142);
            attrib_class_boolean();
            setState(145);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == MATLABParser::ASSIGN) {
              setState(143);
              match(MATLABParser::ASSIGN);
              setState(144);
              atom_boolean();
            }
            break;
          }

          case MATLABParser::T__8:
          case MATLABParser::T__9: {
            setState(147);
            attrib_class_meta();
            setState(150);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == MATLABParser::ASSIGN) {
              setState(148);
              match(MATLABParser::ASSIGN);
              setState(149);
              atom_meta();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(156);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(157);
      match(MATLABParser::RIGHT_PARENTHESIS);
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(163);
    atom_var();
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::LESS_THAN) {
      setState(164);
      match(MATLABParser::LESS_THAN);
      setState(165);
      atom_var();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::BINARY_AND) {
        setState(166);
        match(MATLABParser::BINARY_AND);
        setState(167);
        atom_var();
        setState(172);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::PROPERTIES) {
      setState(178);
      match(MATLABParser::PROPERTIES);
      setState(212);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MATLABParser::LEFT_PARENTHESIS) {
        setState(179);
        match(MATLABParser::LEFT_PARENTHESIS);
        setState(190);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MATLABParser::T__3:
          case MATLABParser::T__6:
          case MATLABParser::T__10:
          case MATLABParser::T__11:
          case MATLABParser::T__12:
          case MATLABParser::T__13:
          case MATLABParser::T__14:
          case MATLABParser::T__15:
          case MATLABParser::T__16: {
            setState(180);
            attrib_property_boolean();
            setState(183);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == MATLABParser::ASSIGN) {
              setState(181);
              match(MATLABParser::ASSIGN);
              setState(182);
              atom_boolean();
            }
            break;
          }

          case MATLABParser::T__17:
          case MATLABParser::T__18:
          case MATLABParser::T__19: {
            setState(185);
            attrib_property_access();
            setState(188);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == MATLABParser::ASSIGN) {
              setState(186);
              match(MATLABParser::ASSIGN);
              setState(187);
              atom_access();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MATLABParser::COMMA) {
          setState(192);
          match(MATLABParser::COMMA);
          setState(203);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case MATLABParser::T__3:
            case MATLABParser::T__6:
            case MATLABParser::T__10:
            case MATLABParser::T__11:
            case MATLABParser::T__12:
            case MATLABParser::T__13:
            case MATLABParser::T__14:
            case MATLABParser::T__15:
            case MATLABParser::T__16: {
              setState(193);
              attrib_property_boolean();
              setState(196);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == MATLABParser::ASSIGN) {
                setState(194);
                match(MATLABParser::ASSIGN);
                setState(195);
                atom_boolean();
              }
              break;
            }

            case MATLABParser::T__17:
            case MATLABParser::T__18:
            case MATLABParser::T__19: {
              setState(198);
              attrib_property_access();
              setState(201);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == MATLABParser::ASSIGN) {
                setState(199);
                match(MATLABParser::ASSIGN);
                setState(200);
                atom_access();
              }
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(209);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(210);
        match(MATLABParser::RIGHT_PARENTHESIS);
      }
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((((_la - 39) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 39)) & ((1ULL << (MATLABParser::GET - 39))
        | (1ULL << (MATLABParser::SET - 39))
        | (1ULL << (MATLABParser::STATIC - 39))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 39))
        | (1ULL << (MATLABParser::ID - 39)))) != 0)) {
        setState(216);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          setState(214);
          atom_var();
          break;
        }

        case 2: {
          setState(215);
          st_assign();
          break;
        }

        default:
          break;
        }
        setState(220);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(221);
      match(MATLABParser::END);
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(272);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::T__2) {
      setState(227);
      match(MATLABParser::T__2);
      setState(261);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MATLABParser::LEFT_PARENTHESIS) {
        setState(228);
        match(MATLABParser::LEFT_PARENTHESIS);
        setState(239);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MATLABParser::T__3:
          case MATLABParser::T__6:
          case MATLABParser::T__7:
          case MATLABParser::STATIC: {
            setState(229);
            attrib_method_boolean();
            setState(232);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == MATLABParser::ASSIGN) {
              setState(230);
              match(MATLABParser::ASSIGN);
              setState(231);
              atom_boolean();
            }
            break;
          }

          case MATLABParser::T__17: {
            setState(234);
            attrib_method_access();
            setState(237);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == MATLABParser::ASSIGN) {
              setState(235);
              match(MATLABParser::ASSIGN);
              setState(236);
              atom_access();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(256);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MATLABParser::COMMA) {
          setState(241);
          match(MATLABParser::COMMA);
          setState(252);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case MATLABParser::T__3:
            case MATLABParser::T__6:
            case MATLABParser::T__7:
            case MATLABParser::STATIC: {
              setState(242);
              attrib_method_boolean();
              setState(245);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == MATLABParser::ASSIGN) {
                setState(243);
                match(MATLABParser::ASSIGN);
                setState(244);
                atom_boolean();
              }
              break;
            }

            case MATLABParser::T__17: {
              setState(247);
              attrib_method_access();
              setState(250);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == MATLABParser::ASSIGN) {
                setState(248);
                match(MATLABParser::ASSIGN);
                setState(249);
                atom_access();
              }
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(258);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(259);
        match(MATLABParser::RIGHT_PARENTHESIS);
      }
      setState(266);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::FUNCTION) {
        setState(263);
        def_function();
        setState(268);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(269);
      match(MATLABParser::END);
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(276);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(275);
      _la = _input->LA(1);
      if (!(_la == MATLABParser::END

      || _la == MATLABParser::RETURN)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Def_functionContext ------------------------------------------------------------------

MATLABParser::Def_functionContext::Def_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Def_functionContext::FUNCTION() {
  return getToken(MATLABParser::FUNCTION, 0);
}

MATLABParser::Atom_varContext* MATLABParser::Def_functionContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

MATLABParser::Function_returnsContext* MATLABParser::Def_functionContext::function_returns() {
  return getRuleContext<MATLABParser::Function_returnsContext>(0);
}

tree::TerminalNode* MATLABParser::Def_functionContext::ASSIGN() {
  return getToken(MATLABParser::ASSIGN, 0);
}

tree::TerminalNode* MATLABParser::Def_functionContext::DOT() {
  return getToken(MATLABParser::DOT, 0);
}

MATLABParser::Function_paramsContext* MATLABParser::Def_functionContext::function_params() {
  return getRuleContext<MATLABParser::Function_paramsContext>(0);
}

std::vector<MATLABParser::StatementContext *> MATLABParser::Def_functionContext::statement() {
  return getRuleContexts<MATLABParser::StatementContext>();
}

MATLABParser::StatementContext* MATLABParser::Def_functionContext::statement(size_t i) {
  return getRuleContext<MATLABParser::StatementContext>(i);
}

tree::TerminalNode* MATLABParser::Def_functionContext::GET() {
  return getToken(MATLABParser::GET, 0);
}

tree::TerminalNode* MATLABParser::Def_functionContext::SET() {
  return getToken(MATLABParser::SET, 0);
}

tree::TerminalNode* MATLABParser::Def_functionContext::END() {
  return getToken(MATLABParser::END, 0);
}

tree::TerminalNode* MATLABParser::Def_functionContext::RETURN() {
  return getToken(MATLABParser::RETURN, 0);
}


size_t MATLABParser::Def_functionContext::getRuleIndex() const {
  return MATLABParser::RuleDef_function;
}

void MATLABParser::Def_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDef_function(this);
}

void MATLABParser::Def_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDef_function(this);
}


antlrcpp::Any MATLABParser::Def_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitDef_function(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Def_functionContext* MATLABParser::def_function() {
  Def_functionContext *_localctx = _tracker.createInstance<Def_functionContext>(_ctx, getState());
  enterRule(_localctx, 26, MATLABParser::RuleDef_function);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(MATLABParser::FUNCTION);
    setState(282);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(279);
      function_returns();
      setState(280);
      match(MATLABParser::ASSIGN);
      break;
    }

    default:
      break;
    }
    setState(286);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(284);
      _la = _input->LA(1);
      if (!(_la == MATLABParser::GET

      || _la == MATLABParser::SET)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(285);
      match(MATLABParser::DOT);
      break;
    }

    default:
      break;
    }
    setState(288);
    atom_var();
    setState(290);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(289);
      function_params();
      break;
    }

    default:
      break;
    }
    setState(295);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(292);
        statement(); 
      }
      setState(297);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(299);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(298);
      _la = _input->LA(1);
      if (!(_la == MATLABParser::END

      || _la == MATLABParser::RETURN)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attrib_class_booleanContext ------------------------------------------------------------------

MATLABParser::Attrib_class_booleanContext::Attrib_class_booleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MATLABParser::Attrib_class_booleanContext::getRuleIndex() const {
  return MATLABParser::RuleAttrib_class_boolean;
}

void MATLABParser::Attrib_class_booleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib_class_boolean(this);
}

void MATLABParser::Attrib_class_booleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib_class_boolean(this);
}


antlrcpp::Any MATLABParser::Attrib_class_booleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAttrib_class_boolean(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Attrib_class_booleanContext* MATLABParser::attrib_class_boolean() {
  Attrib_class_booleanContext *_localctx = _tracker.createInstance<Attrib_class_booleanContext>(_ctx, getState());
  enterRule(_localctx, 28, MATLABParser::RuleAttrib_class_boolean);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__3)
      | (1ULL << MATLABParser::T__4)
      | (1ULL << MATLABParser::T__5)
      | (1ULL << MATLABParser::T__6)
      | (1ULL << MATLABParser::T__7))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attrib_class_metaContext ------------------------------------------------------------------

MATLABParser::Attrib_class_metaContext::Attrib_class_metaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MATLABParser::Attrib_class_metaContext::getRuleIndex() const {
  return MATLABParser::RuleAttrib_class_meta;
}

void MATLABParser::Attrib_class_metaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib_class_meta(this);
}

void MATLABParser::Attrib_class_metaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib_class_meta(this);
}


antlrcpp::Any MATLABParser::Attrib_class_metaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAttrib_class_meta(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Attrib_class_metaContext* MATLABParser::attrib_class_meta() {
  Attrib_class_metaContext *_localctx = _tracker.createInstance<Attrib_class_metaContext>(_ctx, getState());
  enterRule(_localctx, 30, MATLABParser::RuleAttrib_class_meta);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    _la = _input->LA(1);
    if (!(_la == MATLABParser::T__8

    || _la == MATLABParser::T__9)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attrib_property_booleanContext ------------------------------------------------------------------

MATLABParser::Attrib_property_booleanContext::Attrib_property_booleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MATLABParser::Attrib_property_booleanContext::getRuleIndex() const {
  return MATLABParser::RuleAttrib_property_boolean;
}

void MATLABParser::Attrib_property_booleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib_property_boolean(this);
}

void MATLABParser::Attrib_property_booleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib_property_boolean(this);
}


antlrcpp::Any MATLABParser::Attrib_property_booleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAttrib_property_boolean(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Attrib_property_booleanContext* MATLABParser::attrib_property_boolean() {
  Attrib_property_booleanContext *_localctx = _tracker.createInstance<Attrib_property_booleanContext>(_ctx, getState());
  enterRule(_localctx, 32, MATLABParser::RuleAttrib_property_boolean);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__3)
      | (1ULL << MATLABParser::T__6)
      | (1ULL << MATLABParser::T__10)
      | (1ULL << MATLABParser::T__11)
      | (1ULL << MATLABParser::T__12)
      | (1ULL << MATLABParser::T__13)
      | (1ULL << MATLABParser::T__14)
      | (1ULL << MATLABParser::T__15)
      | (1ULL << MATLABParser::T__16))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attrib_property_accessContext ------------------------------------------------------------------

MATLABParser::Attrib_property_accessContext::Attrib_property_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MATLABParser::Attrib_property_accessContext::getRuleIndex() const {
  return MATLABParser::RuleAttrib_property_access;
}

void MATLABParser::Attrib_property_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib_property_access(this);
}

void MATLABParser::Attrib_property_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib_property_access(this);
}


antlrcpp::Any MATLABParser::Attrib_property_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAttrib_property_access(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Attrib_property_accessContext* MATLABParser::attrib_property_access() {
  Attrib_property_accessContext *_localctx = _tracker.createInstance<Attrib_property_accessContext>(_ctx, getState());
  enterRule(_localctx, 34, MATLABParser::RuleAttrib_property_access);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__17)
      | (1ULL << MATLABParser::T__18)
      | (1ULL << MATLABParser::T__19))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attrib_method_booleanContext ------------------------------------------------------------------

MATLABParser::Attrib_method_booleanContext::Attrib_method_booleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Attrib_method_booleanContext::STATIC() {
  return getToken(MATLABParser::STATIC, 0);
}


size_t MATLABParser::Attrib_method_booleanContext::getRuleIndex() const {
  return MATLABParser::RuleAttrib_method_boolean;
}

void MATLABParser::Attrib_method_booleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib_method_boolean(this);
}

void MATLABParser::Attrib_method_booleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib_method_boolean(this);
}


antlrcpp::Any MATLABParser::Attrib_method_booleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAttrib_method_boolean(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Attrib_method_booleanContext* MATLABParser::attrib_method_boolean() {
  Attrib_method_booleanContext *_localctx = _tracker.createInstance<Attrib_method_booleanContext>(_ctx, getState());
  enterRule(_localctx, 36, MATLABParser::RuleAttrib_method_boolean);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__3)
      | (1ULL << MATLABParser::T__6)
      | (1ULL << MATLABParser::T__7)
      | (1ULL << MATLABParser::STATIC))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attrib_method_accessContext ------------------------------------------------------------------

MATLABParser::Attrib_method_accessContext::Attrib_method_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MATLABParser::Attrib_method_accessContext::getRuleIndex() const {
  return MATLABParser::RuleAttrib_method_access;
}

void MATLABParser::Attrib_method_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib_method_access(this);
}

void MATLABParser::Attrib_method_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib_method_access(this);
}


antlrcpp::Any MATLABParser::Attrib_method_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAttrib_method_access(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Attrib_method_accessContext* MATLABParser::attrib_method_access() {
  Attrib_method_accessContext *_localctx = _tracker.createInstance<Attrib_method_accessContext>(_ctx, getState());
  enterRule(_localctx, 38, MATLABParser::RuleAttrib_method_access);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(MATLABParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atom_accessContext ------------------------------------------------------------------

MATLABParser::Atom_accessContext::Atom_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::Atom_metaContext* MATLABParser::Atom_accessContext::atom_meta() {
  return getRuleContext<MATLABParser::Atom_metaContext>(0);
}


size_t MATLABParser::Atom_accessContext::getRuleIndex() const {
  return MATLABParser::RuleAtom_access;
}

void MATLABParser::Atom_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_access(this);
}

void MATLABParser::Atom_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_access(this);
}


antlrcpp::Any MATLABParser::Atom_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitAtom_access(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Atom_accessContext* MATLABParser::atom_access() {
  Atom_accessContext *_localctx = _tracker.createInstance<Atom_accessContext>(_ctx, getState());
  enterRule(_localctx, 40, MATLABParser::RuleAtom_access);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(317);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MATLABParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(313);
        match(MATLABParser::T__20);
        break;
      }

      case MATLABParser::T__21: {
        enterOuterAlt(_localctx, 2);
        setState(314);
        match(MATLABParser::T__21);
        break;
      }

      case MATLABParser::T__22: {
        enterOuterAlt(_localctx, 3);
        setState(315);
        match(MATLABParser::T__22);
        break;
      }

      case MATLABParser::LEFT_BRACE:
      case MATLABParser::QUESTION: {
        enterOuterAlt(_localctx, 4);
        setState(316);
        atom_meta();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_assignContext ------------------------------------------------------------------

MATLABParser::St_assignContext::St_assignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::St_assignContext::ASSIGN() {
  return getToken(MATLABParser::ASSIGN, 0);
}

std::vector<MATLABParser::Atom_varContext *> MATLABParser::St_assignContext::atom_var() {
  return getRuleContexts<MATLABParser::Atom_varContext>();
}

MATLABParser::Atom_varContext* MATLABParser::St_assignContext::atom_var(size_t i) {
  return getRuleContext<MATLABParser::Atom_varContext>(i);
}

std::vector<MATLABParser::Xpr_array_indexContext *> MATLABParser::St_assignContext::xpr_array_index() {
  return getRuleContexts<MATLABParser::Xpr_array_indexContext>();
}

MATLABParser::Xpr_array_indexContext* MATLABParser::St_assignContext::xpr_array_index(size_t i) {
  return getRuleContext<MATLABParser::Xpr_array_indexContext>(i);
}

std::vector<MATLABParser::Xpr_cell_indexContext *> MATLABParser::St_assignContext::xpr_cell_index() {
  return getRuleContexts<MATLABParser::Xpr_cell_indexContext>();
}

MATLABParser::Xpr_cell_indexContext* MATLABParser::St_assignContext::xpr_cell_index(size_t i) {
  return getRuleContext<MATLABParser::Xpr_cell_indexContext>(i);
}

std::vector<MATLABParser::Xpr_fieldContext *> MATLABParser::St_assignContext::xpr_field() {
  return getRuleContexts<MATLABParser::Xpr_fieldContext>();
}

MATLABParser::Xpr_fieldContext* MATLABParser::St_assignContext::xpr_field(size_t i) {
  return getRuleContext<MATLABParser::Xpr_fieldContext>(i);
}

MATLABParser::Atom_empty_cellContext* MATLABParser::St_assignContext::atom_empty_cell() {
  return getRuleContext<MATLABParser::Atom_empty_cellContext>(0);
}

MATLABParser::Xpr_treeContext* MATLABParser::St_assignContext::xpr_tree() {
  return getRuleContext<MATLABParser::Xpr_treeContext>(0);
}

MATLABParser::Xpr_handleContext* MATLABParser::St_assignContext::xpr_handle() {
  return getRuleContext<MATLABParser::Xpr_handleContext>(0);
}

tree::TerminalNode* MATLABParser::St_assignContext::LEFT_SQUARE_BRACKET() {
  return getToken(MATLABParser::LEFT_SQUARE_BRACKET, 0);
}

tree::TerminalNode* MATLABParser::St_assignContext::RIGHT_SQUARE_BRACKET() {
  return getToken(MATLABParser::RIGHT_SQUARE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::St_assignContext::NOT() {
  return getTokens(MATLABParser::NOT);
}

tree::TerminalNode* MATLABParser::St_assignContext::NOT(size_t i) {
  return getToken(MATLABParser::NOT, i);
}

std::vector<tree::TerminalNode *> MATLABParser::St_assignContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::St_assignContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::St_assignContext::getRuleIndex() const {
  return MATLABParser::RuleSt_assign;
}

void MATLABParser::St_assignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_assign(this);
}

void MATLABParser::St_assignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_assign(this);
}


antlrcpp::Any MATLABParser::St_assignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitSt_assign(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::St_assignContext* MATLABParser::st_assign() {
  St_assignContext *_localctx = _tracker.createInstance<St_assignContext>(_ctx, getState());
  enterRule(_localctx, 42, MATLABParser::RuleSt_assign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(359);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MATLABParser::GET:
      case MATLABParser::SET:
      case MATLABParser::STATIC:
      case MATLABParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(323);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
        case 1: {
          setState(319);
          atom_var();
          break;
        }

        case 2: {
          setState(320);
          xpr_array_index();
          break;
        }

        case 3: {
          setState(321);
          xpr_cell_index();
          break;
        }

        case 4: {
          setState(322);
          xpr_field(0);
          break;
        }

        default:
          break;
        }
        setState(325);
        match(MATLABParser::ASSIGN);
        setState(329);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          setState(326);
          atom_empty_cell();
          break;
        }

        case 2: {
          setState(327);
          xpr_tree(0);
          break;
        }

        case 3: {
          setState(328);
          xpr_handle();
          break;
        }

        default:
          break;
        }
        break;
      }

      case MATLABParser::LEFT_SQUARE_BRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(331);
        match(MATLABParser::LEFT_SQUARE_BRACKET);
        setState(337);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
        case 1: {
          setState(332);
          match(MATLABParser::NOT);
          break;
        }

        case 2: {
          setState(333);
          atom_var();
          break;
        }

        case 3: {
          setState(334);
          xpr_array_index();
          break;
        }

        case 4: {
          setState(335);
          xpr_cell_index();
          break;
        }

        case 5: {
          setState(336);
          xpr_field(0);
          break;
        }

        default:
          break;
        }
        setState(349);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MATLABParser::COMMA) {
          setState(339);
          match(MATLABParser::COMMA);
          setState(345);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
          case 1: {
            setState(340);
            match(MATLABParser::NOT);
            break;
          }

          case 2: {
            setState(341);
            atom_var();
            break;
          }

          case 3: {
            setState(342);
            xpr_array_index();
            break;
          }

          case 4: {
            setState(343);
            xpr_cell_index();
            break;
          }

          case 5: {
            setState(344);
            xpr_field(0);
            break;
          }

          default:
            break;
          }
          setState(351);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(352);
        match(MATLABParser::RIGHT_SQUARE_BRACKET);
        setState(353);
        match(MATLABParser::ASSIGN);
        setState(357);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
        case 1: {
          setState(354);
          atom_empty_cell();
          break;
        }

        case 2: {
          setState(355);
          xpr_tree(0);
          break;
        }

        case 3: {
          setState(356);
          xpr_handle();
          break;
        }

        default:
          break;
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_commandContext ------------------------------------------------------------------

MATLABParser::St_commandContext::St_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::Atom_varContext* MATLABParser::St_commandContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

std::vector<MATLABParser::Command_argumentContext *> MATLABParser::St_commandContext::command_argument() {
  return getRuleContexts<MATLABParser::Command_argumentContext>();
}

MATLABParser::Command_argumentContext* MATLABParser::St_commandContext::command_argument(size_t i) {
  return getRuleContext<MATLABParser::Command_argumentContext>(i);
}


size_t MATLABParser::St_commandContext::getRuleIndex() const {
  return MATLABParser::RuleSt_command;
}

void MATLABParser::St_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_command(this);
}

void MATLABParser::St_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_command(this);
}


antlrcpp::Any MATLABParser::St_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitSt_command(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::St_commandContext* MATLABParser::st_command() {
  St_commandContext *_localctx = _tracker.createInstance<St_commandContext>(_ctx, getState());
  enterRule(_localctx, 44, MATLABParser::RuleSt_command);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(361);
    atom_var();
    setState(363); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(362);
              command_argument();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(365); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_ifContext ------------------------------------------------------------------

MATLABParser::St_ifContext::St_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::St_ifContext::IF() {
  return getToken(MATLABParser::IF, 0);
}

std::vector<MATLABParser::Xpr_treeContext *> MATLABParser::St_ifContext::xpr_tree() {
  return getRuleContexts<MATLABParser::Xpr_treeContext>();
}

MATLABParser::Xpr_treeContext* MATLABParser::St_ifContext::xpr_tree(size_t i) {
  return getRuleContext<MATLABParser::Xpr_treeContext>(i);
}

tree::TerminalNode* MATLABParser::St_ifContext::END() {
  return getToken(MATLABParser::END, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::St_ifContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::St_ifContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}

std::vector<MATLABParser::StatementContext *> MATLABParser::St_ifContext::statement() {
  return getRuleContexts<MATLABParser::StatementContext>();
}

MATLABParser::StatementContext* MATLABParser::St_ifContext::statement(size_t i) {
  return getRuleContext<MATLABParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::St_ifContext::ELSEIF() {
  return getTokens(MATLABParser::ELSEIF);
}

tree::TerminalNode* MATLABParser::St_ifContext::ELSEIF(size_t i) {
  return getToken(MATLABParser::ELSEIF, i);
}

tree::TerminalNode* MATLABParser::St_ifContext::ELSE() {
  return getToken(MATLABParser::ELSE, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::St_ifContext::SEMI_COLON() {
  return getTokens(MATLABParser::SEMI_COLON);
}

tree::TerminalNode* MATLABParser::St_ifContext::SEMI_COLON(size_t i) {
  return getToken(MATLABParser::SEMI_COLON, i);
}


size_t MATLABParser::St_ifContext::getRuleIndex() const {
  return MATLABParser::RuleSt_if;
}

void MATLABParser::St_ifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_if(this);
}

void MATLABParser::St_ifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_if(this);
}


antlrcpp::Any MATLABParser::St_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitSt_if(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::St_ifContext* MATLABParser::st_if() {
  St_ifContext *_localctx = _tracker.createInstance<St_ifContext>(_ctx, getState());
  enterRule(_localctx, 46, MATLABParser::RuleSt_if);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(412);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(367);
      match(MATLABParser::IF);
      setState(368);
      xpr_tree(0);
      setState(370);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MATLABParser::COMMA) {
        setState(369);
        match(MATLABParser::COMMA);
      }
      setState(375);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::BREAK)
        | (1ULL << MATLABParser::CONTINUE)
        | (1ULL << MATLABParser::FOR)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::IF)
        | (1ULL << MATLABParser::RETURN)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::SWITCH)
        | (1ULL << MATLABParser::TRY)
        | (1ULL << MATLABParser::WHILE)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(372);
        statement();
        setState(377);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(391);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::ELSEIF) {
        setState(378);
        match(MATLABParser::ELSEIF);
        setState(379);
        xpr_tree(0);
        setState(381);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(380);
          match(MATLABParser::COMMA);
        }
        setState(386);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
          | (1ULL << MATLABParser::T__1)
          | (1ULL << MATLABParser::BREAK)
          | (1ULL << MATLABParser::CONTINUE)
          | (1ULL << MATLABParser::FOR)
          | (1ULL << MATLABParser::GET)
          | (1ULL << MATLABParser::IF)
          | (1ULL << MATLABParser::RETURN)
          | (1ULL << MATLABParser::SET)
          | (1ULL << MATLABParser::SWITCH)
          | (1ULL << MATLABParser::TRY)
          | (1ULL << MATLABParser::WHILE)
          | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
          | (1ULL << (MATLABParser::NOT - 70))
          | (1ULL << (MATLABParser::PLUS - 70))
          | (1ULL << (MATLABParser::LEFT_BRACE - 70))
          | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
          | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
          | (1ULL << (MATLABParser::BASE_FUNC - 70))
          | (1ULL << (MATLABParser::ID - 70))
          | (1ULL << (MATLABParser::IMAGINARY - 70))
          | (1ULL << (MATLABParser::INT - 70))
          | (1ULL << (MATLABParser::FLOAT - 70))
          | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
          setState(383);
          statement();
          setState(388);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(393);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(401);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MATLABParser::ELSE) {
        setState(394);
        match(MATLABParser::ELSE);
        setState(398);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
          | (1ULL << MATLABParser::T__1)
          | (1ULL << MATLABParser::BREAK)
          | (1ULL << MATLABParser::CONTINUE)
          | (1ULL << MATLABParser::FOR)
          | (1ULL << MATLABParser::GET)
          | (1ULL << MATLABParser::IF)
          | (1ULL << MATLABParser::RETURN)
          | (1ULL << MATLABParser::SET)
          | (1ULL << MATLABParser::SWITCH)
          | (1ULL << MATLABParser::TRY)
          | (1ULL << MATLABParser::WHILE)
          | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
          | (1ULL << (MATLABParser::NOT - 70))
          | (1ULL << (MATLABParser::PLUS - 70))
          | (1ULL << (MATLABParser::LEFT_BRACE - 70))
          | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
          | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
          | (1ULL << (MATLABParser::BASE_FUNC - 70))
          | (1ULL << (MATLABParser::ID - 70))
          | (1ULL << (MATLABParser::IMAGINARY - 70))
          | (1ULL << (MATLABParser::INT - 70))
          | (1ULL << (MATLABParser::FLOAT - 70))
          | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
          setState(395);
          statement();
          setState(400);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(403);
      match(MATLABParser::END);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(405);
      match(MATLABParser::IF);
      setState(406);
      xpr_tree(0);
      setState(407);
      _la = _input->LA(1);
      if (!(_la == MATLABParser::COMMA

      || _la == MATLABParser::SEMI_COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(408);
      statement();
      setState(409);
      _la = _input->LA(1);
      if (!(_la == MATLABParser::COMMA

      || _la == MATLABParser::SEMI_COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(410);
      match(MATLABParser::END);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_forContext ------------------------------------------------------------------

MATLABParser::St_forContext::St_forContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::St_forContext::FOR() {
  return getToken(MATLABParser::FOR, 0);
}

MATLABParser::Atom_varContext* MATLABParser::St_forContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

tree::TerminalNode* MATLABParser::St_forContext::ASSIGN() {
  return getToken(MATLABParser::ASSIGN, 0);
}

MATLABParser::Xpr_treeContext* MATLABParser::St_forContext::xpr_tree() {
  return getRuleContext<MATLABParser::Xpr_treeContext>(0);
}

tree::TerminalNode* MATLABParser::St_forContext::END() {
  return getToken(MATLABParser::END, 0);
}

tree::TerminalNode* MATLABParser::St_forContext::COMMA() {
  return getToken(MATLABParser::COMMA, 0);
}

std::vector<MATLABParser::StatementContext *> MATLABParser::St_forContext::statement() {
  return getRuleContexts<MATLABParser::StatementContext>();
}

MATLABParser::StatementContext* MATLABParser::St_forContext::statement(size_t i) {
  return getRuleContext<MATLABParser::StatementContext>(i);
}


size_t MATLABParser::St_forContext::getRuleIndex() const {
  return MATLABParser::RuleSt_for;
}

void MATLABParser::St_forContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_for(this);
}

void MATLABParser::St_forContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_for(this);
}


antlrcpp::Any MATLABParser::St_forContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitSt_for(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::St_forContext* MATLABParser::st_for() {
  St_forContext *_localctx = _tracker.createInstance<St_forContext>(_ctx, getState());
  enterRule(_localctx, 48, MATLABParser::RuleSt_for);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(MATLABParser::FOR);
    setState(415);
    atom_var();
    setState(416);
    match(MATLABParser::ASSIGN);
    setState(417);
    xpr_tree(0);
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MATLABParser::COMMA) {
      setState(418);
      match(MATLABParser::COMMA);
    }
    setState(424);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
      | (1ULL << MATLABParser::T__1)
      | (1ULL << MATLABParser::BREAK)
      | (1ULL << MATLABParser::CONTINUE)
      | (1ULL << MATLABParser::FOR)
      | (1ULL << MATLABParser::GET)
      | (1ULL << MATLABParser::IF)
      | (1ULL << MATLABParser::RETURN)
      | (1ULL << MATLABParser::SET)
      | (1ULL << MATLABParser::SWITCH)
      | (1ULL << MATLABParser::TRY)
      | (1ULL << MATLABParser::WHILE)
      | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
      | (1ULL << (MATLABParser::NOT - 70))
      | (1ULL << (MATLABParser::PLUS - 70))
      | (1ULL << (MATLABParser::LEFT_BRACE - 70))
      | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
      | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
      | (1ULL << (MATLABParser::BASE_FUNC - 70))
      | (1ULL << (MATLABParser::ID - 70))
      | (1ULL << (MATLABParser::IMAGINARY - 70))
      | (1ULL << (MATLABParser::INT - 70))
      | (1ULL << (MATLABParser::FLOAT - 70))
      | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
      setState(421);
      statement();
      setState(426);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(427);
    match(MATLABParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_switchContext ------------------------------------------------------------------

MATLABParser::St_switchContext::St_switchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::St_switchContext::SWITCH() {
  return getToken(MATLABParser::SWITCH, 0);
}

std::vector<MATLABParser::Xpr_treeContext *> MATLABParser::St_switchContext::xpr_tree() {
  return getRuleContexts<MATLABParser::Xpr_treeContext>();
}

MATLABParser::Xpr_treeContext* MATLABParser::St_switchContext::xpr_tree(size_t i) {
  return getRuleContext<MATLABParser::Xpr_treeContext>(i);
}

tree::TerminalNode* MATLABParser::St_switchContext::END() {
  return getToken(MATLABParser::END, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::St_switchContext::CASE() {
  return getTokens(MATLABParser::CASE);
}

tree::TerminalNode* MATLABParser::St_switchContext::CASE(size_t i) {
  return getToken(MATLABParser::CASE, i);
}

tree::TerminalNode* MATLABParser::St_switchContext::OTHERWISE() {
  return getToken(MATLABParser::OTHERWISE, 0);
}

std::vector<MATLABParser::StatementContext *> MATLABParser::St_switchContext::statement() {
  return getRuleContexts<MATLABParser::StatementContext>();
}

MATLABParser::StatementContext* MATLABParser::St_switchContext::statement(size_t i) {
  return getRuleContext<MATLABParser::StatementContext>(i);
}


size_t MATLABParser::St_switchContext::getRuleIndex() const {
  return MATLABParser::RuleSt_switch;
}

void MATLABParser::St_switchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_switch(this);
}

void MATLABParser::St_switchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_switch(this);
}


antlrcpp::Any MATLABParser::St_switchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitSt_switch(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::St_switchContext* MATLABParser::st_switch() {
  St_switchContext *_localctx = _tracker.createInstance<St_switchContext>(_ctx, getState());
  enterRule(_localctx, 50, MATLABParser::RuleSt_switch);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    match(MATLABParser::SWITCH);
    setState(430);
    xpr_tree(0);
    setState(441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::CASE) {
      setState(431);
      match(MATLABParser::CASE);
      setState(432);
      xpr_tree(0);
      setState(436);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::BREAK)
        | (1ULL << MATLABParser::CONTINUE)
        | (1ULL << MATLABParser::FOR)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::IF)
        | (1ULL << MATLABParser::RETURN)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::SWITCH)
        | (1ULL << MATLABParser::TRY)
        | (1ULL << MATLABParser::WHILE)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(433);
        statement();
        setState(438);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(443);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(451);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MATLABParser::OTHERWISE) {
      setState(444);
      match(MATLABParser::OTHERWISE);
      setState(448);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::BREAK)
        | (1ULL << MATLABParser::CONTINUE)
        | (1ULL << MATLABParser::FOR)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::IF)
        | (1ULL << MATLABParser::RETURN)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::SWITCH)
        | (1ULL << MATLABParser::TRY)
        | (1ULL << MATLABParser::WHILE)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(445);
        statement();
        setState(450);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(453);
    match(MATLABParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_tryContext ------------------------------------------------------------------

MATLABParser::St_tryContext::St_tryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::St_tryContext::TRY() {
  return getToken(MATLABParser::TRY, 0);
}

tree::TerminalNode* MATLABParser::St_tryContext::END() {
  return getToken(MATLABParser::END, 0);
}

tree::TerminalNode* MATLABParser::St_tryContext::COMMA() {
  return getToken(MATLABParser::COMMA, 0);
}

std::vector<MATLABParser::StatementContext *> MATLABParser::St_tryContext::statement() {
  return getRuleContexts<MATLABParser::StatementContext>();
}

MATLABParser::StatementContext* MATLABParser::St_tryContext::statement(size_t i) {
  return getRuleContext<MATLABParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::St_tryContext::CATCH() {
  return getTokens(MATLABParser::CATCH);
}

tree::TerminalNode* MATLABParser::St_tryContext::CATCH(size_t i) {
  return getToken(MATLABParser::CATCH, i);
}

std::vector<MATLABParser::Atom_varContext *> MATLABParser::St_tryContext::atom_var() {
  return getRuleContexts<MATLABParser::Atom_varContext>();
}

MATLABParser::Atom_varContext* MATLABParser::St_tryContext::atom_var(size_t i) {
  return getRuleContext<MATLABParser::Atom_varContext>(i);
}


size_t MATLABParser::St_tryContext::getRuleIndex() const {
  return MATLABParser::RuleSt_try;
}

void MATLABParser::St_tryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_try(this);
}

void MATLABParser::St_tryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_try(this);
}


antlrcpp::Any MATLABParser::St_tryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitSt_try(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::St_tryContext* MATLABParser::st_try() {
  St_tryContext *_localctx = _tracker.createInstance<St_tryContext>(_ctx, getState());
  enterRule(_localctx, 52, MATLABParser::RuleSt_try);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(MATLABParser::TRY);
    setState(457);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MATLABParser::COMMA) {
      setState(456);
      match(MATLABParser::COMMA);
    }
    setState(462);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
      | (1ULL << MATLABParser::T__1)
      | (1ULL << MATLABParser::BREAK)
      | (1ULL << MATLABParser::CONTINUE)
      | (1ULL << MATLABParser::FOR)
      | (1ULL << MATLABParser::GET)
      | (1ULL << MATLABParser::IF)
      | (1ULL << MATLABParser::RETURN)
      | (1ULL << MATLABParser::SET)
      | (1ULL << MATLABParser::SWITCH)
      | (1ULL << MATLABParser::TRY)
      | (1ULL << MATLABParser::WHILE)
      | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
      | (1ULL << (MATLABParser::NOT - 70))
      | (1ULL << (MATLABParser::PLUS - 70))
      | (1ULL << (MATLABParser::LEFT_BRACE - 70))
      | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
      | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
      | (1ULL << (MATLABParser::BASE_FUNC - 70))
      | (1ULL << (MATLABParser::ID - 70))
      | (1ULL << (MATLABParser::IMAGINARY - 70))
      | (1ULL << (MATLABParser::INT - 70))
      | (1ULL << (MATLABParser::FLOAT - 70))
      | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
      setState(459);
      statement();
      setState(464);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(477);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::CATCH) {
      setState(465);
      match(MATLABParser::CATCH);
      setState(467);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
      case 1: {
        setState(466);
        atom_var();
        break;
      }

      default:
        break;
      }
      setState(472);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::BREAK)
        | (1ULL << MATLABParser::CONTINUE)
        | (1ULL << MATLABParser::FOR)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::IF)
        | (1ULL << MATLABParser::RETURN)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::SWITCH)
        | (1ULL << MATLABParser::TRY)
        | (1ULL << MATLABParser::WHILE)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(469);
        statement();
        setState(474);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(479);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(480);
    match(MATLABParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_whileContext ------------------------------------------------------------------

MATLABParser::St_whileContext::St_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::St_whileContext::WHILE() {
  return getToken(MATLABParser::WHILE, 0);
}

MATLABParser::Xpr_treeContext* MATLABParser::St_whileContext::xpr_tree() {
  return getRuleContext<MATLABParser::Xpr_treeContext>(0);
}

tree::TerminalNode* MATLABParser::St_whileContext::END() {
  return getToken(MATLABParser::END, 0);
}

tree::TerminalNode* MATLABParser::St_whileContext::COMMA() {
  return getToken(MATLABParser::COMMA, 0);
}

std::vector<MATLABParser::StatementContext *> MATLABParser::St_whileContext::statement() {
  return getRuleContexts<MATLABParser::StatementContext>();
}

MATLABParser::StatementContext* MATLABParser::St_whileContext::statement(size_t i) {
  return getRuleContext<MATLABParser::StatementContext>(i);
}


size_t MATLABParser::St_whileContext::getRuleIndex() const {
  return MATLABParser::RuleSt_while;
}

void MATLABParser::St_whileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSt_while(this);
}

void MATLABParser::St_whileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSt_while(this);
}


antlrcpp::Any MATLABParser::St_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitSt_while(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::St_whileContext* MATLABParser::st_while() {
  St_whileContext *_localctx = _tracker.createInstance<St_whileContext>(_ctx, getState());
  enterRule(_localctx, 54, MATLABParser::RuleSt_while);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    match(MATLABParser::WHILE);
    setState(483);
    xpr_tree(0);
    setState(485);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MATLABParser::COMMA) {
      setState(484);
      match(MATLABParser::COMMA);
    }
    setState(490);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
      | (1ULL << MATLABParser::T__1)
      | (1ULL << MATLABParser::BREAK)
      | (1ULL << MATLABParser::CONTINUE)
      | (1ULL << MATLABParser::FOR)
      | (1ULL << MATLABParser::GET)
      | (1ULL << MATLABParser::IF)
      | (1ULL << MATLABParser::RETURN)
      | (1ULL << MATLABParser::SET)
      | (1ULL << MATLABParser::SWITCH)
      | (1ULL << MATLABParser::TRY)
      | (1ULL << MATLABParser::WHILE)
      | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
      | (1ULL << (MATLABParser::NOT - 70))
      | (1ULL << (MATLABParser::PLUS - 70))
      | (1ULL << (MATLABParser::LEFT_BRACE - 70))
      | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
      | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
      | (1ULL << (MATLABParser::BASE_FUNC - 70))
      | (1ULL << (MATLABParser::ID - 70))
      | (1ULL << (MATLABParser::IMAGINARY - 70))
      | (1ULL << (MATLABParser::INT - 70))
      | (1ULL << (MATLABParser::FLOAT - 70))
      | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
      setState(487);
      statement();
      setState(492);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(493);
    match(MATLABParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_paramsContext ------------------------------------------------------------------

MATLABParser::Function_paramsContext::Function_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Function_paramsContext::LEFT_PARENTHESIS() {
  return getToken(MATLABParser::LEFT_PARENTHESIS, 0);
}

tree::TerminalNode* MATLABParser::Function_paramsContext::RIGHT_PARENTHESIS() {
  return getToken(MATLABParser::RIGHT_PARENTHESIS, 0);
}

std::vector<MATLABParser::Atom_varContext *> MATLABParser::Function_paramsContext::atom_var() {
  return getRuleContexts<MATLABParser::Atom_varContext>();
}

MATLABParser::Atom_varContext* MATLABParser::Function_paramsContext::atom_var(size_t i) {
  return getRuleContext<MATLABParser::Atom_varContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Function_paramsContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Function_paramsContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::Function_paramsContext::getRuleIndex() const {
  return MATLABParser::RuleFunction_params;
}

void MATLABParser::Function_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_params(this);
}

void MATLABParser::Function_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_params(this);
}


antlrcpp::Any MATLABParser::Function_paramsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitFunction_params(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Function_paramsContext* MATLABParser::function_params() {
  Function_paramsContext *_localctx = _tracker.createInstance<Function_paramsContext>(_ctx, getState());
  enterRule(_localctx, 56, MATLABParser::RuleFunction_params);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    match(MATLABParser::LEFT_PARENTHESIS);
    setState(504);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 39) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 39)) & ((1ULL << (MATLABParser::GET - 39))
      | (1ULL << (MATLABParser::SET - 39))
      | (1ULL << (MATLABParser::STATIC - 39))
      | (1ULL << (MATLABParser::ID - 39)))) != 0)) {
      setState(496);
      atom_var();
      setState(501);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::COMMA) {
        setState(497);
        match(MATLABParser::COMMA);
        setState(498);
        atom_var();
        setState(503);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(506);
    match(MATLABParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_returnsContext ------------------------------------------------------------------

MATLABParser::Function_returnsContext::Function_returnsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MATLABParser::Atom_varContext *> MATLABParser::Function_returnsContext::atom_var() {
  return getRuleContexts<MATLABParser::Atom_varContext>();
}

MATLABParser::Atom_varContext* MATLABParser::Function_returnsContext::atom_var(size_t i) {
  return getRuleContext<MATLABParser::Atom_varContext>(i);
}

tree::TerminalNode* MATLABParser::Function_returnsContext::LEFT_SQUARE_BRACKET() {
  return getToken(MATLABParser::LEFT_SQUARE_BRACKET, 0);
}

tree::TerminalNode* MATLABParser::Function_returnsContext::RIGHT_SQUARE_BRACKET() {
  return getToken(MATLABParser::RIGHT_SQUARE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::Function_returnsContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Function_returnsContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::Function_returnsContext::getRuleIndex() const {
  return MATLABParser::RuleFunction_returns;
}

void MATLABParser::Function_returnsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_returns(this);
}

void MATLABParser::Function_returnsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_returns(this);
}


antlrcpp::Any MATLABParser::Function_returnsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitFunction_returns(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Function_returnsContext* MATLABParser::function_returns() {
  Function_returnsContext *_localctx = _tracker.createInstance<Function_returnsContext>(_ctx, getState());
  enterRule(_localctx, 58, MATLABParser::RuleFunction_returns);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(520);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MATLABParser::GET:
      case MATLABParser::SET:
      case MATLABParser::STATIC:
      case MATLABParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(508);
        atom_var();
        break;
      }

      case MATLABParser::LEFT_SQUARE_BRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(509);
        match(MATLABParser::LEFT_SQUARE_BRACKET);
        setState(510);
        atom_var();
        setState(515);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MATLABParser::COMMA) {
          setState(511);
          match(MATLABParser::COMMA);
          setState(512);
          atom_var();
          setState(517);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(518);
        match(MATLABParser::RIGHT_SQUARE_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MATLABParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::St_assignContext* MATLABParser::StatementContext::st_assign() {
  return getRuleContext<MATLABParser::St_assignContext>(0);
}

MATLABParser::St_commandContext* MATLABParser::StatementContext::st_command() {
  return getRuleContext<MATLABParser::St_commandContext>(0);
}

MATLABParser::St_ifContext* MATLABParser::StatementContext::st_if() {
  return getRuleContext<MATLABParser::St_ifContext>(0);
}

MATLABParser::St_forContext* MATLABParser::StatementContext::st_for() {
  return getRuleContext<MATLABParser::St_forContext>(0);
}

MATLABParser::St_switchContext* MATLABParser::StatementContext::st_switch() {
  return getRuleContext<MATLABParser::St_switchContext>(0);
}

MATLABParser::St_tryContext* MATLABParser::StatementContext::st_try() {
  return getRuleContext<MATLABParser::St_tryContext>(0);
}

MATLABParser::St_whileContext* MATLABParser::StatementContext::st_while() {
  return getRuleContext<MATLABParser::St_whileContext>(0);
}

MATLABParser::Xpr_functionContext* MATLABParser::StatementContext::xpr_function() {
  return getRuleContext<MATLABParser::Xpr_functionContext>(0);
}

MATLABParser::Xpr_fieldContext* MATLABParser::StatementContext::xpr_field() {
  return getRuleContext<MATLABParser::Xpr_fieldContext>(0);
}

MATLABParser::Xpr_treeContext* MATLABParser::StatementContext::xpr_tree() {
  return getRuleContext<MATLABParser::Xpr_treeContext>(0);
}

MATLABParser::Atom_varContext* MATLABParser::StatementContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

tree::TerminalNode* MATLABParser::StatementContext::BREAK() {
  return getToken(MATLABParser::BREAK, 0);
}

tree::TerminalNode* MATLABParser::StatementContext::CONTINUE() {
  return getToken(MATLABParser::CONTINUE, 0);
}

tree::TerminalNode* MATLABParser::StatementContext::RETURN() {
  return getToken(MATLABParser::RETURN, 0);
}

tree::TerminalNode* MATLABParser::StatementContext::COMMA() {
  return getToken(MATLABParser::COMMA, 0);
}

tree::TerminalNode* MATLABParser::StatementContext::SEMI_COLON() {
  return getToken(MATLABParser::SEMI_COLON, 0);
}


size_t MATLABParser::StatementContext::getRuleIndex() const {
  return MATLABParser::RuleStatement;
}

void MATLABParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void MATLABParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any MATLABParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::StatementContext* MATLABParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 60, MATLABParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      setState(522);
      st_assign();
      break;
    }

    case 2: {
      setState(523);
      st_command();
      break;
    }

    case 3: {
      setState(524);
      st_if();
      break;
    }

    case 4: {
      setState(525);
      st_for();
      break;
    }

    case 5: {
      setState(526);
      st_switch();
      break;
    }

    case 6: {
      setState(527);
      st_try();
      break;
    }

    case 7: {
      setState(528);
      st_while();
      break;
    }

    case 8: {
      setState(529);
      xpr_function();
      break;
    }

    case 9: {
      setState(530);
      xpr_field(0);
      break;
    }

    case 10: {
      setState(531);
      xpr_tree(0);
      break;
    }

    case 11: {
      setState(532);
      atom_var();
      break;
    }

    case 12: {
      setState(533);
      match(MATLABParser::BREAK);
      break;
    }

    case 13: {
      setState(534);
      match(MATLABParser::CONTINUE);
      break;
    }

    case 14: {
      setState(535);
      match(MATLABParser::RETURN);
      break;
    }

    default:
      break;
    }
    setState(539);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      setState(538);
      _la = _input->LA(1);
      if (!(_la == MATLABParser::COMMA

      || _la == MATLABParser::SEMI_COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_treeContext ------------------------------------------------------------------

MATLABParser::Xpr_treeContext::Xpr_treeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::Xpr_basefunctionContext* MATLABParser::Xpr_treeContext::xpr_basefunction() {
  return getRuleContext<MATLABParser::Xpr_basefunctionContext>(0);
}

MATLABParser::Atom_booleanContext* MATLABParser::Xpr_treeContext::atom_boolean() {
  return getRuleContext<MATLABParser::Atom_booleanContext>(0);
}

MATLABParser::Atom_empty_arrayContext* MATLABParser::Xpr_treeContext::atom_empty_array() {
  return getRuleContext<MATLABParser::Atom_empty_arrayContext>(0);
}

MATLABParser::Atom_floatContext* MATLABParser::Xpr_treeContext::atom_float() {
  return getRuleContext<MATLABParser::Atom_floatContext>(0);
}

MATLABParser::Atom_imaginaryContext* MATLABParser::Xpr_treeContext::atom_imaginary() {
  return getRuleContext<MATLABParser::Atom_imaginaryContext>(0);
}

MATLABParser::Atom_integerContext* MATLABParser::Xpr_treeContext::atom_integer() {
  return getRuleContext<MATLABParser::Atom_integerContext>(0);
}

MATLABParser::Atom_stringContext* MATLABParser::Xpr_treeContext::atom_string() {
  return getRuleContext<MATLABParser::Atom_stringContext>(0);
}

MATLABParser::Atom_varContext* MATLABParser::Xpr_treeContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

MATLABParser::Xpr_arrayContext* MATLABParser::Xpr_treeContext::xpr_array() {
  return getRuleContext<MATLABParser::Xpr_arrayContext>(0);
}

MATLABParser::Xpr_array_indexContext* MATLABParser::Xpr_treeContext::xpr_array_index() {
  return getRuleContext<MATLABParser::Xpr_array_indexContext>(0);
}

MATLABParser::Xpr_cellContext* MATLABParser::Xpr_treeContext::xpr_cell() {
  return getRuleContext<MATLABParser::Xpr_cellContext>(0);
}

MATLABParser::Xpr_cell_indexContext* MATLABParser::Xpr_treeContext::xpr_cell_index() {
  return getRuleContext<MATLABParser::Xpr_cell_indexContext>(0);
}

MATLABParser::Xpr_fieldContext* MATLABParser::Xpr_treeContext::xpr_field() {
  return getRuleContext<MATLABParser::Xpr_fieldContext>(0);
}

MATLABParser::Xpr_functionContext* MATLABParser::Xpr_treeContext::xpr_function() {
  return getRuleContext<MATLABParser::Xpr_functionContext>(0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::LEFT_PARENTHESIS() {
  return getToken(MATLABParser::LEFT_PARENTHESIS, 0);
}

std::vector<MATLABParser::Xpr_treeContext *> MATLABParser::Xpr_treeContext::xpr_tree() {
  return getRuleContexts<MATLABParser::Xpr_treeContext>();
}

MATLABParser::Xpr_treeContext* MATLABParser::Xpr_treeContext::xpr_tree(size_t i) {
  return getRuleContext<MATLABParser::Xpr_treeContext>(i);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::RIGHT_PARENTHESIS() {
  return getToken(MATLABParser::RIGHT_PARENTHESIS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::PLUS() {
  return getToken(MATLABParser::PLUS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::MINUS() {
  return getToken(MATLABParser::MINUS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::NOT() {
  return getToken(MATLABParser::NOT, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::ELMENT_WISE_POWER() {
  return getToken(MATLABParser::ELMENT_WISE_POWER, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::POWER() {
  return getToken(MATLABParser::POWER, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::ELMENT_WISE_TIMES() {
  return getToken(MATLABParser::ELMENT_WISE_TIMES, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::ELMENT_WISE_RIGHT_DIVIDE() {
  return getToken(MATLABParser::ELMENT_WISE_RIGHT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::ELMENT_WISE_LEFT_DIVIDE() {
  return getToken(MATLABParser::ELMENT_WISE_LEFT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::TIMES() {
  return getToken(MATLABParser::TIMES, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::RIGHT_DIVIDE() {
  return getToken(MATLABParser::RIGHT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::LEFT_DIVIDE() {
  return getToken(MATLABParser::LEFT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::COLON() {
  return getToken(MATLABParser::COLON, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::LESS_THAN() {
  return getToken(MATLABParser::LESS_THAN, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::LESS_THAN_OR_EQUAL() {
  return getToken(MATLABParser::LESS_THAN_OR_EQUAL, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::GREATER_THAN() {
  return getToken(MATLABParser::GREATER_THAN, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::GREATER_THAN_OR_EQUAL() {
  return getToken(MATLABParser::GREATER_THAN_OR_EQUAL, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::EQUALS() {
  return getToken(MATLABParser::EQUALS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::NOT_EQUAL() {
  return getToken(MATLABParser::NOT_EQUAL, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::BINARY_AND() {
  return getToken(MATLABParser::BINARY_AND, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::BINARY_OR() {
  return getToken(MATLABParser::BINARY_OR, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::LOGICAL_AND() {
  return getToken(MATLABParser::LOGICAL_AND, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::LOGICAL_OR() {
  return getToken(MATLABParser::LOGICAL_OR, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::ELMENT_WISE_TRANSPOSE() {
  return getToken(MATLABParser::ELMENT_WISE_TRANSPOSE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_treeContext::TRANSPOSE() {
  return getToken(MATLABParser::TRANSPOSE, 0);
}


size_t MATLABParser::Xpr_treeContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_tree;
}

void MATLABParser::Xpr_treeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_tree(this);
}

void MATLABParser::Xpr_treeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_tree(this);
}


antlrcpp::Any MATLABParser::Xpr_treeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_tree(this);
  else
    return visitor->visitChildren(this);
}


MATLABParser::Xpr_treeContext* MATLABParser::xpr_tree() {
   return xpr_tree(0);
}

MATLABParser::Xpr_treeContext* MATLABParser::xpr_tree(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MATLABParser::Xpr_treeContext *_localctx = _tracker.createInstance<Xpr_treeContext>(_ctx, parentState);
  MATLABParser::Xpr_treeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, MATLABParser::RuleXpr_tree, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(562);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      setState(542);
      xpr_basefunction();
      break;
    }

    case 2: {
      setState(543);
      atom_boolean();
      break;
    }

    case 3: {
      setState(544);
      atom_empty_array();
      break;
    }

    case 4: {
      setState(545);
      atom_float();
      break;
    }

    case 5: {
      setState(546);
      atom_imaginary();
      break;
    }

    case 6: {
      setState(547);
      atom_integer();
      break;
    }

    case 7: {
      setState(548);
      atom_string();
      break;
    }

    case 8: {
      setState(549);
      atom_var();
      break;
    }

    case 9: {
      setState(550);
      xpr_array();
      break;
    }

    case 10: {
      setState(551);
      xpr_array_index();
      break;
    }

    case 11: {
      setState(552);
      xpr_cell();
      break;
    }

    case 12: {
      setState(553);
      xpr_cell_index();
      break;
    }

    case 13: {
      setState(554);
      xpr_field(0);
      break;
    }

    case 14: {
      setState(555);
      xpr_function();
      break;
    }

    case 15: {
      setState(556);
      match(MATLABParser::LEFT_PARENTHESIS);
      setState(557);
      xpr_tree(0);
      setState(558);
      match(MATLABParser::RIGHT_PARENTHESIS);
      break;
    }

    case 16: {
      setState(560);
      _la = _input->LA(1);
      if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(561);
      xpr_tree(15);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(613);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(611);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(564);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(565);
          _la = _input->LA(1);
          if (!(_la == MATLABParser::ELMENT_WISE_POWER

          || _la == MATLABParser::POWER)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(566);
          xpr_tree(17);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(567);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(568);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << MATLABParser::ELMENT_WISE_LEFT_DIVIDE)
            | (1ULL << MATLABParser::ELMENT_WISE_RIGHT_DIVIDE)
            | (1ULL << MATLABParser::ELMENT_WISE_TIMES))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(569);
          xpr_tree(15);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(570);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(571);
          _la = _input->LA(1);
          if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 68)) & ((1ULL << (MATLABParser::LEFT_DIVIDE - 68))
            | (1ULL << (MATLABParser::RIGHT_DIVIDE - 68))
            | (1ULL << (MATLABParser::TIMES - 68)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(572);
          xpr_tree(14);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(573);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(574);
          _la = _input->LA(1);
          if (!(_la == MATLABParser::MINUS

          || _la == MATLABParser::PLUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(575);
          xpr_tree(13);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(576);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(577);
          match(MATLABParser::COLON);
          setState(578);
          xpr_tree(12);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(579);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(580);
          match(MATLABParser::LESS_THAN);
          setState(581);
          xpr_tree(11);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(582);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(583);
          match(MATLABParser::LESS_THAN_OR_EQUAL);
          setState(584);
          xpr_tree(10);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(585);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(586);
          match(MATLABParser::GREATER_THAN);
          setState(587);
          xpr_tree(9);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(588);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(589);
          match(MATLABParser::GREATER_THAN_OR_EQUAL);
          setState(590);
          xpr_tree(8);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(591);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(592);
          match(MATLABParser::EQUALS);
          setState(593);
          xpr_tree(7);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(594);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(595);
          match(MATLABParser::NOT_EQUAL);
          setState(596);
          xpr_tree(6);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(597);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(598);
          match(MATLABParser::BINARY_AND);
          setState(599);
          xpr_tree(5);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(600);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(601);
          match(MATLABParser::BINARY_OR);
          setState(602);
          xpr_tree(4);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(603);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(604);
          match(MATLABParser::LOGICAL_AND);
          setState(605);
          xpr_tree(3);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(606);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(607);
          match(MATLABParser::LOGICAL_OR);
          setState(608);
          xpr_tree(2);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<Xpr_treeContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree);
          setState(609);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(610);
          _la = _input->LA(1);
          if (!(_la == MATLABParser::ELMENT_WISE_TRANSPOSE

          || _la == MATLABParser::TRANSPOSE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(615);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Xpr_tree_Context ------------------------------------------------------------------

MATLABParser::Xpr_tree_Context::Xpr_tree_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::Xpr_basefunctionContext* MATLABParser::Xpr_tree_Context::xpr_basefunction() {
  return getRuleContext<MATLABParser::Xpr_basefunctionContext>(0);
}

MATLABParser::Atom_booleanContext* MATLABParser::Xpr_tree_Context::atom_boolean() {
  return getRuleContext<MATLABParser::Atom_booleanContext>(0);
}

MATLABParser::Atom_empty_arrayContext* MATLABParser::Xpr_tree_Context::atom_empty_array() {
  return getRuleContext<MATLABParser::Atom_empty_arrayContext>(0);
}

MATLABParser::Atom_endContext* MATLABParser::Xpr_tree_Context::atom_end() {
  return getRuleContext<MATLABParser::Atom_endContext>(0);
}

MATLABParser::Atom_floatContext* MATLABParser::Xpr_tree_Context::atom_float() {
  return getRuleContext<MATLABParser::Atom_floatContext>(0);
}

MATLABParser::Atom_imaginaryContext* MATLABParser::Xpr_tree_Context::atom_imaginary() {
  return getRuleContext<MATLABParser::Atom_imaginaryContext>(0);
}

MATLABParser::Atom_integerContext* MATLABParser::Xpr_tree_Context::atom_integer() {
  return getRuleContext<MATLABParser::Atom_integerContext>(0);
}

MATLABParser::Atom_stringContext* MATLABParser::Xpr_tree_Context::atom_string() {
  return getRuleContext<MATLABParser::Atom_stringContext>(0);
}

MATLABParser::Atom_varContext* MATLABParser::Xpr_tree_Context::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

MATLABParser::Xpr_array_Context* MATLABParser::Xpr_tree_Context::xpr_array_() {
  return getRuleContext<MATLABParser::Xpr_array_Context>(0);
}

MATLABParser::Xpr_array_indexContext* MATLABParser::Xpr_tree_Context::xpr_array_index() {
  return getRuleContext<MATLABParser::Xpr_array_indexContext>(0);
}

MATLABParser::Xpr_cell_Context* MATLABParser::Xpr_tree_Context::xpr_cell_() {
  return getRuleContext<MATLABParser::Xpr_cell_Context>(0);
}

MATLABParser::Xpr_cell_indexContext* MATLABParser::Xpr_tree_Context::xpr_cell_index() {
  return getRuleContext<MATLABParser::Xpr_cell_indexContext>(0);
}

MATLABParser::Xpr_fieldContext* MATLABParser::Xpr_tree_Context::xpr_field() {
  return getRuleContext<MATLABParser::Xpr_fieldContext>(0);
}

MATLABParser::Xpr_functionContext* MATLABParser::Xpr_tree_Context::xpr_function() {
  return getRuleContext<MATLABParser::Xpr_functionContext>(0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::LEFT_PARENTHESIS() {
  return getToken(MATLABParser::LEFT_PARENTHESIS, 0);
}

std::vector<MATLABParser::Xpr_tree_Context *> MATLABParser::Xpr_tree_Context::xpr_tree_() {
  return getRuleContexts<MATLABParser::Xpr_tree_Context>();
}

MATLABParser::Xpr_tree_Context* MATLABParser::Xpr_tree_Context::xpr_tree_(size_t i) {
  return getRuleContext<MATLABParser::Xpr_tree_Context>(i);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::RIGHT_PARENTHESIS() {
  return getToken(MATLABParser::RIGHT_PARENTHESIS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::PLUS() {
  return getToken(MATLABParser::PLUS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::MINUS() {
  return getToken(MATLABParser::MINUS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::NOT() {
  return getToken(MATLABParser::NOT, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::ELMENT_WISE_POWER() {
  return getToken(MATLABParser::ELMENT_WISE_POWER, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::POWER() {
  return getToken(MATLABParser::POWER, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::ELMENT_WISE_TIMES() {
  return getToken(MATLABParser::ELMENT_WISE_TIMES, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::ELMENT_WISE_RIGHT_DIVIDE() {
  return getToken(MATLABParser::ELMENT_WISE_RIGHT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::ELMENT_WISE_LEFT_DIVIDE() {
  return getToken(MATLABParser::ELMENT_WISE_LEFT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::TIMES() {
  return getToken(MATLABParser::TIMES, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::RIGHT_DIVIDE() {
  return getToken(MATLABParser::RIGHT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::LEFT_DIVIDE() {
  return getToken(MATLABParser::LEFT_DIVIDE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::COLON() {
  return getToken(MATLABParser::COLON, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::LESS_THAN() {
  return getToken(MATLABParser::LESS_THAN, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::LESS_THAN_OR_EQUAL() {
  return getToken(MATLABParser::LESS_THAN_OR_EQUAL, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::GREATER_THAN() {
  return getToken(MATLABParser::GREATER_THAN, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::GREATER_THAN_OR_EQUAL() {
  return getToken(MATLABParser::GREATER_THAN_OR_EQUAL, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::EQUALS() {
  return getToken(MATLABParser::EQUALS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::NOT_EQUAL() {
  return getToken(MATLABParser::NOT_EQUAL, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::BINARY_AND() {
  return getToken(MATLABParser::BINARY_AND, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::BINARY_OR() {
  return getToken(MATLABParser::BINARY_OR, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::LOGICAL_AND() {
  return getToken(MATLABParser::LOGICAL_AND, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::LOGICAL_OR() {
  return getToken(MATLABParser::LOGICAL_OR, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::ELMENT_WISE_TRANSPOSE() {
  return getToken(MATLABParser::ELMENT_WISE_TRANSPOSE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_tree_Context::TRANSPOSE() {
  return getToken(MATLABParser::TRANSPOSE, 0);
}


size_t MATLABParser::Xpr_tree_Context::getRuleIndex() const {
  return MATLABParser::RuleXpr_tree_;
}

void MATLABParser::Xpr_tree_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_tree_(this);
}

void MATLABParser::Xpr_tree_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_tree_(this);
}


antlrcpp::Any MATLABParser::Xpr_tree_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_tree_(this);
  else
    return visitor->visitChildren(this);
}


MATLABParser::Xpr_tree_Context* MATLABParser::xpr_tree_() {
   return xpr_tree_(0);
}

MATLABParser::Xpr_tree_Context* MATLABParser::xpr_tree_(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MATLABParser::Xpr_tree_Context *_localctx = _tracker.createInstance<Xpr_tree_Context>(_ctx, parentState);
  MATLABParser::Xpr_tree_Context *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, MATLABParser::RuleXpr_tree_, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(638);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      setState(617);
      xpr_basefunction();
      break;
    }

    case 2: {
      setState(618);
      atom_boolean();
      break;
    }

    case 3: {
      setState(619);
      atom_empty_array();
      break;
    }

    case 4: {
      setState(620);
      atom_end();
      break;
    }

    case 5: {
      setState(621);
      atom_float();
      break;
    }

    case 6: {
      setState(622);
      atom_imaginary();
      break;
    }

    case 7: {
      setState(623);
      atom_integer();
      break;
    }

    case 8: {
      setState(624);
      atom_string();
      break;
    }

    case 9: {
      setState(625);
      atom_var();
      break;
    }

    case 10: {
      setState(626);
      xpr_array_();
      break;
    }

    case 11: {
      setState(627);
      xpr_array_index();
      break;
    }

    case 12: {
      setState(628);
      xpr_cell_();
      break;
    }

    case 13: {
      setState(629);
      xpr_cell_index();
      break;
    }

    case 14: {
      setState(630);
      xpr_field(0);
      break;
    }

    case 15: {
      setState(631);
      xpr_function();
      break;
    }

    case 16: {
      setState(632);
      match(MATLABParser::LEFT_PARENTHESIS);
      setState(633);
      xpr_tree_(0);
      setState(634);
      match(MATLABParser::RIGHT_PARENTHESIS);
      break;
    }

    case 17: {
      setState(636);
      _la = _input->LA(1);
      if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(637);
      xpr_tree_(15);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(689);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(687);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(640);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(641);
          _la = _input->LA(1);
          if (!(_la == MATLABParser::ELMENT_WISE_POWER

          || _la == MATLABParser::POWER)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(642);
          xpr_tree_(17);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(643);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(644);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << MATLABParser::ELMENT_WISE_LEFT_DIVIDE)
            | (1ULL << MATLABParser::ELMENT_WISE_RIGHT_DIVIDE)
            | (1ULL << MATLABParser::ELMENT_WISE_TIMES))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(645);
          xpr_tree_(15);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(646);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(647);
          _la = _input->LA(1);
          if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 68)) & ((1ULL << (MATLABParser::LEFT_DIVIDE - 68))
            | (1ULL << (MATLABParser::RIGHT_DIVIDE - 68))
            | (1ULL << (MATLABParser::TIMES - 68)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(648);
          xpr_tree_(14);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(649);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(650);
          _la = _input->LA(1);
          if (!(_la == MATLABParser::MINUS

          || _la == MATLABParser::PLUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(651);
          xpr_tree_(13);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(652);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(653);
          match(MATLABParser::COLON);
          setState(654);
          xpr_tree_(12);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(655);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(656);
          match(MATLABParser::LESS_THAN);
          setState(657);
          xpr_tree_(11);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(658);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(659);
          match(MATLABParser::LESS_THAN_OR_EQUAL);
          setState(660);
          xpr_tree_(10);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(661);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(662);
          match(MATLABParser::GREATER_THAN);
          setState(663);
          xpr_tree_(9);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(664);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(665);
          match(MATLABParser::GREATER_THAN_OR_EQUAL);
          setState(666);
          xpr_tree_(8);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(667);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(668);
          match(MATLABParser::EQUALS);
          setState(669);
          xpr_tree_(7);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(670);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(671);
          match(MATLABParser::NOT_EQUAL);
          setState(672);
          xpr_tree_(6);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(673);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(674);
          match(MATLABParser::BINARY_AND);
          setState(675);
          xpr_tree_(5);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(676);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(677);
          match(MATLABParser::BINARY_OR);
          setState(678);
          xpr_tree_(4);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(679);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(680);
          match(MATLABParser::LOGICAL_AND);
          setState(681);
          xpr_tree_(3);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(682);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(683);
          match(MATLABParser::LOGICAL_OR);
          setState(684);
          xpr_tree_(2);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<Xpr_tree_Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_tree_);
          setState(685);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(686);
          _la = _input->LA(1);
          if (!(_la == MATLABParser::ELMENT_WISE_TRANSPOSE

          || _la == MATLABParser::TRANSPOSE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(691);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Xpr_arrayContext ------------------------------------------------------------------

MATLABParser::Xpr_arrayContext::Xpr_arrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Xpr_arrayContext::LEFT_SQUARE_BRACKET() {
  return getToken(MATLABParser::LEFT_SQUARE_BRACKET, 0);
}

std::vector<MATLABParser::Xpr_treeContext *> MATLABParser::Xpr_arrayContext::xpr_tree() {
  return getRuleContexts<MATLABParser::Xpr_treeContext>();
}

MATLABParser::Xpr_treeContext* MATLABParser::Xpr_arrayContext::xpr_tree(size_t i) {
  return getRuleContext<MATLABParser::Xpr_treeContext>(i);
}

tree::TerminalNode* MATLABParser::Xpr_arrayContext::RIGHT_SQUARE_BRACKET() {
  return getToken(MATLABParser::RIGHT_SQUARE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_arrayContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_arrayContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_arrayContext::SEMI_COLON() {
  return getTokens(MATLABParser::SEMI_COLON);
}

tree::TerminalNode* MATLABParser::Xpr_arrayContext::SEMI_COLON(size_t i) {
  return getToken(MATLABParser::SEMI_COLON, i);
}


size_t MATLABParser::Xpr_arrayContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_array;
}

void MATLABParser::Xpr_arrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_array(this);
}

void MATLABParser::Xpr_arrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_array(this);
}


antlrcpp::Any MATLABParser::Xpr_arrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_array(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_arrayContext* MATLABParser::xpr_array() {
  Xpr_arrayContext *_localctx = _tracker.createInstance<Xpr_arrayContext>(_ctx, getState());
  enterRule(_localctx, 66, MATLABParser::RuleXpr_array);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(734);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(692);
      match(MATLABParser::LEFT_SQUARE_BRACKET);
      setState(693);
      xpr_tree(0);
      setState(700);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(695);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(694);
          match(MATLABParser::COMMA);
        }
        setState(697);
        xpr_tree(0);
        setState(702);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(703);
      match(MATLABParser::RIGHT_SQUARE_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(705);
      match(MATLABParser::LEFT_SQUARE_BRACKET);
      setState(706);
      xpr_tree(0);
      setState(713);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(708);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(707);
          match(MATLABParser::COMMA);
        }
        setState(710);
        xpr_tree(0);
        setState(715);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(729);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::SEMI_COLON) {
        setState(716);
        match(MATLABParser::SEMI_COLON);
        setState(717);
        xpr_tree(0);
        setState(724);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
          | (1ULL << MATLABParser::T__1)
          | (1ULL << MATLABParser::GET)
          | (1ULL << MATLABParser::SET)
          | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
          | (1ULL << (MATLABParser::NOT - 70))
          | (1ULL << (MATLABParser::PLUS - 70))
          | (1ULL << (MATLABParser::COMMA - 70))
          | (1ULL << (MATLABParser::LEFT_BRACE - 70))
          | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
          | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
          | (1ULL << (MATLABParser::BASE_FUNC - 70))
          | (1ULL << (MATLABParser::ID - 70))
          | (1ULL << (MATLABParser::IMAGINARY - 70))
          | (1ULL << (MATLABParser::INT - 70))
          | (1ULL << (MATLABParser::FLOAT - 70))
          | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
          setState(719);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MATLABParser::COMMA) {
            setState(718);
            match(MATLABParser::COMMA);
          }
          setState(721);
          xpr_tree(0);
          setState(726);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(731);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(732);
      match(MATLABParser::RIGHT_SQUARE_BRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_array_Context ------------------------------------------------------------------

MATLABParser::Xpr_array_Context::Xpr_array_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Xpr_array_Context::LEFT_SQUARE_BRACKET() {
  return getToken(MATLABParser::LEFT_SQUARE_BRACKET, 0);
}

std::vector<MATLABParser::Xpr_tree_Context *> MATLABParser::Xpr_array_Context::xpr_tree_() {
  return getRuleContexts<MATLABParser::Xpr_tree_Context>();
}

MATLABParser::Xpr_tree_Context* MATLABParser::Xpr_array_Context::xpr_tree_(size_t i) {
  return getRuleContext<MATLABParser::Xpr_tree_Context>(i);
}

tree::TerminalNode* MATLABParser::Xpr_array_Context::RIGHT_SQUARE_BRACKET() {
  return getToken(MATLABParser::RIGHT_SQUARE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_array_Context::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_array_Context::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_array_Context::SEMI_COLON() {
  return getTokens(MATLABParser::SEMI_COLON);
}

tree::TerminalNode* MATLABParser::Xpr_array_Context::SEMI_COLON(size_t i) {
  return getToken(MATLABParser::SEMI_COLON, i);
}


size_t MATLABParser::Xpr_array_Context::getRuleIndex() const {
  return MATLABParser::RuleXpr_array_;
}

void MATLABParser::Xpr_array_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_array_(this);
}

void MATLABParser::Xpr_array_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_array_(this);
}


antlrcpp::Any MATLABParser::Xpr_array_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_array_(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_array_Context* MATLABParser::xpr_array_() {
  Xpr_array_Context *_localctx = _tracker.createInstance<Xpr_array_Context>(_ctx, getState());
  enterRule(_localctx, 68, MATLABParser::RuleXpr_array_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(778);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(736);
      match(MATLABParser::LEFT_SQUARE_BRACKET);
      setState(737);
      xpr_tree_(0);
      setState(744);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::END)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(739);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(738);
          match(MATLABParser::COMMA);
        }
        setState(741);
        xpr_tree_(0);
        setState(746);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(747);
      match(MATLABParser::RIGHT_SQUARE_BRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(749);
      match(MATLABParser::LEFT_SQUARE_BRACKET);
      setState(750);
      xpr_tree_(0);
      setState(757);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::END)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(752);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(751);
          match(MATLABParser::COMMA);
        }
        setState(754);
        xpr_tree_(0);
        setState(759);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(773);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::SEMI_COLON) {
        setState(760);
        match(MATLABParser::SEMI_COLON);
        setState(761);
        xpr_tree_(0);
        setState(768);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
          | (1ULL << MATLABParser::T__1)
          | (1ULL << MATLABParser::END)
          | (1ULL << MATLABParser::GET)
          | (1ULL << MATLABParser::SET)
          | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
          | (1ULL << (MATLABParser::NOT - 70))
          | (1ULL << (MATLABParser::PLUS - 70))
          | (1ULL << (MATLABParser::COMMA - 70))
          | (1ULL << (MATLABParser::LEFT_BRACE - 70))
          | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
          | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
          | (1ULL << (MATLABParser::BASE_FUNC - 70))
          | (1ULL << (MATLABParser::ID - 70))
          | (1ULL << (MATLABParser::IMAGINARY - 70))
          | (1ULL << (MATLABParser::INT - 70))
          | (1ULL << (MATLABParser::FLOAT - 70))
          | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
          setState(763);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MATLABParser::COMMA) {
            setState(762);
            match(MATLABParser::COMMA);
          }
          setState(765);
          xpr_tree_(0);
          setState(770);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(775);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(776);
      match(MATLABParser::RIGHT_SQUARE_BRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_cellContext ------------------------------------------------------------------

MATLABParser::Xpr_cellContext::Xpr_cellContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Xpr_cellContext::LEFT_BRACE() {
  return getToken(MATLABParser::LEFT_BRACE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_cellContext::RIGHT_BRACE() {
  return getToken(MATLABParser::RIGHT_BRACE, 0);
}

std::vector<MATLABParser::Xpr_treeContext *> MATLABParser::Xpr_cellContext::xpr_tree() {
  return getRuleContexts<MATLABParser::Xpr_treeContext>();
}

MATLABParser::Xpr_treeContext* MATLABParser::Xpr_cellContext::xpr_tree(size_t i) {
  return getRuleContext<MATLABParser::Xpr_treeContext>(i);
}

std::vector<MATLABParser::Xpr_handleContext *> MATLABParser::Xpr_cellContext::xpr_handle() {
  return getRuleContexts<MATLABParser::Xpr_handleContext>();
}

MATLABParser::Xpr_handleContext* MATLABParser::Xpr_cellContext::xpr_handle(size_t i) {
  return getRuleContext<MATLABParser::Xpr_handleContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_cellContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_cellContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_cellContext::SEMI_COLON() {
  return getTokens(MATLABParser::SEMI_COLON);
}

tree::TerminalNode* MATLABParser::Xpr_cellContext::SEMI_COLON(size_t i) {
  return getToken(MATLABParser::SEMI_COLON, i);
}


size_t MATLABParser::Xpr_cellContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_cell;
}

void MATLABParser::Xpr_cellContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_cell(this);
}

void MATLABParser::Xpr_cellContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_cell(this);
}


antlrcpp::Any MATLABParser::Xpr_cellContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_cell(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_cellContext* MATLABParser::xpr_cell() {
  Xpr_cellContext *_localctx = _tracker.createInstance<Xpr_cellContext>(_ctx, getState());
  enterRule(_localctx, 70, MATLABParser::RuleXpr_cell);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(840);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(780);
      match(MATLABParser::LEFT_BRACE);
      setState(783);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MATLABParser::T__0:
        case MATLABParser::T__1:
        case MATLABParser::GET:
        case MATLABParser::SET:
        case MATLABParser::STATIC:
        case MATLABParser::MINUS:
        case MATLABParser::NOT:
        case MATLABParser::PLUS:
        case MATLABParser::LEFT_BRACE:
        case MATLABParser::LEFT_PARENTHESIS:
        case MATLABParser::LEFT_SQUARE_BRACKET:
        case MATLABParser::BASE_FUNC:
        case MATLABParser::ID:
        case MATLABParser::IMAGINARY:
        case MATLABParser::INT:
        case MATLABParser::FLOAT:
        case MATLABParser::STRING: {
          setState(781);
          xpr_tree(0);
          break;
        }

        case MATLABParser::AT: {
          setState(782);
          xpr_handle();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(794);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::AT - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(786);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(785);
          match(MATLABParser::COMMA);
        }
        setState(790);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MATLABParser::T__0:
          case MATLABParser::T__1:
          case MATLABParser::GET:
          case MATLABParser::SET:
          case MATLABParser::STATIC:
          case MATLABParser::MINUS:
          case MATLABParser::NOT:
          case MATLABParser::PLUS:
          case MATLABParser::LEFT_BRACE:
          case MATLABParser::LEFT_PARENTHESIS:
          case MATLABParser::LEFT_SQUARE_BRACKET:
          case MATLABParser::BASE_FUNC:
          case MATLABParser::ID:
          case MATLABParser::IMAGINARY:
          case MATLABParser::INT:
          case MATLABParser::FLOAT:
          case MATLABParser::STRING: {
            setState(788);
            xpr_tree(0);
            break;
          }

          case MATLABParser::AT: {
            setState(789);
            xpr_handle();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(796);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(797);
      match(MATLABParser::RIGHT_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(799);
      match(MATLABParser::LEFT_BRACE);
      setState(802);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MATLABParser::T__0:
        case MATLABParser::T__1:
        case MATLABParser::GET:
        case MATLABParser::SET:
        case MATLABParser::STATIC:
        case MATLABParser::MINUS:
        case MATLABParser::NOT:
        case MATLABParser::PLUS:
        case MATLABParser::LEFT_BRACE:
        case MATLABParser::LEFT_PARENTHESIS:
        case MATLABParser::LEFT_SQUARE_BRACKET:
        case MATLABParser::BASE_FUNC:
        case MATLABParser::ID:
        case MATLABParser::IMAGINARY:
        case MATLABParser::INT:
        case MATLABParser::FLOAT:
        case MATLABParser::STRING: {
          setState(800);
          xpr_tree(0);
          break;
        }

        case MATLABParser::AT: {
          setState(801);
          xpr_handle();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(813);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::AT - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(805);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(804);
          match(MATLABParser::COMMA);
        }
        setState(809);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MATLABParser::T__0:
          case MATLABParser::T__1:
          case MATLABParser::GET:
          case MATLABParser::SET:
          case MATLABParser::STATIC:
          case MATLABParser::MINUS:
          case MATLABParser::NOT:
          case MATLABParser::PLUS:
          case MATLABParser::LEFT_BRACE:
          case MATLABParser::LEFT_PARENTHESIS:
          case MATLABParser::LEFT_SQUARE_BRACKET:
          case MATLABParser::BASE_FUNC:
          case MATLABParser::ID:
          case MATLABParser::IMAGINARY:
          case MATLABParser::INT:
          case MATLABParser::FLOAT:
          case MATLABParser::STRING: {
            setState(807);
            xpr_tree(0);
            break;
          }

          case MATLABParser::AT: {
            setState(808);
            xpr_handle();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(815);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(835);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::SEMI_COLON) {
        setState(816);
        match(MATLABParser::SEMI_COLON);
        setState(819);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MATLABParser::T__0:
          case MATLABParser::T__1:
          case MATLABParser::GET:
          case MATLABParser::SET:
          case MATLABParser::STATIC:
          case MATLABParser::MINUS:
          case MATLABParser::NOT:
          case MATLABParser::PLUS:
          case MATLABParser::LEFT_BRACE:
          case MATLABParser::LEFT_PARENTHESIS:
          case MATLABParser::LEFT_SQUARE_BRACKET:
          case MATLABParser::BASE_FUNC:
          case MATLABParser::ID:
          case MATLABParser::IMAGINARY:
          case MATLABParser::INT:
          case MATLABParser::FLOAT:
          case MATLABParser::STRING: {
            setState(817);
            xpr_tree(0);
            break;
          }

          case MATLABParser::AT: {
            setState(818);
            xpr_handle();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(830);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
          | (1ULL << MATLABParser::T__1)
          | (1ULL << MATLABParser::GET)
          | (1ULL << MATLABParser::SET)
          | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
          | (1ULL << (MATLABParser::NOT - 70))
          | (1ULL << (MATLABParser::PLUS - 70))
          | (1ULL << (MATLABParser::AT - 70))
          | (1ULL << (MATLABParser::COMMA - 70))
          | (1ULL << (MATLABParser::LEFT_BRACE - 70))
          | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
          | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
          | (1ULL << (MATLABParser::BASE_FUNC - 70))
          | (1ULL << (MATLABParser::ID - 70))
          | (1ULL << (MATLABParser::IMAGINARY - 70))
          | (1ULL << (MATLABParser::INT - 70))
          | (1ULL << (MATLABParser::FLOAT - 70))
          | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
          setState(822);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MATLABParser::COMMA) {
            setState(821);
            match(MATLABParser::COMMA);
          }
          setState(826);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case MATLABParser::T__0:
            case MATLABParser::T__1:
            case MATLABParser::GET:
            case MATLABParser::SET:
            case MATLABParser::STATIC:
            case MATLABParser::MINUS:
            case MATLABParser::NOT:
            case MATLABParser::PLUS:
            case MATLABParser::LEFT_BRACE:
            case MATLABParser::LEFT_PARENTHESIS:
            case MATLABParser::LEFT_SQUARE_BRACKET:
            case MATLABParser::BASE_FUNC:
            case MATLABParser::ID:
            case MATLABParser::IMAGINARY:
            case MATLABParser::INT:
            case MATLABParser::FLOAT:
            case MATLABParser::STRING: {
              setState(824);
              xpr_tree(0);
              break;
            }

            case MATLABParser::AT: {
              setState(825);
              xpr_handle();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(832);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(837);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(838);
      match(MATLABParser::RIGHT_BRACE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_cell_Context ------------------------------------------------------------------

MATLABParser::Xpr_cell_Context::Xpr_cell_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Xpr_cell_Context::LEFT_BRACE() {
  return getToken(MATLABParser::LEFT_BRACE, 0);
}

std::vector<MATLABParser::Xpr_tree_Context *> MATLABParser::Xpr_cell_Context::xpr_tree_() {
  return getRuleContexts<MATLABParser::Xpr_tree_Context>();
}

MATLABParser::Xpr_tree_Context* MATLABParser::Xpr_cell_Context::xpr_tree_(size_t i) {
  return getRuleContext<MATLABParser::Xpr_tree_Context>(i);
}

tree::TerminalNode* MATLABParser::Xpr_cell_Context::RIGHT_BRACE() {
  return getToken(MATLABParser::RIGHT_BRACE, 0);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_cell_Context::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_cell_Context::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_cell_Context::SEMI_COLON() {
  return getTokens(MATLABParser::SEMI_COLON);
}

tree::TerminalNode* MATLABParser::Xpr_cell_Context::SEMI_COLON(size_t i) {
  return getToken(MATLABParser::SEMI_COLON, i);
}


size_t MATLABParser::Xpr_cell_Context::getRuleIndex() const {
  return MATLABParser::RuleXpr_cell_;
}

void MATLABParser::Xpr_cell_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_cell_(this);
}

void MATLABParser::Xpr_cell_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_cell_(this);
}


antlrcpp::Any MATLABParser::Xpr_cell_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_cell_(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_cell_Context* MATLABParser::xpr_cell_() {
  Xpr_cell_Context *_localctx = _tracker.createInstance<Xpr_cell_Context>(_ctx, getState());
  enterRule(_localctx, 72, MATLABParser::RuleXpr_cell_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(884);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(842);
      match(MATLABParser::LEFT_BRACE);
      setState(843);
      xpr_tree_(0);
      setState(850);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::END)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(845);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(844);
          match(MATLABParser::COMMA);
        }
        setState(847);
        xpr_tree_(0);
        setState(852);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(853);
      match(MATLABParser::RIGHT_BRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(855);
      match(MATLABParser::LEFT_BRACE);
      setState(856);
      xpr_tree_(0);
      setState(863);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
        | (1ULL << MATLABParser::T__1)
        | (1ULL << MATLABParser::END)
        | (1ULL << MATLABParser::GET)
        | (1ULL << MATLABParser::SET)
        | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
        | (1ULL << (MATLABParser::NOT - 70))
        | (1ULL << (MATLABParser::PLUS - 70))
        | (1ULL << (MATLABParser::COMMA - 70))
        | (1ULL << (MATLABParser::LEFT_BRACE - 70))
        | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
        | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
        | (1ULL << (MATLABParser::BASE_FUNC - 70))
        | (1ULL << (MATLABParser::ID - 70))
        | (1ULL << (MATLABParser::IMAGINARY - 70))
        | (1ULL << (MATLABParser::INT - 70))
        | (1ULL << (MATLABParser::FLOAT - 70))
        | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
        setState(858);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MATLABParser::COMMA) {
          setState(857);
          match(MATLABParser::COMMA);
        }
        setState(860);
        xpr_tree_(0);
        setState(865);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(879);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::SEMI_COLON) {
        setState(866);
        match(MATLABParser::SEMI_COLON);
        setState(867);
        xpr_tree_(0);
        setState(874);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
          | (1ULL << MATLABParser::T__1)
          | (1ULL << MATLABParser::END)
          | (1ULL << MATLABParser::GET)
          | (1ULL << MATLABParser::SET)
          | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
          | (1ULL << (MATLABParser::NOT - 70))
          | (1ULL << (MATLABParser::PLUS - 70))
          | (1ULL << (MATLABParser::COMMA - 70))
          | (1ULL << (MATLABParser::LEFT_BRACE - 70))
          | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
          | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
          | (1ULL << (MATLABParser::BASE_FUNC - 70))
          | (1ULL << (MATLABParser::ID - 70))
          | (1ULL << (MATLABParser::IMAGINARY - 70))
          | (1ULL << (MATLABParser::INT - 70))
          | (1ULL << (MATLABParser::FLOAT - 70))
          | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
          setState(869);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MATLABParser::COMMA) {
            setState(868);
            match(MATLABParser::COMMA);
          }
          setState(871);
          xpr_tree_(0);
          setState(876);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(881);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(882);
      match(MATLABParser::RIGHT_BRACE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_array_indexContext ------------------------------------------------------------------

MATLABParser::Xpr_array_indexContext::Xpr_array_indexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Xpr_array_indexContext::LEFT_PARENTHESIS() {
  return getToken(MATLABParser::LEFT_PARENTHESIS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_array_indexContext::RIGHT_PARENTHESIS() {
  return getToken(MATLABParser::RIGHT_PARENTHESIS, 0);
}

MATLABParser::Xpr_cell_indexContext* MATLABParser::Xpr_array_indexContext::xpr_cell_index() {
  return getRuleContext<MATLABParser::Xpr_cell_indexContext>(0);
}

MATLABParser::Atom_varContext* MATLABParser::Xpr_array_indexContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

std::vector<MATLABParser::Atom_index_allContext *> MATLABParser::Xpr_array_indexContext::atom_index_all() {
  return getRuleContexts<MATLABParser::Atom_index_allContext>();
}

MATLABParser::Atom_index_allContext* MATLABParser::Xpr_array_indexContext::atom_index_all(size_t i) {
  return getRuleContext<MATLABParser::Atom_index_allContext>(i);
}

std::vector<MATLABParser::Xpr_tree_Context *> MATLABParser::Xpr_array_indexContext::xpr_tree_() {
  return getRuleContexts<MATLABParser::Xpr_tree_Context>();
}

MATLABParser::Xpr_tree_Context* MATLABParser::Xpr_array_indexContext::xpr_tree_(size_t i) {
  return getRuleContext<MATLABParser::Xpr_tree_Context>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_array_indexContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_array_indexContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::Xpr_array_indexContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_array_index;
}

void MATLABParser::Xpr_array_indexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_array_index(this);
}

void MATLABParser::Xpr_array_indexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_array_index(this);
}


antlrcpp::Any MATLABParser::Xpr_array_indexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_array_index(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_array_indexContext* MATLABParser::xpr_array_index() {
  Xpr_array_indexContext *_localctx = _tracker.createInstance<Xpr_array_indexContext>(_ctx, getState());
  enterRule(_localctx, 74, MATLABParser::RuleXpr_array_index);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(888);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      setState(886);
      xpr_cell_index();
      break;
    }

    case 2: {
      setState(887);
      atom_var();
      break;
    }

    default:
      break;
    }
    setState(890);
    match(MATLABParser::LEFT_PARENTHESIS);
    setState(893);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MATLABParser::COLON: {
        setState(891);
        atom_index_all();
        break;
      }

      case MATLABParser::T__0:
      case MATLABParser::T__1:
      case MATLABParser::END:
      case MATLABParser::GET:
      case MATLABParser::SET:
      case MATLABParser::STATIC:
      case MATLABParser::MINUS:
      case MATLABParser::NOT:
      case MATLABParser::PLUS:
      case MATLABParser::LEFT_BRACE:
      case MATLABParser::LEFT_PARENTHESIS:
      case MATLABParser::LEFT_SQUARE_BRACKET:
      case MATLABParser::BASE_FUNC:
      case MATLABParser::ID:
      case MATLABParser::IMAGINARY:
      case MATLABParser::INT:
      case MATLABParser::FLOAT:
      case MATLABParser::STRING: {
        setState(892);
        xpr_tree_(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(902);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::COMMA) {
      setState(895);
      match(MATLABParser::COMMA);
      setState(898);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MATLABParser::COLON: {
          setState(896);
          atom_index_all();
          break;
        }

        case MATLABParser::T__0:
        case MATLABParser::T__1:
        case MATLABParser::END:
        case MATLABParser::GET:
        case MATLABParser::SET:
        case MATLABParser::STATIC:
        case MATLABParser::MINUS:
        case MATLABParser::NOT:
        case MATLABParser::PLUS:
        case MATLABParser::LEFT_BRACE:
        case MATLABParser::LEFT_PARENTHESIS:
        case MATLABParser::LEFT_SQUARE_BRACKET:
        case MATLABParser::BASE_FUNC:
        case MATLABParser::ID:
        case MATLABParser::IMAGINARY:
        case MATLABParser::INT:
        case MATLABParser::FLOAT:
        case MATLABParser::STRING: {
          setState(897);
          xpr_tree_(0);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(904);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(905);
    match(MATLABParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_cell_indexContext ------------------------------------------------------------------

MATLABParser::Xpr_cell_indexContext::Xpr_cell_indexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::Atom_varContext* MATLABParser::Xpr_cell_indexContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

tree::TerminalNode* MATLABParser::Xpr_cell_indexContext::LEFT_BRACE() {
  return getToken(MATLABParser::LEFT_BRACE, 0);
}

tree::TerminalNode* MATLABParser::Xpr_cell_indexContext::RIGHT_BRACE() {
  return getToken(MATLABParser::RIGHT_BRACE, 0);
}

std::vector<MATLABParser::Atom_index_allContext *> MATLABParser::Xpr_cell_indexContext::atom_index_all() {
  return getRuleContexts<MATLABParser::Atom_index_allContext>();
}

MATLABParser::Atom_index_allContext* MATLABParser::Xpr_cell_indexContext::atom_index_all(size_t i) {
  return getRuleContext<MATLABParser::Atom_index_allContext>(i);
}

std::vector<MATLABParser::Xpr_tree_Context *> MATLABParser::Xpr_cell_indexContext::xpr_tree_() {
  return getRuleContexts<MATLABParser::Xpr_tree_Context>();
}

MATLABParser::Xpr_tree_Context* MATLABParser::Xpr_cell_indexContext::xpr_tree_(size_t i) {
  return getRuleContext<MATLABParser::Xpr_tree_Context>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_cell_indexContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_cell_indexContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::Xpr_cell_indexContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_cell_index;
}

void MATLABParser::Xpr_cell_indexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_cell_index(this);
}

void MATLABParser::Xpr_cell_indexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_cell_index(this);
}


antlrcpp::Any MATLABParser::Xpr_cell_indexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_cell_index(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_cell_indexContext* MATLABParser::xpr_cell_index() {
  Xpr_cell_indexContext *_localctx = _tracker.createInstance<Xpr_cell_indexContext>(_ctx, getState());
  enterRule(_localctx, 76, MATLABParser::RuleXpr_cell_index);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(907);
    atom_var();
    setState(908);
    match(MATLABParser::LEFT_BRACE);
    setState(911);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MATLABParser::COLON: {
        setState(909);
        atom_index_all();
        break;
      }

      case MATLABParser::T__0:
      case MATLABParser::T__1:
      case MATLABParser::END:
      case MATLABParser::GET:
      case MATLABParser::SET:
      case MATLABParser::STATIC:
      case MATLABParser::MINUS:
      case MATLABParser::NOT:
      case MATLABParser::PLUS:
      case MATLABParser::LEFT_BRACE:
      case MATLABParser::LEFT_PARENTHESIS:
      case MATLABParser::LEFT_SQUARE_BRACKET:
      case MATLABParser::BASE_FUNC:
      case MATLABParser::ID:
      case MATLABParser::IMAGINARY:
      case MATLABParser::INT:
      case MATLABParser::FLOAT:
      case MATLABParser::STRING: {
        setState(910);
        xpr_tree_(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(920);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MATLABParser::COMMA) {
      setState(913);
      match(MATLABParser::COMMA);
      setState(916);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MATLABParser::COLON: {
          setState(914);
          atom_index_all();
          break;
        }

        case MATLABParser::T__0:
        case MATLABParser::T__1:
        case MATLABParser::END:
        case MATLABParser::GET:
        case MATLABParser::SET:
        case MATLABParser::STATIC:
        case MATLABParser::MINUS:
        case MATLABParser::NOT:
        case MATLABParser::PLUS:
        case MATLABParser::LEFT_BRACE:
        case MATLABParser::LEFT_PARENTHESIS:
        case MATLABParser::LEFT_SQUARE_BRACKET:
        case MATLABParser::BASE_FUNC:
        case MATLABParser::ID:
        case MATLABParser::IMAGINARY:
        case MATLABParser::INT:
        case MATLABParser::FLOAT:
        case MATLABParser::STRING: {
          setState(915);
          xpr_tree_(0);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(922);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(923);
    match(MATLABParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_fieldContext ------------------------------------------------------------------

MATLABParser::Xpr_fieldContext::Xpr_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MATLABParser::Atom_varContext *> MATLABParser::Xpr_fieldContext::atom_var() {
  return getRuleContexts<MATLABParser::Atom_varContext>();
}

MATLABParser::Atom_varContext* MATLABParser::Xpr_fieldContext::atom_var(size_t i) {
  return getRuleContext<MATLABParser::Atom_varContext>(i);
}

tree::TerminalNode* MATLABParser::Xpr_fieldContext::DOT() {
  return getToken(MATLABParser::DOT, 0);
}

std::vector<MATLABParser::Xpr_array_indexContext *> MATLABParser::Xpr_fieldContext::xpr_array_index() {
  return getRuleContexts<MATLABParser::Xpr_array_indexContext>();
}

MATLABParser::Xpr_array_indexContext* MATLABParser::Xpr_fieldContext::xpr_array_index(size_t i) {
  return getRuleContext<MATLABParser::Xpr_array_indexContext>(i);
}

std::vector<MATLABParser::Xpr_cell_indexContext *> MATLABParser::Xpr_fieldContext::xpr_cell_index() {
  return getRuleContexts<MATLABParser::Xpr_cell_indexContext>();
}

MATLABParser::Xpr_cell_indexContext* MATLABParser::Xpr_fieldContext::xpr_cell_index(size_t i) {
  return getRuleContext<MATLABParser::Xpr_cell_indexContext>(i);
}

MATLABParser::Xpr_functionContext* MATLABParser::Xpr_fieldContext::xpr_function() {
  return getRuleContext<MATLABParser::Xpr_functionContext>(0);
}

MATLABParser::Xpr_fieldContext* MATLABParser::Xpr_fieldContext::xpr_field() {
  return getRuleContext<MATLABParser::Xpr_fieldContext>(0);
}


size_t MATLABParser::Xpr_fieldContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_field;
}

void MATLABParser::Xpr_fieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_field(this);
}

void MATLABParser::Xpr_fieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_field(this);
}


antlrcpp::Any MATLABParser::Xpr_fieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_field(this);
  else
    return visitor->visitChildren(this);
}


MATLABParser::Xpr_fieldContext* MATLABParser::xpr_field() {
   return xpr_field(0);
}

MATLABParser::Xpr_fieldContext* MATLABParser::xpr_field(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MATLABParser::Xpr_fieldContext *_localctx = _tracker.createInstance<Xpr_fieldContext>(_ctx, parentState);
  MATLABParser::Xpr_fieldContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, MATLABParser::RuleXpr_field, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(974);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      setState(926);
      atom_var();
      setState(927);
      match(MATLABParser::DOT);
      setState(928);
      atom_var();
      break;
    }

    case 2: {
      setState(930);
      atom_var();
      setState(931);
      match(MATLABParser::DOT);
      setState(932);
      xpr_array_index();
      break;
    }

    case 3: {
      setState(934);
      atom_var();
      setState(935);
      match(MATLABParser::DOT);
      setState(936);
      xpr_cell_index();
      break;
    }

    case 4: {
      setState(938);
      atom_var();
      setState(939);
      match(MATLABParser::DOT);
      setState(940);
      xpr_function();
      break;
    }

    case 5: {
      setState(942);
      xpr_array_index();
      setState(943);
      match(MATLABParser::DOT);
      setState(944);
      atom_var();
      break;
    }

    case 6: {
      setState(946);
      xpr_array_index();
      setState(947);
      match(MATLABParser::DOT);
      setState(948);
      xpr_array_index();
      break;
    }

    case 7: {
      setState(950);
      xpr_array_index();
      setState(951);
      match(MATLABParser::DOT);
      setState(952);
      xpr_cell_index();
      break;
    }

    case 8: {
      setState(954);
      xpr_array_index();
      setState(955);
      match(MATLABParser::DOT);
      setState(956);
      xpr_function();
      break;
    }

    case 9: {
      setState(958);
      xpr_cell_index();
      setState(959);
      match(MATLABParser::DOT);
      setState(960);
      atom_var();
      break;
    }

    case 10: {
      setState(962);
      xpr_cell_index();
      setState(963);
      match(MATLABParser::DOT);
      setState(964);
      xpr_array_index();
      break;
    }

    case 11: {
      setState(966);
      xpr_cell_index();
      setState(967);
      match(MATLABParser::DOT);
      setState(968);
      xpr_cell_index();
      break;
    }

    case 12: {
      setState(970);
      xpr_cell_index();
      setState(971);
      match(MATLABParser::DOT);
      setState(972);
      xpr_function();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(990);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(988);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Xpr_fieldContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_field);
          setState(976);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(977);
          match(MATLABParser::DOT);
          setState(978);
          atom_var();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Xpr_fieldContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_field);
          setState(979);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(980);
          match(MATLABParser::DOT);
          setState(981);
          xpr_array_index();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Xpr_fieldContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_field);
          setState(982);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(983);
          match(MATLABParser::DOT);
          setState(984);
          xpr_cell_index();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Xpr_fieldContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleXpr_field);
          setState(985);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(986);
          match(MATLABParser::DOT);
          setState(987);
          xpr_function();
          break;
        }

        default:
          break;
        } 
      }
      setState(992);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Xpr_functionContext ------------------------------------------------------------------

MATLABParser::Xpr_functionContext::Xpr_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::Atom_varContext* MATLABParser::Xpr_functionContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

tree::TerminalNode* MATLABParser::Xpr_functionContext::LEFT_PARENTHESIS() {
  return getToken(MATLABParser::LEFT_PARENTHESIS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_functionContext::RIGHT_PARENTHESIS() {
  return getToken(MATLABParser::RIGHT_PARENTHESIS, 0);
}

std::vector<MATLABParser::Func_argContext *> MATLABParser::Xpr_functionContext::func_arg() {
  return getRuleContexts<MATLABParser::Func_argContext>();
}

MATLABParser::Func_argContext* MATLABParser::Xpr_functionContext::func_arg(size_t i) {
  return getRuleContext<MATLABParser::Func_argContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_functionContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_functionContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::Xpr_functionContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_function;
}

void MATLABParser::Xpr_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_function(this);
}

void MATLABParser::Xpr_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_function(this);
}


antlrcpp::Any MATLABParser::Xpr_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_function(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_functionContext* MATLABParser::xpr_function() {
  Xpr_functionContext *_localctx = _tracker.createInstance<Xpr_functionContext>(_ctx, getState());
  enterRule(_localctx, 80, MATLABParser::RuleXpr_function);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(993);
    atom_var();
    setState(994);
    match(MATLABParser::LEFT_PARENTHESIS);
    setState(1003);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
      | (1ULL << MATLABParser::T__1)
      | (1ULL << MATLABParser::GET)
      | (1ULL << MATLABParser::SET)
      | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
      | (1ULL << (MATLABParser::NOT - 70))
      | (1ULL << (MATLABParser::PLUS - 70))
      | (1ULL << (MATLABParser::AT - 70))
      | (1ULL << (MATLABParser::LEFT_BRACE - 70))
      | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
      | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
      | (1ULL << (MATLABParser::BASE_FUNC - 70))
      | (1ULL << (MATLABParser::ID - 70))
      | (1ULL << (MATLABParser::IMAGINARY - 70))
      | (1ULL << (MATLABParser::INT - 70))
      | (1ULL << (MATLABParser::FLOAT - 70))
      | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
      setState(995);
      func_arg();
      setState(1000);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::COMMA) {
        setState(996);
        match(MATLABParser::COMMA);

        setState(997);
        func_arg();
        setState(1002);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(1005);
    match(MATLABParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_basefunctionContext ------------------------------------------------------------------

MATLABParser::Xpr_basefunctionContext::Xpr_basefunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Xpr_basefunctionContext::BASE_FUNC() {
  return getToken(MATLABParser::BASE_FUNC, 0);
}

tree::TerminalNode* MATLABParser::Xpr_basefunctionContext::LEFT_PARENTHESIS() {
  return getToken(MATLABParser::LEFT_PARENTHESIS, 0);
}

tree::TerminalNode* MATLABParser::Xpr_basefunctionContext::RIGHT_PARENTHESIS() {
  return getToken(MATLABParser::RIGHT_PARENTHESIS, 0);
}

std::vector<MATLABParser::Func_argContext *> MATLABParser::Xpr_basefunctionContext::func_arg() {
  return getRuleContexts<MATLABParser::Func_argContext>();
}

MATLABParser::Func_argContext* MATLABParser::Xpr_basefunctionContext::func_arg(size_t i) {
  return getRuleContext<MATLABParser::Func_argContext>(i);
}

std::vector<tree::TerminalNode *> MATLABParser::Xpr_basefunctionContext::COMMA() {
  return getTokens(MATLABParser::COMMA);
}

tree::TerminalNode* MATLABParser::Xpr_basefunctionContext::COMMA(size_t i) {
  return getToken(MATLABParser::COMMA, i);
}


size_t MATLABParser::Xpr_basefunctionContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_basefunction;
}

void MATLABParser::Xpr_basefunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_basefunction(this);
}

void MATLABParser::Xpr_basefunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_basefunction(this);
}


antlrcpp::Any MATLABParser::Xpr_basefunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_basefunction(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_basefunctionContext* MATLABParser::xpr_basefunction() {
  Xpr_basefunctionContext *_localctx = _tracker.createInstance<Xpr_basefunctionContext>(_ctx, getState());
  enterRule(_localctx, 82, MATLABParser::RuleXpr_basefunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1007);
    match(MATLABParser::BASE_FUNC);
    setState(1008);
    match(MATLABParser::LEFT_PARENTHESIS);
    setState(1017);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MATLABParser::T__0)
      | (1ULL << MATLABParser::T__1)
      | (1ULL << MATLABParser::GET)
      | (1ULL << MATLABParser::SET)
      | (1ULL << MATLABParser::STATIC))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (MATLABParser::MINUS - 70))
      | (1ULL << (MATLABParser::NOT - 70))
      | (1ULL << (MATLABParser::PLUS - 70))
      | (1ULL << (MATLABParser::AT - 70))
      | (1ULL << (MATLABParser::LEFT_BRACE - 70))
      | (1ULL << (MATLABParser::LEFT_PARENTHESIS - 70))
      | (1ULL << (MATLABParser::LEFT_SQUARE_BRACKET - 70))
      | (1ULL << (MATLABParser::BASE_FUNC - 70))
      | (1ULL << (MATLABParser::ID - 70))
      | (1ULL << (MATLABParser::IMAGINARY - 70))
      | (1ULL << (MATLABParser::INT - 70))
      | (1ULL << (MATLABParser::FLOAT - 70))
      | (1ULL << (MATLABParser::STRING - 70)))) != 0)) {
      setState(1009);
      func_arg();
      setState(1014);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MATLABParser::COMMA) {
        setState(1010);
        match(MATLABParser::COMMA);

        setState(1011);
        func_arg();
        setState(1016);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(1019);
    match(MATLABParser::RIGHT_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_argContext ------------------------------------------------------------------

MATLABParser::Func_argContext::Func_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MATLABParser::Xpr_treeContext* MATLABParser::Func_argContext::xpr_tree() {
  return getRuleContext<MATLABParser::Xpr_treeContext>(0);
}

MATLABParser::Xpr_handleContext* MATLABParser::Func_argContext::xpr_handle() {
  return getRuleContext<MATLABParser::Xpr_handleContext>(0);
}

MATLABParser::Atom_empty_cellContext* MATLABParser::Func_argContext::atom_empty_cell() {
  return getRuleContext<MATLABParser::Atom_empty_cellContext>(0);
}


size_t MATLABParser::Func_argContext::getRuleIndex() const {
  return MATLABParser::RuleFunc_arg;
}

void MATLABParser::Func_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_arg(this);
}

void MATLABParser::Func_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_arg(this);
}


antlrcpp::Any MATLABParser::Func_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitFunc_arg(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Func_argContext* MATLABParser::func_arg() {
  Func_argContext *_localctx = _tracker.createInstance<Func_argContext>(_ctx, getState());
  enterRule(_localctx, 84, MATLABParser::RuleFunc_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1024);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1021);
      xpr_tree(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1022);
      xpr_handle();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1023);
      atom_empty_cell();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Xpr_handleContext ------------------------------------------------------------------

MATLABParser::Xpr_handleContext::Xpr_handleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Xpr_handleContext::AT() {
  return getToken(MATLABParser::AT, 0);
}

MATLABParser::Atom_varContext* MATLABParser::Xpr_handleContext::atom_var() {
  return getRuleContext<MATLABParser::Atom_varContext>(0);
}

MATLABParser::Function_paramsContext* MATLABParser::Xpr_handleContext::function_params() {
  return getRuleContext<MATLABParser::Function_paramsContext>(0);
}

MATLABParser::StatementContext* MATLABParser::Xpr_handleContext::statement() {
  return getRuleContext<MATLABParser::StatementContext>(0);
}


size_t MATLABParser::Xpr_handleContext::getRuleIndex() const {
  return MATLABParser::RuleXpr_handle;
}

void MATLABParser::Xpr_handleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXpr_handle(this);
}

void MATLABParser::Xpr_handleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXpr_handle(this);
}


antlrcpp::Any MATLABParser::Xpr_handleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitXpr_handle(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Xpr_handleContext* MATLABParser::xpr_handle() {
  Xpr_handleContext *_localctx = _tracker.createInstance<Xpr_handleContext>(_ctx, getState());
  enterRule(_localctx, 86, MATLABParser::RuleXpr_handle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1032);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1026);
      match(MATLABParser::AT);
      setState(1027);
      atom_var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1028);
      match(MATLABParser::AT);
      setState(1029);
      function_params();
      setState(1030);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Command_argumentContext ------------------------------------------------------------------

MATLABParser::Command_argumentContext::Command_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MATLABParser::Command_argumentContext::ID() {
  return getToken(MATLABParser::ID, 0);
}


size_t MATLABParser::Command_argumentContext::getRuleIndex() const {
  return MATLABParser::RuleCommand_argument;
}

void MATLABParser::Command_argumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand_argument(this);
}

void MATLABParser::Command_argumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MATLABListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand_argument(this);
}


antlrcpp::Any MATLABParser::Command_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MATLABVisitor*>(visitor))
    return parserVisitor->visitCommand_argument(this);
  else
    return visitor->visitChildren(this);
}

MATLABParser::Command_argumentContext* MATLABParser::command_argument() {
  Command_argumentContext *_localctx = _tracker.createInstance<Command_argumentContext>(_ctx, getState());
  enterRule(_localctx, 88, MATLABParser::RuleCommand_argument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1034);
    match(MATLABParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MATLABParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 31: return xpr_treeSempred(antlrcpp::downCast<Xpr_treeContext *>(context), predicateIndex);
    case 32: return xpr_tree_Sempred(antlrcpp::downCast<Xpr_tree_Context *>(context), predicateIndex);
    case 39: return xpr_fieldSempred(antlrcpp::downCast<Xpr_fieldContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MATLABParser::xpr_treeSempred(Xpr_treeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);
    case 15: return precpred(_ctx, 17);

  default:
    break;
  }
  return true;
}

bool MATLABParser::xpr_tree_Sempred(Xpr_tree_Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 16: return precpred(_ctx, 16);
    case 17: return precpred(_ctx, 14);
    case 18: return precpred(_ctx, 13);
    case 19: return precpred(_ctx, 12);
    case 20: return precpred(_ctx, 11);
    case 21: return precpred(_ctx, 10);
    case 22: return precpred(_ctx, 9);
    case 23: return precpred(_ctx, 8);
    case 24: return precpred(_ctx, 7);
    case 25: return precpred(_ctx, 6);
    case 26: return precpred(_ctx, 5);
    case 27: return precpred(_ctx, 4);
    case 28: return precpred(_ctx, 3);
    case 29: return precpred(_ctx, 2);
    case 30: return precpred(_ctx, 1);
    case 31: return precpred(_ctx, 17);

  default:
    break;
  }
  return true;
}

bool MATLABParser::xpr_fieldSempred(Xpr_fieldContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 4);
    case 33: return precpred(_ctx, 3);
    case 34: return precpred(_ctx, 2);
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MATLABParser::_decisionToDFA;
atn::PredictionContextCache MATLABParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MATLABParser::_atn;
std::vector<uint16_t> MATLABParser::_serializedATN;

std::vector<std::string> MATLABParser::_ruleNames = {
  "atom_boolean", "atom_empty_array", "atom_empty_cell", "atom_end", "atom_float", 
  "atom_imaginary", "atom_index_all", "atom_integer", "atom_meta", "atom_string", 
  "atom_var", "matlab_file", "def_class", "def_function", "attrib_class_boolean", 
  "attrib_class_meta", "attrib_property_boolean", "attrib_property_access", 
  "attrib_method_boolean", "attrib_method_access", "atom_access", "st_assign", 
  "st_command", "st_if", "st_for", "st_switch", "st_try", "st_while", "function_params", 
  "function_returns", "statement", "xpr_tree", "xpr_tree_", "xpr_array", 
  "xpr_array_", "xpr_cell", "xpr_cell_", "xpr_array_index", "xpr_cell_index", 
  "xpr_field", "xpr_function", "xpr_basefunction", "func_arg", "xpr_handle", 
  "command_argument"
};

std::vector<std::string> MATLABParser::_literalNames = {
  "", "'true'", "'false'", "'methods'", "'Abstract'", "'ConstructOnLoad'", 
  "'HandleCompatible'", "'Hidden'", "'Sealed'", "'AllowedSubclasses'", "'InferiorClasses'", 
  "'AbortSet'", "'Constant'", "'Dependent'", "'GetObservable'", "'NonCopyable'", 
  "'SetObservable'", "'Transient'", "'Access'", "'GetAccess'", "'SetAccess'", 
  "'public'", "'protected'", "'private'", "", "", "", "", "'...'", "'break'", 
  "'case'", "'catch'", "'classdef'", "'continue'", "'else'", "'elseif'", 
  "'end'", "'for'", "'function'", "'get'", "'global'", "'if'", "'otherwise'", 
  "'persistent'", "'properties'", "'return'", "'set'", "'switch'", "'try'", 
  "'while'", "'pi'", "'Static'", "'./'", "'.^'", "'.\\'", "'.*'", "'.''", 
  "'=='", "'>='", "'<='", "'&&'", "'||'", "'~='", "'='", "'&'", "'|'", "':'", 
  "'>'", "'/'", "'<'", "'-'", "'~'", "'+'", "'^'", "'\\'", "'*'", "'''", 
  "'@'", "','", "'.'", "';'", "'{'", "'('", "'['", "'\u003F'", "'}'", "')'", 
  "']'"
};

std::vector<std::string> MATLABParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "NL", "BLOCKCOMMENT", "COMMENT", "WS", "ELLIPSIS", 
  "BREAK", "CASE", "CATCH", "CLASSDEF", "CONTINUE", "ELSE", "ELSEIF", "END", 
  "FOR", "FUNCTION", "GET", "GLOBAL", "IF", "OTHERWISE", "PERSISTENT", "PROPERTIES", 
  "RETURN", "SET", "SWITCH", "TRY", "WHILE", "PI", "STATIC", "ELMENT_WISE_LEFT_DIVIDE", 
  "ELMENT_WISE_POWER", "ELMENT_WISE_RIGHT_DIVIDE", "ELMENT_WISE_TIMES", 
  "ELMENT_WISE_TRANSPOSE", "EQUALS", "GREATER_THAN_OR_EQUAL", "LESS_THAN_OR_EQUAL", 
  "LOGICAL_AND", "LOGICAL_OR", "NOT_EQUAL", "ASSIGN", "BINARY_AND", "BINARY_OR", 
  "COLON", "GREATER_THAN", "LEFT_DIVIDE", "LESS_THAN", "MINUS", "NOT", "PLUS", 
  "POWER", "RIGHT_DIVIDE", "TIMES", "TRANSPOSE", "AT", "COMMA", "DOT", "SEMI_COLON", 
  "LEFT_BRACE", "LEFT_PARENTHESIS", "LEFT_SQUARE_BRACKET", "QUESTION", "RIGHT_BRACE", 
  "RIGHT_PARENTHESIS", "RIGHT_SQUARE_BRACKET", "BASE_FUNC", "ID", "IMAGINARY", 
  "INT", "FLOAT", "STRING", "ANYCHAR"
};

dfa::Vocabulary MATLABParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MATLABParser::_tokenNames;

MATLABParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x60, 0x40f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x75, 0xa, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x7, 0xa, 0x79, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x7c, 
       0xb, 0xa, 0x5, 0xa, 0x7e, 0xa, 0xa, 0x3, 0xa, 0x5, 0xa, 0x81, 0xa, 
       0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x7, 0xd, 0x8a, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x8d, 0xb, 
       0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
       0x94, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x99, 0xa, 
       0xe, 0x7, 0xe, 0x9b, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x9e, 0xb, 0xe, 
       0x3, 0xe, 0x7, 0xe, 0xa1, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xa4, 0xb, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 
       0xab, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xae, 0xb, 0xe, 0x7, 0xe, 0xb0, 
       0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xb3, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xba, 0xa, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xbf, 0xa, 0xe, 0x5, 0xe, 0xc1, 0xa, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xc7, 0xa, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xcc, 0xa, 0xe, 0x5, 
       0xe, 0xce, 0xa, 0xe, 0x7, 0xe, 0xd0, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
       0xd3, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xd7, 0xa, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x7, 0xe, 0xdb, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xde, 
       0xb, 0xe, 0x3, 0xe, 0x7, 0xe, 0xe1, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
       0xe4, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x5, 0xe, 0xeb, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
       0xf0, 0xa, 0xe, 0x5, 0xe, 0xf2, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x5, 0xe, 0xf8, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x5, 0xe, 0xfd, 0xa, 0xe, 0x5, 0xe, 0xff, 0xa, 0xe, 0x7, 0xe, 
       0x101, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x104, 0xb, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x5, 0xe, 0x108, 0xa, 0xe, 0x3, 0xe, 0x7, 0xe, 0x10b, 0xa, 0xe, 
       0xc, 0xe, 0xe, 0xe, 0x10e, 0xb, 0xe, 0x3, 0xe, 0x7, 0xe, 0x111, 0xa, 
       0xe, 0xc, 0xe, 0xe, 0xe, 0x114, 0xb, 0xe, 0x3, 0xe, 0x5, 0xe, 0x117, 
       0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x11d, 
       0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x121, 0xa, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x5, 0xf, 0x125, 0xa, 0xf, 0x3, 0xf, 0x7, 0xf, 0x128, 0xa, 
       0xf, 0xc, 0xf, 0xe, 0xf, 0x12b, 0xb, 0xf, 0x3, 0xf, 0x5, 0xf, 0x12e, 
       0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
       0x140, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
       0x17, 0x146, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x5, 0x17, 0x14c, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x154, 0xa, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
       0x15c, 0xa, 0x17, 0x7, 0x17, 0x15e, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
       0x161, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x5, 0x17, 0x168, 0xa, 0x17, 0x5, 0x17, 0x16a, 0xa, 0x17, 0x3, 
       0x18, 0x3, 0x18, 0x6, 0x18, 0x16e, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 
       0x16f, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x175, 0xa, 0x19, 
       0x3, 0x19, 0x7, 0x19, 0x178, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x17b, 
       0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x180, 0xa, 
       0x19, 0x3, 0x19, 0x7, 0x19, 0x183, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
       0x186, 0xb, 0x19, 0x7, 0x19, 0x188, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
       0x18b, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x18f, 0xa, 0x19, 
       0xc, 0x19, 0xe, 0x19, 0x192, 0xb, 0x19, 0x5, 0x19, 0x194, 0xa, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x19f, 0xa, 0x19, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x1a6, 
       0xa, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x1a9, 0xa, 0x1a, 0xc, 0x1a, 0xe, 
       0x1a, 0x1ac, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x1b5, 0xa, 0x1b, 0xc, 
       0x1b, 0xe, 0x1b, 0x1b8, 0xb, 0x1b, 0x7, 0x1b, 0x1ba, 0xa, 0x1b, 0xc, 
       0x1b, 0xe, 0x1b, 0x1bd, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
       0x1c1, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x1c4, 0xb, 0x1b, 0x5, 0x1b, 
       0x1c6, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 
       0x1c, 0x1cc, 0xa, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x1cf, 0xa, 0x1c, 0xc, 
       0x1c, 0xe, 0x1c, 0x1d2, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
       0x1d6, 0xa, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x1d9, 0xa, 0x1c, 0xc, 0x1c, 
       0xe, 0x1c, 0x1dc, 0xb, 0x1c, 0x7, 0x1c, 0x1de, 0xa, 0x1c, 0xc, 0x1c, 
       0xe, 0x1c, 0x1e1, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x1e8, 0xa, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 
       0x1eb, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x1ee, 0xb, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 
       0x1f6, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x1f9, 0xb, 0x1e, 0x5, 0x1e, 
       0x1fb, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x204, 0xa, 0x1f, 0xc, 0x1f, 
       0xe, 0x1f, 0x207, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x20b, 
       0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x21b, 0xa, 0x20, 0x3, 
       0x20, 0x5, 0x20, 0x21e, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x5, 0x21, 0x235, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x7, 0x21, 0x266, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 
       0x269, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 
       0x22, 0x281, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x7, 0x22, 0x2b2, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x2b5, 
       0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x2ba, 0xa, 
       0x23, 0x3, 0x23, 0x7, 0x23, 0x2bd, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
       0x2c0, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x5, 0x23, 0x2c7, 0xa, 0x23, 0x3, 0x23, 0x7, 0x23, 0x2ca, 0xa, 
       0x23, 0xc, 0x23, 0xe, 0x23, 0x2cd, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x5, 0x23, 0x2d2, 0xa, 0x23, 0x3, 0x23, 0x7, 0x23, 0x2d5, 
       0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2d8, 0xb, 0x23, 0x7, 0x23, 0x2da, 
       0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2dd, 0xb, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x5, 0x23, 0x2e1, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x5, 0x24, 0x2e6, 0xa, 0x24, 0x3, 0x24, 0x7, 0x24, 0x2e9, 0xa, 0x24, 
       0xc, 0x24, 0xe, 0x24, 0x2ec, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x2f3, 0xa, 0x24, 0x3, 0x24, 
       0x7, 0x24, 0x2f6, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x2f9, 0xb, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x2fe, 0xa, 0x24, 0x3, 
       0x24, 0x7, 0x24, 0x301, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x304, 0xb, 
       0x24, 0x7, 0x24, 0x306, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x309, 0xb, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x30d, 0xa, 0x24, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x312, 0xa, 0x25, 0x3, 0x25, 0x5, 
       0x25, 0x315, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x319, 0xa, 
       0x25, 0x7, 0x25, 0x31b, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x31e, 0xb, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 
       0x25, 0x325, 0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x328, 0xa, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x5, 0x25, 0x32c, 0xa, 0x25, 0x7, 0x25, 0x32e, 0xa, 
       0x25, 0xc, 0x25, 0xe, 0x25, 0x331, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x5, 0x25, 0x336, 0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x339, 
       0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x33d, 0xa, 0x25, 0x7, 
       0x25, 0x33f, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x342, 0xb, 0x25, 0x7, 
       0x25, 0x344, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x347, 0xb, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x5, 0x25, 0x34b, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x5, 0x26, 0x350, 0xa, 0x26, 0x3, 0x26, 0x7, 0x26, 0x353, 
       0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x356, 0xb, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x35d, 0xa, 0x26, 
       0x3, 0x26, 0x7, 0x26, 0x360, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x363, 
       0xb, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x368, 0xa, 
       0x26, 0x3, 0x26, 0x7, 0x26, 0x36b, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 
       0x36e, 0xb, 0x26, 0x7, 0x26, 0x370, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 
       0x373, 0xb, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x377, 0xa, 0x26, 
       0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x37b, 0xa, 0x27, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x5, 0x27, 0x380, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x5, 0x27, 0x385, 0xa, 0x27, 0x7, 0x27, 0x387, 0xa, 0x27, 
       0xc, 0x27, 0xe, 0x27, 0x38a, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x392, 0xa, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x397, 0xa, 0x28, 0x7, 
       0x28, 0x399, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x39c, 0xb, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x3d1, 0xa, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 
       0x3df, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x3e2, 0xb, 0x29, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x3e9, 0xa, 
       0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x3ec, 0xb, 0x2a, 0x5, 0x2a, 0x3ee, 0xa, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x3f7, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 
       0x3fa, 0xb, 0x2b, 0x5, 0x2b, 0x3fc, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x403, 0xa, 0x2c, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 
       0x2d, 0x40b, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x2, 0x5, 
       0x40, 0x42, 0x50, 0x2f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
       0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
       0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
       0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
       0x54, 0x56, 0x58, 0x5a, 0x2, 0x12, 0x3, 0x2, 0x3, 0x4, 0x6, 0x2, 
       0x29, 0x29, 0x30, 0x30, 0x35, 0x35, 0x5b, 0x5b, 0x4, 0x2, 0x26, 0x26, 
       0x2f, 0x2f, 0x4, 0x2, 0x29, 0x29, 0x30, 0x30, 0x3, 0x2, 0x6, 0xa, 
       0x3, 0x2, 0xb, 0xc, 0x5, 0x2, 0x6, 0x6, 0x9, 0x9, 0xd, 0x13, 0x3, 
       0x2, 0x14, 0x16, 0x5, 0x2, 0x6, 0x6, 0x9, 0xa, 0x35, 0x35, 0x4, 0x2, 
       0x50, 0x50, 0x52, 0x52, 0x3, 0x2, 0x48, 0x4a, 0x4, 0x2, 0x37, 0x37, 
       0x4b, 0x4b, 0x4, 0x2, 0x36, 0x36, 0x38, 0x39, 0x4, 0x2, 0x46, 0x46, 
       0x4c, 0x4d, 0x4, 0x2, 0x48, 0x48, 0x4a, 0x4a, 0x4, 0x2, 0x3a, 0x3a, 
       0x4e, 0x4e, 0x2, 0x4c8, 0x2, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x5e, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x61, 0x3, 0x2, 0x2, 0x2, 0x8, 0x64, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x66, 0x3, 0x2, 0x2, 0x2, 0xc, 0x68, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6c, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x80, 0x3, 0x2, 0x2, 0x2, 0x14, 0x82, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0x84, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0x8e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x118, 0x3, 0x2, 0x2, 0x2, 0x1e, 
       0x12f, 0x3, 0x2, 0x2, 0x2, 0x20, 0x131, 0x3, 0x2, 0x2, 0x2, 0x22, 
       0x133, 0x3, 0x2, 0x2, 0x2, 0x24, 0x135, 0x3, 0x2, 0x2, 0x2, 0x26, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x28, 0x139, 0x3, 0x2, 0x2, 0x2, 0x2a, 
       0x13f, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x169, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x16b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x32, 
       0x1a0, 0x3, 0x2, 0x2, 0x2, 0x34, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x36, 
       0x1c9, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x3a, 
       0x1f1, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x3e, 
       0x21a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x234, 0x3, 0x2, 0x2, 0x2, 0x42, 
       0x280, 0x3, 0x2, 0x2, 0x2, 0x44, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x46, 
       0x30c, 0x3, 0x2, 0x2, 0x2, 0x48, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x4a, 
       0x376, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x4e, 
       0x38d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x52, 
       0x3e3, 0x3, 0x2, 0x2, 0x2, 0x54, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x56, 
       0x402, 0x3, 0x2, 0x2, 0x2, 0x58, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x5a, 
       0x40c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x9, 0x2, 0x2, 0x2, 0x5d, 
       0x3, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x55, 0x2, 0x2, 0x5f, 0x60, 
       0x7, 0x59, 0x2, 0x2, 0x60, 0x5, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 
       0x53, 0x2, 0x2, 0x62, 0x63, 0x7, 0x57, 0x2, 0x2, 0x63, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x26, 0x2, 0x2, 0x65, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x66, 0x67, 0x7, 0x5e, 0x2, 0x2, 0x67, 0xb, 0x3, 0x2, 0x2, 
       0x2, 0x68, 0x69, 0x7, 0x5c, 0x2, 0x2, 0x69, 0xd, 0x3, 0x2, 0x2, 0x2, 
       0x6a, 0x6b, 0x7, 0x44, 0x2, 0x2, 0x6b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x6d, 0x7, 0x5d, 0x2, 0x2, 0x6d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6e, 
       0x6f, 0x7, 0x56, 0x2, 0x2, 0x6f, 0x81, 0x5, 0x16, 0xc, 0x2, 0x70, 
       0x7d, 0x7, 0x53, 0x2, 0x2, 0x71, 0x72, 0x7, 0x56, 0x2, 0x2, 0x72, 
       0x7a, 0x5, 0x16, 0xc, 0x2, 0x73, 0x75, 0x7, 0x50, 0x2, 0x2, 0x74, 
       0x73, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
       0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0x56, 0x2, 0x2, 0x77, 0x79, 
       0x5, 0x16, 0xc, 0x2, 0x78, 0x74, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7c, 
       0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 
       0x2, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 
       0x2, 0x2, 0x7d, 0x71, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 
       0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x7, 0x57, 0x2, 
       0x2, 0x80, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x70, 0x3, 0x2, 0x2, 0x2, 
       0x81, 0x13, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 0x5f, 0x2, 0x2, 
       0x83, 0x15, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x9, 0x3, 0x2, 0x2, 0x85, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x86, 0x8a, 0x5, 0x1a, 0xe, 0x2, 0x87, 
       0x8a, 0x5, 0x3e, 0x20, 0x2, 0x88, 0x8a, 0x5, 0x1c, 0xf, 0x2, 0x89, 
       0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x88, 
       0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 
       0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0xa2, 0x7, 0x22, 
       0x2, 0x2, 0x8f, 0x9c, 0x7, 0x54, 0x2, 0x2, 0x90, 0x93, 0x5, 0x1e, 
       0x10, 0x2, 0x91, 0x92, 0x7, 0x41, 0x2, 0x2, 0x92, 0x94, 0x5, 0x2, 
       0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 
       0x2, 0x94, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x5, 0x20, 0x11, 
       0x2, 0x96, 0x97, 0x7, 0x41, 0x2, 0x2, 0x97, 0x99, 0x5, 0x12, 0xa, 
       0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 
       0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x90, 0x3, 0x2, 0x2, 0x2, 0x9a, 
       0x95, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 
       0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 
       0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x7, 0x58, 
       0x2, 0x2, 0xa0, 0x8f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 0x2, 
       0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 
       0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 
       0xb1, 0x5, 0x16, 0xc, 0x2, 0xa6, 0xa7, 0x7, 0x47, 0x2, 0x2, 0xa7, 
       0xac, 0x5, 0x16, 0xc, 0x2, 0xa8, 0xa9, 0x7, 0x42, 0x2, 0x2, 0xa9, 
       0xab, 0x5, 0x16, 0xc, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 
       0xae, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 
       0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 
       0x2, 0x2, 0x2, 0xaf, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 
       0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 
       0x2, 0xb2, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 
       0xb4, 0xd6, 0x7, 0x2e, 0x2, 0x2, 0xb5, 0xc0, 0x7, 0x54, 0x2, 0x2, 
       0xb6, 0xb9, 0x5, 0x22, 0x12, 0x2, 0xb7, 0xb8, 0x7, 0x41, 0x2, 0x2, 
       0xb8, 0xba, 0x5, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 
       0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 
       0x5, 0x24, 0x13, 0x2, 0xbc, 0xbd, 0x7, 0x41, 0x2, 0x2, 0xbd, 0xbf, 
       0x5, 0x2a, 0x16, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xb6, 0x3, 
       0x2, 0x2, 0x2, 0xc0, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xd1, 0x3, 0x2, 
       0x2, 0x2, 0xc2, 0xcd, 0x7, 0x50, 0x2, 0x2, 0xc3, 0xc6, 0x5, 0x22, 
       0x12, 0x2, 0xc4, 0xc5, 0x7, 0x41, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x2, 
       0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 
       0x2, 0xc7, 0xce, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcb, 0x5, 0x24, 0x13, 
       0x2, 0xc9, 0xca, 0x7, 0x41, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x2a, 0x16, 
       0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 
       0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xcd, 
       0xc8, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xc2, 
       0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 
       0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd4, 0x3, 0x2, 
       0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x58, 
       0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xb5, 0x3, 0x2, 0x2, 
       0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xdc, 0x3, 0x2, 0x2, 0x2, 
       0xd8, 0xdb, 0x5, 0x16, 0xc, 0x2, 0xd9, 0xdb, 0x5, 0x2c, 0x17, 0x2, 
       0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 
       0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 
       0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 
       0x2, 0x2, 0x2, 0xdf, 0xe1, 0x7, 0x26, 0x2, 0x2, 0xe0, 0xb4, 0x3, 
       0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 
       0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0x112, 0x3, 0x2, 
       0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0x107, 0x7, 0x5, 
       0x2, 0x2, 0xe6, 0xf1, 0x7, 0x54, 0x2, 0x2, 0xe7, 0xea, 0x5, 0x26, 
       0x14, 0x2, 0xe8, 0xe9, 0x7, 0x41, 0x2, 0x2, 0xe9, 0xeb, 0x5, 0x2, 
       0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 
       0x2, 0xeb, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xec, 0xef, 0x5, 0x28, 0x15, 
       0x2, 0xed, 0xee, 0x7, 0x41, 0x2, 0x2, 0xee, 0xf0, 0x5, 0x2a, 0x16, 
       0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 
       0xf0, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xf1, 
       0xec, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x102, 0x3, 0x2, 0x2, 0x2, 0xf3, 
       0xfe, 0x7, 0x50, 0x2, 0x2, 0xf4, 0xf7, 0x5, 0x26, 0x14, 0x2, 0xf5, 
       0xf6, 0x7, 0x41, 0x2, 0x2, 0xf6, 0xf8, 0x5, 0x2, 0x2, 0x2, 0xf7, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xff, 
       0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x5, 0x28, 0x15, 0x2, 0xfa, 0xfb, 
       0x7, 0x41, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x2a, 0x16, 0x2, 0xfc, 0xfa, 
       0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xff, 0x3, 
       0x2, 0x2, 0x2, 0xfe, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xf9, 0x3, 0x2, 
       0x2, 0x2, 0xff, 0x101, 0x3, 0x2, 0x2, 0x2, 0x100, 0xf3, 0x3, 0x2, 
       0x2, 0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 
       0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 0x3, 0x2, 
       0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x58, 
       0x2, 0x2, 0x106, 0x108, 0x3, 0x2, 0x2, 0x2, 0x107, 0xe6, 0x3, 0x2, 
       0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10c, 0x3, 0x2, 
       0x2, 0x2, 0x109, 0x10b, 0x5, 0x1c, 0xf, 0x2, 0x10a, 0x109, 0x3, 0x2, 
       0x2, 0x2, 0x10b, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 
       0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 0x3, 0x2, 
       0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x111, 0x7, 0x26, 
       0x2, 0x2, 0x110, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x111, 0x114, 0x3, 0x2, 
       0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 
       0x2, 0x2, 0x113, 0x116, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 
       0x2, 0x2, 0x115, 0x117, 0x9, 0x4, 0x2, 0x2, 0x116, 0x115, 0x3, 0x2, 
       0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x1b, 0x3, 0x2, 
       0x2, 0x2, 0x118, 0x11c, 0x7, 0x28, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x3c, 
       0x1f, 0x2, 0x11a, 0x11b, 0x7, 0x41, 0x2, 0x2, 0x11b, 0x11d, 0x3, 
       0x2, 0x2, 0x2, 0x11c, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 
       0x2, 0x2, 0x2, 0x11d, 0x120, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x9, 
       0x5, 0x2, 0x2, 0x11f, 0x121, 0x7, 0x51, 0x2, 0x2, 0x120, 0x11e, 0x3, 
       0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 
       0x2, 0x2, 0x2, 0x122, 0x124, 0x5, 0x16, 0xc, 0x2, 0x123, 0x125, 0x5, 
       0x3a, 0x1e, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x129, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 
       0x5, 0x3e, 0x20, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12b, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 
       0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x9, 0x4, 0x2, 0x2, 0x12d, 0x12c, 
       0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x9, 0x6, 0x2, 0x2, 0x130, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x9, 0x7, 0x2, 0x2, 0x132, 0x21, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x9, 0x8, 0x2, 0x2, 0x134, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x9, 0x9, 0x2, 0x2, 0x136, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x9, 0xa, 0x2, 0x2, 0x138, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x14, 0x2, 0x2, 0x13a, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x140, 0x7, 0x17, 0x2, 0x2, 0x13c, 0x140, 
       0x7, 0x18, 0x2, 0x2, 0x13d, 0x140, 0x7, 0x19, 0x2, 0x2, 0x13e, 0x140, 
       0x5, 0x12, 0xa, 0x2, 0x13f, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13c, 
       0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x140, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x141, 0x146, 
       0x5, 0x16, 0xc, 0x2, 0x142, 0x146, 0x5, 0x4c, 0x27, 0x2, 0x143, 0x146, 
       0x5, 0x4e, 0x28, 0x2, 0x144, 0x146, 0x5, 0x50, 0x29, 0x2, 0x145, 
       0x141, 0x3, 0x2, 0x2, 0x2, 0x145, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 
       0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 
       0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x14b, 0x7, 0x41, 0x2, 0x2, 0x148, 
       0x14c, 0x5, 0x6, 0x4, 0x2, 0x149, 0x14c, 0x5, 0x40, 0x21, 0x2, 0x14a, 
       0x14c, 0x5, 0x58, 0x2d, 0x2, 0x14b, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 
       0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x16a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x153, 0x7, 0x55, 0x2, 0x2, 0x14e, 
       0x154, 0x7, 0x49, 0x2, 0x2, 0x14f, 0x154, 0x5, 0x16, 0xc, 0x2, 0x150, 
       0x154, 0x5, 0x4c, 0x27, 0x2, 0x151, 0x154, 0x5, 0x4e, 0x28, 0x2, 
       0x152, 0x154, 0x5, 0x50, 0x29, 0x2, 0x153, 0x14e, 0x3, 0x2, 0x2, 
       0x2, 0x153, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x153, 0x150, 0x3, 0x2, 0x2, 
       0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 
       0x2, 0x154, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x155, 0x15b, 0x7, 0x50, 0x2, 
       0x2, 0x156, 0x15c, 0x7, 0x49, 0x2, 0x2, 0x157, 0x15c, 0x5, 0x16, 
       0xc, 0x2, 0x158, 0x15c, 0x5, 0x4c, 0x27, 0x2, 0x159, 0x15c, 0x5, 
       0x4e, 0x28, 0x2, 0x15a, 0x15c, 0x5, 0x50, 0x29, 0x2, 0x15b, 0x156, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x158, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15a, 
       0x3, 0x2, 0x2, 0x2, 0x15c, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x15e, 0x161, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 0x162, 
       0x3, 0x2, 0x2, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 
       0x7, 0x59, 0x2, 0x2, 0x163, 0x167, 0x7, 0x41, 0x2, 0x2, 0x164, 0x168, 
       0x5, 0x6, 0x4, 0x2, 0x165, 0x168, 0x5, 0x40, 0x21, 0x2, 0x166, 0x168, 
       0x5, 0x58, 0x2d, 0x2, 0x167, 0x164, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 
       0x3, 0x2, 0x2, 0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 
       0x3, 0x2, 0x2, 0x2, 0x169, 0x145, 0x3, 0x2, 0x2, 0x2, 0x169, 0x14d, 
       0x3, 0x2, 0x2, 0x2, 0x16a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16d, 
       0x5, 0x16, 0xc, 0x2, 0x16c, 0x16e, 0x5, 0x5a, 0x2e, 0x2, 0x16d, 0x16c, 
       0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 
       0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x7, 0x2b, 0x2, 0x2, 0x172, 0x174, 
       0x5, 0x40, 0x21, 0x2, 0x173, 0x175, 0x7, 0x50, 0x2, 0x2, 0x174, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x179, 
       0x3, 0x2, 0x2, 0x2, 0x176, 0x178, 0x5, 0x3e, 0x20, 0x2, 0x177, 0x176, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 
       0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x189, 
       0x3, 0x2, 0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 
       0x7, 0x25, 0x2, 0x2, 0x17d, 0x17f, 0x5, 0x40, 0x21, 0x2, 0x17e, 0x180, 
       0x7, 0x50, 0x2, 0x2, 0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x184, 0x3, 0x2, 0x2, 0x2, 0x181, 0x183, 
       0x5, 0x3e, 0x20, 0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x186, 
       0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x187, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18b, 
       0x3, 0x2, 0x2, 0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 
       0x3, 0x2, 0x2, 0x2, 0x18a, 0x193, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 
       0x3, 0x2, 0x2, 0x2, 0x18c, 0x190, 0x7, 0x24, 0x2, 0x2, 0x18d, 0x18f, 
       0x5, 0x3e, 0x20, 0x2, 0x18e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x192, 
       0x3, 0x2, 0x2, 0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x191, 0x194, 0x3, 0x2, 0x2, 0x2, 0x192, 0x190, 
       0x3, 0x2, 0x2, 0x2, 0x193, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 
       0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 
       0x7, 0x26, 0x2, 0x2, 0x196, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 
       0x7, 0x2b, 0x2, 0x2, 0x198, 0x199, 0x5, 0x40, 0x21, 0x2, 0x199, 0x19a, 
       0x9, 0xb, 0x2, 0x2, 0x19a, 0x19b, 0x5, 0x3e, 0x20, 0x2, 0x19b, 0x19c, 
       0x9, 0xb, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x26, 0x2, 0x2, 0x19d, 0x19f, 
       0x3, 0x2, 0x2, 0x2, 0x19e, 0x171, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x19f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 
       0x7, 0x27, 0x2, 0x2, 0x1a1, 0x1a2, 0x5, 0x16, 0xc, 0x2, 0x1a2, 0x1a3, 
       0x7, 0x41, 0x2, 0x2, 0x1a3, 0x1a5, 0x5, 0x40, 0x21, 0x2, 0x1a4, 0x1a6, 
       0x7, 0x50, 0x2, 0x2, 0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 
       0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a9, 
       0x5, 0x3e, 0x20, 0x2, 0x1a8, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ac, 
       0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 
       0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1aa, 
       0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x26, 0x2, 0x2, 0x1ae, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x31, 0x2, 0x2, 0x1b0, 0x1bb, 
       0x5, 0x40, 0x21, 0x2, 0x1b1, 0x1b2, 0x7, 0x20, 0x2, 0x2, 0x1b2, 0x1b6, 
       0x5, 0x40, 0x21, 0x2, 0x1b3, 0x1b5, 0x5, 0x3e, 0x20, 0x2, 0x1b4, 
       0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b6, 
       0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 
       0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
       0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
       0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 
       0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1be, 
       0x1c2, 0x7, 0x2c, 0x2, 0x2, 0x1bf, 0x1c1, 0x5, 0x3e, 0x20, 0x2, 0x1c0, 
       0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
       0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 
       0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c5, 
       0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 
       0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0x26, 0x2, 0x2, 0x1c8, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1cb, 0x7, 0x32, 0x2, 0x2, 0x1ca, 
       0x1cc, 0x7, 0x50, 0x2, 0x2, 0x1cb, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cb, 
       0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
       0x1cf, 0x5, 0x3e, 0x20, 0x2, 0x1ce, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
       0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
       0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1d2, 
       0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d5, 0x7, 0x21, 0x2, 0x2, 0x1d4, 
       0x1d6, 0x5, 0x16, 0xc, 0x2, 0x1d5, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d5, 
       0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
       0x1d9, 0x5, 0x3e, 0x20, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
       0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 
       0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
       0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1de, 
       0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 
       0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e1, 
       0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x26, 0x2, 0x2, 0x1e3, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 0x33, 0x2, 0x2, 0x1e5, 
       0x1e7, 0x5, 0x40, 0x21, 0x2, 0x1e6, 0x1e8, 0x7, 0x50, 0x2, 0x2, 0x1e7, 
       0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e8, 
       0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1eb, 0x5, 0x3e, 0x20, 0x2, 0x1ea, 
       0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
       0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
       0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
       0x1f0, 0x7, 0x26, 0x2, 0x2, 0x1f0, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1f1, 
       0x1fa, 0x7, 0x54, 0x2, 0x2, 0x1f2, 0x1f7, 0x5, 0x16, 0xc, 0x2, 0x1f3, 
       0x1f4, 0x7, 0x50, 0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x16, 0xc, 0x2, 0x1f5, 
       0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f7, 
       0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 
       0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
       0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
       0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x58, 0x2, 0x2, 0x1fd, 
       0x3b, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x20b, 0x5, 0x16, 0xc, 0x2, 0x1ff, 
       0x200, 0x7, 0x55, 0x2, 0x2, 0x200, 0x205, 0x5, 0x16, 0xc, 0x2, 0x201, 
       0x202, 0x7, 0x50, 0x2, 0x2, 0x202, 0x204, 0x5, 0x16, 0xc, 0x2, 0x203, 
       0x201, 0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 
       0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 
       0x208, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 
       0x209, 0x7, 0x59, 0x2, 0x2, 0x209, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20a, 
       0x1fe, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x3d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x21b, 0x5, 0x2c, 0x17, 0x2, 0x20d, 
       0x21b, 0x5, 0x2e, 0x18, 0x2, 0x20e, 0x21b, 0x5, 0x30, 0x19, 0x2, 
       0x20f, 0x21b, 0x5, 0x32, 0x1a, 0x2, 0x210, 0x21b, 0x5, 0x34, 0x1b, 
       0x2, 0x211, 0x21b, 0x5, 0x36, 0x1c, 0x2, 0x212, 0x21b, 0x5, 0x38, 
       0x1d, 0x2, 0x213, 0x21b, 0x5, 0x52, 0x2a, 0x2, 0x214, 0x21b, 0x5, 
       0x50, 0x29, 0x2, 0x215, 0x21b, 0x5, 0x40, 0x21, 0x2, 0x216, 0x21b, 
       0x5, 0x16, 0xc, 0x2, 0x217, 0x21b, 0x7, 0x1f, 0x2, 0x2, 0x218, 0x21b, 
       0x7, 0x23, 0x2, 0x2, 0x219, 0x21b, 0x7, 0x2f, 0x2, 0x2, 0x21a, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x20e, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x210, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x211, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x213, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x215, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x216, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x217, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 
       0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 0x9, 0xb, 0x2, 0x2, 0x21d, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x8, 0x21, 0x1, 0x2, 0x220, 0x235, 
       0x5, 0x54, 0x2b, 0x2, 0x221, 0x235, 0x5, 0x2, 0x2, 0x2, 0x222, 0x235, 
       0x5, 0x4, 0x3, 0x2, 0x223, 0x235, 0x5, 0xa, 0x6, 0x2, 0x224, 0x235, 
       0x5, 0xc, 0x7, 0x2, 0x225, 0x235, 0x5, 0x10, 0x9, 0x2, 0x226, 0x235, 
       0x5, 0x14, 0xb, 0x2, 0x227, 0x235, 0x5, 0x16, 0xc, 0x2, 0x228, 0x235, 
       0x5, 0x44, 0x23, 0x2, 0x229, 0x235, 0x5, 0x4c, 0x27, 0x2, 0x22a, 
       0x235, 0x5, 0x48, 0x25, 0x2, 0x22b, 0x235, 0x5, 0x4e, 0x28, 0x2, 
       0x22c, 0x235, 0x5, 0x50, 0x29, 0x2, 0x22d, 0x235, 0x5, 0x52, 0x2a, 
       0x2, 0x22e, 0x22f, 0x7, 0x54, 0x2, 0x2, 0x22f, 0x230, 0x5, 0x40, 
       0x21, 0x2, 0x230, 0x231, 0x7, 0x58, 0x2, 0x2, 0x231, 0x235, 0x3, 
       0x2, 0x2, 0x2, 0x232, 0x233, 0x9, 0xc, 0x2, 0x2, 0x233, 0x235, 0x5, 
       0x40, 0x21, 0x11, 0x234, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x234, 0x221, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x222, 0x3, 0x2, 0x2, 0x2, 0x234, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x224, 0x3, 0x2, 0x2, 0x2, 0x234, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x226, 0x3, 0x2, 0x2, 0x2, 0x234, 0x227, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x228, 0x3, 0x2, 0x2, 0x2, 0x234, 0x229, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x234, 0x22b, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x234, 0x22d, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x234, 0x232, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x267, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 
       0xc, 0x12, 0x2, 0x2, 0x237, 0x238, 0x9, 0xd, 0x2, 0x2, 0x238, 0x266, 
       0x5, 0x40, 0x21, 0x13, 0x239, 0x23a, 0xc, 0x10, 0x2, 0x2, 0x23a, 
       0x23b, 0x9, 0xe, 0x2, 0x2, 0x23b, 0x266, 0x5, 0x40, 0x21, 0x11, 0x23c, 
       0x23d, 0xc, 0xf, 0x2, 0x2, 0x23d, 0x23e, 0x9, 0xf, 0x2, 0x2, 0x23e, 
       0x266, 0x5, 0x40, 0x21, 0x10, 0x23f, 0x240, 0xc, 0xe, 0x2, 0x2, 0x240, 
       0x241, 0x9, 0x10, 0x2, 0x2, 0x241, 0x266, 0x5, 0x40, 0x21, 0xf, 0x242, 
       0x243, 0xc, 0xd, 0x2, 0x2, 0x243, 0x244, 0x7, 0x44, 0x2, 0x2, 0x244, 
       0x266, 0x5, 0x40, 0x21, 0xe, 0x245, 0x246, 0xc, 0xc, 0x2, 0x2, 0x246, 
       0x247, 0x7, 0x47, 0x2, 0x2, 0x247, 0x266, 0x5, 0x40, 0x21, 0xd, 0x248, 
       0x249, 0xc, 0xb, 0x2, 0x2, 0x249, 0x24a, 0x7, 0x3d, 0x2, 0x2, 0x24a, 
       0x266, 0x5, 0x40, 0x21, 0xc, 0x24b, 0x24c, 0xc, 0xa, 0x2, 0x2, 0x24c, 
       0x24d, 0x7, 0x45, 0x2, 0x2, 0x24d, 0x266, 0x5, 0x40, 0x21, 0xb, 0x24e, 
       0x24f, 0xc, 0x9, 0x2, 0x2, 0x24f, 0x250, 0x7, 0x3c, 0x2, 0x2, 0x250, 
       0x266, 0x5, 0x40, 0x21, 0xa, 0x251, 0x252, 0xc, 0x8, 0x2, 0x2, 0x252, 
       0x253, 0x7, 0x3b, 0x2, 0x2, 0x253, 0x266, 0x5, 0x40, 0x21, 0x9, 0x254, 
       0x255, 0xc, 0x7, 0x2, 0x2, 0x255, 0x256, 0x7, 0x40, 0x2, 0x2, 0x256, 
       0x266, 0x5, 0x40, 0x21, 0x8, 0x257, 0x258, 0xc, 0x6, 0x2, 0x2, 0x258, 
       0x259, 0x7, 0x42, 0x2, 0x2, 0x259, 0x266, 0x5, 0x40, 0x21, 0x7, 0x25a, 
       0x25b, 0xc, 0x5, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0x43, 0x2, 0x2, 0x25c, 
       0x266, 0x5, 0x40, 0x21, 0x6, 0x25d, 0x25e, 0xc, 0x4, 0x2, 0x2, 0x25e, 
       0x25f, 0x7, 0x3e, 0x2, 0x2, 0x25f, 0x266, 0x5, 0x40, 0x21, 0x5, 0x260, 
       0x261, 0xc, 0x3, 0x2, 0x2, 0x261, 0x262, 0x7, 0x3f, 0x2, 0x2, 0x262, 
       0x266, 0x5, 0x40, 0x21, 0x4, 0x263, 0x264, 0xc, 0x13, 0x2, 0x2, 0x264, 
       0x266, 0x9, 0x11, 0x2, 0x2, 0x265, 0x236, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x239, 0x3, 0x2, 0x2, 0x2, 0x265, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x23f, 0x3, 0x2, 0x2, 0x2, 0x265, 0x242, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x245, 0x3, 0x2, 0x2, 0x2, 0x265, 0x248, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x24b, 0x3, 0x2, 0x2, 0x2, 0x265, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x251, 0x3, 0x2, 0x2, 0x2, 0x265, 0x254, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x257, 0x3, 0x2, 0x2, 0x2, 0x265, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x25d, 0x3, 0x2, 0x2, 0x2, 0x265, 0x260, 0x3, 0x2, 0x2, 0x2, 0x265, 
       0x263, 0x3, 0x2, 0x2, 0x2, 0x266, 0x269, 0x3, 0x2, 0x2, 0x2, 0x267, 
       0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 
       0x41, 0x3, 0x2, 0x2, 0x2, 0x269, 0x267, 0x3, 0x2, 0x2, 0x2, 0x26a, 
       0x26b, 0x8, 0x22, 0x1, 0x2, 0x26b, 0x281, 0x5, 0x54, 0x2b, 0x2, 0x26c, 
       0x281, 0x5, 0x2, 0x2, 0x2, 0x26d, 0x281, 0x5, 0x4, 0x3, 0x2, 0x26e, 
       0x281, 0x5, 0x8, 0x5, 0x2, 0x26f, 0x281, 0x5, 0xa, 0x6, 0x2, 0x270, 
       0x281, 0x5, 0xc, 0x7, 0x2, 0x271, 0x281, 0x5, 0x10, 0x9, 0x2, 0x272, 
       0x281, 0x5, 0x14, 0xb, 0x2, 0x273, 0x281, 0x5, 0x16, 0xc, 0x2, 0x274, 
       0x281, 0x5, 0x46, 0x24, 0x2, 0x275, 0x281, 0x5, 0x4c, 0x27, 0x2, 
       0x276, 0x281, 0x5, 0x4a, 0x26, 0x2, 0x277, 0x281, 0x5, 0x4e, 0x28, 
       0x2, 0x278, 0x281, 0x5, 0x50, 0x29, 0x2, 0x279, 0x281, 0x5, 0x52, 
       0x2a, 0x2, 0x27a, 0x27b, 0x7, 0x54, 0x2, 0x2, 0x27b, 0x27c, 0x5, 
       0x42, 0x22, 0x2, 0x27c, 0x27d, 0x7, 0x58, 0x2, 0x2, 0x27d, 0x281, 
       0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x9, 0xc, 0x2, 0x2, 0x27f, 0x281, 
       0x5, 0x42, 0x22, 0x11, 0x280, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x280, 0x26c, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x280, 0x26e, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x280, 0x270, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x271, 0x3, 0x2, 0x2, 0x2, 0x280, 0x272, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x273, 0x3, 0x2, 0x2, 0x2, 0x280, 0x274, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x275, 0x3, 0x2, 0x2, 0x2, 0x280, 0x276, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x277, 0x3, 0x2, 0x2, 0x2, 0x280, 0x278, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x279, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27a, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x281, 0x2b3, 
       0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0xc, 0x12, 0x2, 0x2, 0x283, 0x284, 
       0x9, 0xd, 0x2, 0x2, 0x284, 0x2b2, 0x5, 0x42, 0x22, 0x13, 0x285, 0x286, 
       0xc, 0x10, 0x2, 0x2, 0x286, 0x287, 0x9, 0xe, 0x2, 0x2, 0x287, 0x2b2, 
       0x5, 0x42, 0x22, 0x11, 0x288, 0x289, 0xc, 0xf, 0x2, 0x2, 0x289, 0x28a, 
       0x9, 0xf, 0x2, 0x2, 0x28a, 0x2b2, 0x5, 0x42, 0x22, 0x10, 0x28b, 0x28c, 
       0xc, 0xe, 0x2, 0x2, 0x28c, 0x28d, 0x9, 0x10, 0x2, 0x2, 0x28d, 0x2b2, 
       0x5, 0x42, 0x22, 0xf, 0x28e, 0x28f, 0xc, 0xd, 0x2, 0x2, 0x28f, 0x290, 
       0x7, 0x44, 0x2, 0x2, 0x290, 0x2b2, 0x5, 0x42, 0x22, 0xe, 0x291, 0x292, 
       0xc, 0xc, 0x2, 0x2, 0x292, 0x293, 0x7, 0x47, 0x2, 0x2, 0x293, 0x2b2, 
       0x5, 0x42, 0x22, 0xd, 0x294, 0x295, 0xc, 0xb, 0x2, 0x2, 0x295, 0x296, 
       0x7, 0x3d, 0x2, 0x2, 0x296, 0x2b2, 0x5, 0x42, 0x22, 0xc, 0x297, 0x298, 
       0xc, 0xa, 0x2, 0x2, 0x298, 0x299, 0x7, 0x45, 0x2, 0x2, 0x299, 0x2b2, 
       0x5, 0x42, 0x22, 0xb, 0x29a, 0x29b, 0xc, 0x9, 0x2, 0x2, 0x29b, 0x29c, 
       0x7, 0x3c, 0x2, 0x2, 0x29c, 0x2b2, 0x5, 0x42, 0x22, 0xa, 0x29d, 0x29e, 
       0xc, 0x8, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x3b, 0x2, 0x2, 0x29f, 0x2b2, 
       0x5, 0x42, 0x22, 0x9, 0x2a0, 0x2a1, 0xc, 0x7, 0x2, 0x2, 0x2a1, 0x2a2, 
       0x7, 0x40, 0x2, 0x2, 0x2a2, 0x2b2, 0x5, 0x42, 0x22, 0x8, 0x2a3, 0x2a4, 
       0xc, 0x6, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x42, 0x2, 0x2, 0x2a5, 0x2b2, 
       0x5, 0x42, 0x22, 0x7, 0x2a6, 0x2a7, 0xc, 0x5, 0x2, 0x2, 0x2a7, 0x2a8, 
       0x7, 0x43, 0x2, 0x2, 0x2a8, 0x2b2, 0x5, 0x42, 0x22, 0x6, 0x2a9, 0x2aa, 
       0xc, 0x4, 0x2, 0x2, 0x2aa, 0x2ab, 0x7, 0x3e, 0x2, 0x2, 0x2ab, 0x2b2, 
       0x5, 0x42, 0x22, 0x5, 0x2ac, 0x2ad, 0xc, 0x3, 0x2, 0x2, 0x2ad, 0x2ae, 
       0x7, 0x3f, 0x2, 0x2, 0x2ae, 0x2b2, 0x5, 0x42, 0x22, 0x4, 0x2af, 0x2b0, 
       0xc, 0x13, 0x2, 0x2, 0x2b0, 0x2b2, 0x9, 0x11, 0x2, 0x2, 0x2b1, 0x282, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x285, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x288, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x28e, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x291, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x294, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x297, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x29a, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2a0, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2a6, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2ac, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b5, 
       0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 
       0x3, 0x2, 0x2, 0x2, 0x2b4, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b3, 
       0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x55, 0x2, 0x2, 0x2b7, 0x2be, 
       0x5, 0x40, 0x21, 0x2, 0x2b8, 0x2ba, 0x7, 0x50, 0x2, 0x2, 0x2b9, 0x2b8, 
       0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 
       0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bd, 0x5, 0x40, 0x21, 0x2, 0x2bc, 0x2b9, 
       0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bc, 
       0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 
       0x7, 0x59, 0x2, 0x2, 0x2c2, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 
       0x7, 0x55, 0x2, 0x2, 0x2c4, 0x2cb, 0x5, 0x40, 0x21, 0x2, 0x2c5, 0x2c7, 
       0x7, 0x50, 0x2, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2ca, 
       0x5, 0x40, 0x21, 0x2, 0x2c9, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cd, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 
       0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cb, 
       0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x7, 0x52, 0x2, 0x2, 0x2cf, 0x2d6, 
       0x5, 0x40, 0x21, 0x2, 0x2d0, 0x2d2, 0x7, 0x50, 0x2, 0x2, 0x2d1, 0x2d0, 
       0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 
       0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d5, 0x5, 0x40, 0x21, 0x2, 0x2d4, 0x2d1, 
       0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d4, 
       0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2da, 
       0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2ce, 
       0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d9, 
       0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2de, 
       0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 
       0x7, 0x59, 0x2, 0x2, 0x2df, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2b6, 
       0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e3, 0x7, 0x55, 0x2, 0x2, 0x2e3, 0x2ea, 
       0x5, 0x42, 0x22, 0x2, 0x2e4, 0x2e6, 0x7, 0x50, 0x2, 0x2, 0x2e5, 0x2e4, 
       0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 
       0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e9, 0x5, 0x42, 0x22, 0x2, 0x2e8, 0x2e5, 
       0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e8, 
       0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ed, 
       0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 
       0x7, 0x59, 0x2, 0x2, 0x2ee, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 
       0x7, 0x55, 0x2, 0x2, 0x2f0, 0x2f7, 0x5, 0x42, 0x22, 0x2, 0x2f1, 0x2f3, 
       0x7, 0x50, 0x2, 0x2, 0x2f2, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 
       0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f6, 
       0x5, 0x42, 0x22, 0x2, 0x2f5, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f9, 
       0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 
       0x3, 0x2, 0x2, 0x2, 0x2f8, 0x307, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f7, 
       0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x7, 0x52, 0x2, 0x2, 0x2fb, 0x302, 
       0x5, 0x42, 0x22, 0x2, 0x2fc, 0x2fe, 0x7, 0x50, 0x2, 0x2, 0x2fd, 0x2fc, 
       0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 
       0x3, 0x2, 0x2, 0x2, 0x2ff, 0x301, 0x5, 0x42, 0x22, 0x2, 0x300, 0x2fd, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x304, 0x3, 0x2, 0x2, 0x2, 0x302, 0x300, 
       0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 0x2, 0x2, 0x303, 0x306, 
       0x3, 0x2, 0x2, 0x2, 0x304, 0x302, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2fa, 
       0x3, 0x2, 0x2, 0x2, 0x306, 0x309, 0x3, 0x2, 0x2, 0x2, 0x307, 0x305, 
       0x3, 0x2, 0x2, 0x2, 0x307, 0x308, 0x3, 0x2, 0x2, 0x2, 0x308, 0x30a, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x307, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30b, 
       0x7, 0x59, 0x2, 0x2, 0x30b, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x2e2, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x30e, 0x311, 0x7, 0x53, 0x2, 0x2, 0x30f, 0x312, 
       0x5, 0x40, 0x21, 0x2, 0x310, 0x312, 0x5, 0x58, 0x2d, 0x2, 0x311, 
       0x30f, 0x3, 0x2, 0x2, 0x2, 0x311, 0x310, 0x3, 0x2, 0x2, 0x2, 0x312, 
       0x31c, 0x3, 0x2, 0x2, 0x2, 0x313, 0x315, 0x7, 0x50, 0x2, 0x2, 0x314, 
       0x313, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 
       0x318, 0x3, 0x2, 0x2, 0x2, 0x316, 0x319, 0x5, 0x40, 0x21, 0x2, 0x317, 
       0x319, 0x5, 0x58, 0x2d, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 
       0x317, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31a, 
       0x314, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31c, 
       0x31a, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31d, 
       0x31f, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31f, 
       0x320, 0x7, 0x57, 0x2, 0x2, 0x320, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x321, 
       0x324, 0x7, 0x53, 0x2, 0x2, 0x322, 0x325, 0x5, 0x40, 0x21, 0x2, 0x323, 
       0x325, 0x5, 0x58, 0x2d, 0x2, 0x324, 0x322, 0x3, 0x2, 0x2, 0x2, 0x324, 
       0x323, 0x3, 0x2, 0x2, 0x2, 0x325, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x326, 
       0x328, 0x7, 0x50, 0x2, 0x2, 0x327, 0x326, 0x3, 0x2, 0x2, 0x2, 0x327, 
       0x328, 0x3, 0x2, 0x2, 0x2, 0x328, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x329, 
       0x32c, 0x5, 0x40, 0x21, 0x2, 0x32a, 0x32c, 0x5, 0x58, 0x2d, 0x2, 
       0x32b, 0x329, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32a, 0x3, 0x2, 0x2, 0x2, 
       0x32c, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x327, 0x3, 0x2, 0x2, 0x2, 
       0x32e, 0x331, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 
       0x32f, 0x330, 0x3, 0x2, 0x2, 0x2, 0x330, 0x345, 0x3, 0x2, 0x2, 0x2, 
       0x331, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x332, 0x335, 0x7, 0x52, 0x2, 0x2, 
       0x333, 0x336, 0x5, 0x40, 0x21, 0x2, 0x334, 0x336, 0x5, 0x58, 0x2d, 
       0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x335, 0x334, 0x3, 0x2, 0x2, 
       0x2, 0x336, 0x340, 0x3, 0x2, 0x2, 0x2, 0x337, 0x339, 0x7, 0x50, 0x2, 
       0x2, 0x338, 0x337, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 0x3, 0x2, 0x2, 
       0x2, 0x339, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33d, 0x5, 0x40, 0x21, 
       0x2, 0x33b, 0x33d, 0x5, 0x58, 0x2d, 0x2, 0x33c, 0x33a, 0x3, 0x2, 
       0x2, 0x2, 0x33c, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33f, 0x3, 0x2, 
       0x2, 0x2, 0x33e, 0x338, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x342, 0x3, 0x2, 
       0x2, 0x2, 0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 
       0x2, 0x2, 0x341, 0x344, 0x3, 0x2, 0x2, 0x2, 0x342, 0x340, 0x3, 0x2, 
       0x2, 0x2, 0x343, 0x332, 0x3, 0x2, 0x2, 0x2, 0x344, 0x347, 0x3, 0x2, 
       0x2, 0x2, 0x345, 0x343, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0x3, 0x2, 
       0x2, 0x2, 0x346, 0x348, 0x3, 0x2, 0x2, 0x2, 0x347, 0x345, 0x3, 0x2, 
       0x2, 0x2, 0x348, 0x349, 0x7, 0x57, 0x2, 0x2, 0x349, 0x34b, 0x3, 0x2, 
       0x2, 0x2, 0x34a, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x321, 0x3, 0x2, 
       0x2, 0x2, 0x34b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 0x7, 0x53, 
       0x2, 0x2, 0x34d, 0x354, 0x5, 0x42, 0x22, 0x2, 0x34e, 0x350, 0x7, 
       0x50, 0x2, 0x2, 0x34f, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 0x3, 
       0x2, 0x2, 0x2, 0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 0x353, 0x5, 
       0x42, 0x22, 0x2, 0x352, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x353, 0x356, 
       0x3, 0x2, 0x2, 0x2, 0x354, 0x352, 0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x355, 0x357, 0x3, 0x2, 0x2, 0x2, 0x356, 0x354, 
       0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x7, 0x57, 0x2, 0x2, 0x358, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x359, 0x35a, 0x7, 0x53, 0x2, 0x2, 0x35a, 0x361, 
       0x5, 0x42, 0x22, 0x2, 0x35b, 0x35d, 0x7, 0x50, 0x2, 0x2, 0x35c, 0x35b, 
       0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 
       0x3, 0x2, 0x2, 0x2, 0x35e, 0x360, 0x5, 0x42, 0x22, 0x2, 0x35f, 0x35c, 
       0x3, 0x2, 0x2, 0x2, 0x360, 0x363, 0x3, 0x2, 0x2, 0x2, 0x361, 0x35f, 
       0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 0x2, 0x2, 0x362, 0x371, 
       0x3, 0x2, 0x2, 0x2, 0x363, 0x361, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 
       0x7, 0x52, 0x2, 0x2, 0x365, 0x36c, 0x5, 0x42, 0x22, 0x2, 0x366, 0x368, 
       0x7, 0x50, 0x2, 0x2, 0x367, 0x366, 0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 
       0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36b, 
       0x5, 0x42, 0x22, 0x2, 0x36a, 0x367, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36e, 
       0x3, 0x2, 0x2, 0x2, 0x36c, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x36d, 0x370, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36c, 
       0x3, 0x2, 0x2, 0x2, 0x36f, 0x364, 0x3, 0x2, 0x2, 0x2, 0x370, 0x373, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x371, 0x372, 
       0x3, 0x2, 0x2, 0x2, 0x372, 0x374, 0x3, 0x2, 0x2, 0x2, 0x373, 0x371, 
       0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0x7, 0x57, 0x2, 0x2, 0x375, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x376, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x376, 0x359, 
       0x3, 0x2, 0x2, 0x2, 0x377, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x378, 0x37b, 
       0x5, 0x4e, 0x28, 0x2, 0x379, 0x37b, 0x5, 0x16, 0xc, 0x2, 0x37a, 0x378, 
       0x3, 0x2, 0x2, 0x2, 0x37a, 0x379, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x37f, 0x7, 0x54, 0x2, 0x2, 0x37d, 0x380, 
       0x5, 0xe, 0x8, 0x2, 0x37e, 0x380, 0x5, 0x42, 0x22, 0x2, 0x37f, 0x37d, 
       0x3, 0x2, 0x2, 0x2, 0x37f, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x380, 0x388, 
       0x3, 0x2, 0x2, 0x2, 0x381, 0x384, 0x7, 0x50, 0x2, 0x2, 0x382, 0x385, 
       0x5, 0xe, 0x8, 0x2, 0x383, 0x385, 0x5, 0x42, 0x22, 0x2, 0x384, 0x382, 
       0x3, 0x2, 0x2, 0x2, 0x384, 0x383, 0x3, 0x2, 0x2, 0x2, 0x385, 0x387, 
       0x3, 0x2, 0x2, 0x2, 0x386, 0x381, 0x3, 0x2, 0x2, 0x2, 0x387, 0x38a, 
       0x3, 0x2, 0x2, 0x2, 0x388, 0x386, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 
       0x3, 0x2, 0x2, 0x2, 0x389, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x388, 
       0x3, 0x2, 0x2, 0x2, 0x38b, 0x38c, 0x7, 0x58, 0x2, 0x2, 0x38c, 0x4d, 
       0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 0x5, 0x16, 0xc, 0x2, 0x38e, 0x391, 
       0x7, 0x53, 0x2, 0x2, 0x38f, 0x392, 0x5, 0xe, 0x8, 0x2, 0x390, 0x392, 
       0x5, 0x42, 0x22, 0x2, 0x391, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x391, 0x390, 
       0x3, 0x2, 0x2, 0x2, 0x392, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x393, 0x396, 
       0x7, 0x50, 0x2, 0x2, 0x394, 0x397, 0x5, 0xe, 0x8, 0x2, 0x395, 0x397, 
       0x5, 0x42, 0x22, 0x2, 0x396, 0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x395, 
       0x3, 0x2, 0x2, 0x2, 0x397, 0x399, 0x3, 0x2, 0x2, 0x2, 0x398, 0x393, 
       0x3, 0x2, 0x2, 0x2, 0x399, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39d, 
       0x3, 0x2, 0x2, 0x2, 0x39c, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 
       0x7, 0x57, 0x2, 0x2, 0x39e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 
       0x8, 0x29, 0x1, 0x2, 0x3a0, 0x3a1, 0x5, 0x16, 0xc, 0x2, 0x3a1, 0x3a2, 
       0x7, 0x51, 0x2, 0x2, 0x3a2, 0x3a3, 0x5, 0x16, 0xc, 0x2, 0x3a3, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x5, 0x16, 0xc, 0x2, 0x3a5, 0x3a6, 
       0x7, 0x51, 0x2, 0x2, 0x3a6, 0x3a7, 0x5, 0x4c, 0x27, 0x2, 0x3a7, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0x5, 0x16, 0xc, 0x2, 0x3a9, 0x3aa, 
       0x7, 0x51, 0x2, 0x2, 0x3aa, 0x3ab, 0x5, 0x4e, 0x28, 0x2, 0x3ab, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0x16, 0xc, 0x2, 0x3ad, 0x3ae, 
       0x7, 0x51, 0x2, 0x2, 0x3ae, 0x3af, 0x5, 0x52, 0x2a, 0x2, 0x3af, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b1, 0x5, 0x4c, 0x27, 0x2, 0x3b1, 0x3b2, 
       0x7, 0x51, 0x2, 0x2, 0x3b2, 0x3b3, 0x5, 0x16, 0xc, 0x2, 0x3b3, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b5, 0x5, 0x4c, 0x27, 0x2, 0x3b5, 0x3b6, 
       0x7, 0x51, 0x2, 0x2, 0x3b6, 0x3b7, 0x5, 0x4c, 0x27, 0x2, 0x3b7, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x5, 0x4c, 0x27, 0x2, 0x3b9, 0x3ba, 
       0x7, 0x51, 0x2, 0x2, 0x3ba, 0x3bb, 0x5, 0x4e, 0x28, 0x2, 0x3bb, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x5, 0x4c, 0x27, 0x2, 0x3bd, 0x3be, 
       0x7, 0x51, 0x2, 0x2, 0x3be, 0x3bf, 0x5, 0x52, 0x2a, 0x2, 0x3bf, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 0x5, 0x4e, 0x28, 0x2, 0x3c1, 0x3c2, 
       0x7, 0x51, 0x2, 0x2, 0x3c2, 0x3c3, 0x5, 0x16, 0xc, 0x2, 0x3c3, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x5, 0x4e, 0x28, 0x2, 0x3c5, 0x3c6, 
       0x7, 0x51, 0x2, 0x2, 0x3c6, 0x3c7, 0x5, 0x4c, 0x27, 0x2, 0x3c7, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x5, 0x4e, 0x28, 0x2, 0x3c9, 0x3ca, 
       0x7, 0x51, 0x2, 0x2, 0x3ca, 0x3cb, 0x5, 0x4e, 0x28, 0x2, 0x3cb, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x5, 0x4e, 0x28, 0x2, 0x3cd, 0x3ce, 
       0x7, 0x51, 0x2, 0x2, 0x3ce, 0x3cf, 0x5, 0x52, 0x2a, 0x2, 0x3cf, 0x3d1, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3a4, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3ac, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3b4, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3bc, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3c4, 
       0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3cc, 
       0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 
       0xc, 0x6, 0x2, 0x2, 0x3d3, 0x3d4, 0x7, 0x51, 0x2, 0x2, 0x3d4, 0x3df, 
       0x5, 0x16, 0xc, 0x2, 0x3d5, 0x3d6, 0xc, 0x5, 0x2, 0x2, 0x3d6, 0x3d7, 
       0x7, 0x51, 0x2, 0x2, 0x3d7, 0x3df, 0x5, 0x4c, 0x27, 0x2, 0x3d8, 0x3d9, 
       0xc, 0x4, 0x2, 0x2, 0x3d9, 0x3da, 0x7, 0x51, 0x2, 0x2, 0x3da, 0x3df, 
       0x5, 0x4e, 0x28, 0x2, 0x3db, 0x3dc, 0xc, 0x3, 0x2, 0x2, 0x3dc, 0x3dd, 
       0x7, 0x51, 0x2, 0x2, 0x3dd, 0x3df, 0x5, 0x52, 0x2a, 0x2, 0x3de, 0x3d2, 
       0x3, 0x2, 0x2, 0x2, 0x3de, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3d8, 
       0x3, 0x2, 0x2, 0x2, 0x3de, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e2, 
       0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 
       0x3, 0x2, 0x2, 0x2, 0x3e1, 0x51, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e0, 
       0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0x5, 0x16, 0xc, 0x2, 0x3e4, 0x3ed, 
       0x7, 0x54, 0x2, 0x2, 0x3e5, 0x3ea, 0x5, 0x56, 0x2c, 0x2, 0x3e6, 0x3e7, 
       0x7, 0x50, 0x2, 0x2, 0x3e7, 0x3e9, 0x5, 0x56, 0x2c, 0x2, 0x3e8, 0x3e6, 
       0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e8, 
       0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ee, 
       0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3e5, 
       0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 
       0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x7, 0x58, 0x2, 0x2, 0x3f0, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0x7, 0x5a, 0x2, 0x2, 0x3f2, 0x3fb, 
       0x7, 0x54, 0x2, 0x2, 0x3f3, 0x3f8, 0x5, 0x56, 0x2c, 0x2, 0x3f4, 0x3f5, 
       0x7, 0x50, 0x2, 0x2, 0x3f5, 0x3f7, 0x5, 0x56, 0x2c, 0x2, 0x3f6, 0x3f4, 
       0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f6, 
       0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fc, 
       0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3f3, 
       0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 
       0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x7, 0x58, 0x2, 0x2, 0x3fe, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x3ff, 0x403, 0x5, 0x40, 0x21, 0x2, 0x400, 0x403, 
       0x5, 0x58, 0x2d, 0x2, 0x401, 0x403, 0x5, 0x6, 0x4, 0x2, 0x402, 0x3ff, 
       0x3, 0x2, 0x2, 0x2, 0x402, 0x400, 0x3, 0x2, 0x2, 0x2, 0x402, 0x401, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x57, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 
       0x7, 0x4f, 0x2, 0x2, 0x405, 0x40b, 0x5, 0x16, 0xc, 0x2, 0x406, 0x407, 
       0x7, 0x4f, 0x2, 0x2, 0x407, 0x408, 0x5, 0x3a, 0x1e, 0x2, 0x408, 0x409, 
       0x5, 0x3e, 0x20, 0x2, 0x409, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x404, 
       0x3, 0x2, 0x2, 0x2, 0x40a, 0x406, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 0x7, 0x5b, 0x2, 0x2, 0x40d, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x8a, 0x74, 0x7a, 0x7d, 0x80, 0x89, 0x8b, 0x93, 
       0x98, 0x9a, 0x9c, 0xa2, 0xac, 0xb1, 0xb9, 0xbe, 0xc0, 0xc6, 0xcb, 
       0xcd, 0xd1, 0xd6, 0xda, 0xdc, 0xe2, 0xea, 0xef, 0xf1, 0xf7, 0xfc, 
       0xfe, 0x102, 0x107, 0x10c, 0x112, 0x116, 0x11c, 0x120, 0x124, 0x129, 
       0x12d, 0x13f, 0x145, 0x14b, 0x153, 0x15b, 0x15f, 0x167, 0x169, 0x16f, 
       0x174, 0x179, 0x17f, 0x184, 0x189, 0x190, 0x193, 0x19e, 0x1a5, 0x1aa, 
       0x1b6, 0x1bb, 0x1c2, 0x1c5, 0x1cb, 0x1d0, 0x1d5, 0x1da, 0x1df, 0x1e7, 
       0x1ec, 0x1f7, 0x1fa, 0x205, 0x20a, 0x21a, 0x21d, 0x234, 0x265, 0x267, 
       0x280, 0x2b1, 0x2b3, 0x2b9, 0x2be, 0x2c6, 0x2cb, 0x2d1, 0x2d6, 0x2db, 
       0x2e0, 0x2e5, 0x2ea, 0x2f2, 0x2f7, 0x2fd, 0x302, 0x307, 0x30c, 0x311, 
       0x314, 0x318, 0x31c, 0x324, 0x327, 0x32b, 0x32f, 0x335, 0x338, 0x33c, 
       0x340, 0x345, 0x34a, 0x34f, 0x354, 0x35c, 0x361, 0x367, 0x36c, 0x371, 
       0x376, 0x37a, 0x37f, 0x384, 0x388, 0x391, 0x396, 0x39a, 0x3d0, 0x3de, 
       0x3e0, 0x3ea, 0x3ed, 0x3f8, 0x3fb, 0x402, 0x40a, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MATLABParser::Initializer MATLABParser::_init;
