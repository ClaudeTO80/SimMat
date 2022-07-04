
// Generated from MATLAB.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  MATLABLexer : public antlr4::Lexer {
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

  explicit MATLABLexer(antlr4::CharStream *input);
  ~MATLABLexer();


  	bool maybeString = false;

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void WSAction(antlr4::RuleContext *context, size_t actionIndex);
  void EQUALSAction(antlr4::RuleContext *context, size_t actionIndex);
  void ASSIGNAction(antlr4::RuleContext *context, size_t actionIndex);
  void GREATER_THANAction(antlr4::RuleContext *context, size_t actionIndex);
  void LESS_THANAction(antlr4::RuleContext *context, size_t actionIndex);
  void COMMAAction(antlr4::RuleContext *context, size_t actionIndex);
  void SEMI_COLONAction(antlr4::RuleContext *context, size_t actionIndex);
  void LEFT_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void LEFT_PARENTHESISAction(antlr4::RuleContext *context, size_t actionIndex);
  void LEFT_SQUARE_BRACKETAction(antlr4::RuleContext *context, size_t actionIndex);
  void RIGHT_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void RIGHT_PARENTHESISAction(antlr4::RuleContext *context, size_t actionIndex);
  void RIGHT_SQUARE_BRACKETAction(antlr4::RuleContext *context, size_t actionIndex);
  void IDAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool STRINGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

