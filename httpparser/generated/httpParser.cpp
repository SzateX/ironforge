
// Generated from http.g4 by ANTLR 4.9


#include "httpVisitor.h"

#include "httpParser.h"
#include "httpParser.h"


using namespace antlrcpp;
using namespace antlr4;

httpParser::httpParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

httpParser::~httpParser() {
  delete _interpreter;
}

std::string httpParser::getGrammarFileName() const {
  return "http.g4";
}

const std::vector<std::string>& httpParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& httpParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- BwsContext ------------------------------------------------------------------

httpParser::BwsContext::BwsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::OwsContext* httpParser::BwsContext::ows() {
  return getRuleContext<httpParser::OwsContext>(0);
}


size_t httpParser::BwsContext::getRuleIndex() const {
  return httpParser::RuleBws;
}


antlrcpp::Any httpParser::BwsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitBws(this);
  else
    return visitor->visitChildren(this);
}

httpParser::BwsContext* httpParser::bws() {
  BwsContext *_localctx = _tracker.createInstance<BwsContext>(_ctx, getState());
  enterRule(_localctx, 0, httpParser::RuleBws);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    ows();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConnectionContext ------------------------------------------------------------------

httpParser::ConnectionContext::ConnectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Connection_optionContext *> httpParser::ConnectionContext::connection_option() {
  return getRuleContexts<httpParser::Connection_optionContext>();
}

httpParser::Connection_optionContext* httpParser::ConnectionContext::connection_option(size_t i) {
  return getRuleContext<httpParser::Connection_optionContext>(i);
}

std::vector<httpParser::OwsContext *> httpParser::ConnectionContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::ConnectionContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}


size_t httpParser::ConnectionContext::getRuleIndex() const {
  return httpParser::RuleConnection;
}


antlrcpp::Any httpParser::ConnectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitConnection(this);
  else
    return visitor->visitChildren(this);
}

httpParser::ConnectionContext* httpParser::connection() {
  ConnectionContext *_localctx = _tracker.createInstance<ConnectionContext>(_ctx, getState());
  enterRule(_localctx, 2, httpParser::RuleConnection);
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
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0) {
      setState(204);
      match(httpParser::T__0);
      setState(205);
      ows();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(211);
    connection_option();
    setState(221);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0 || _la == httpParser::HTAB

    || _la == httpParser::SP) {
      setState(212);
      ows();
      setState(213);
      match(httpParser::T__0);
      setState(217);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(214);
        ows();
        setState(215);
        connection_option();
        break;
      }

      default:
        break;
      }
      setState(223);
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

//----------------- Content_lengthContext ------------------------------------------------------------------

httpParser::Content_lengthContext::Content_lengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::Content_lengthContext::DIGIT() {
  return getTokens(httpParser::DIGIT);
}

tree::TerminalNode* httpParser::Content_lengthContext::DIGIT(size_t i) {
  return getToken(httpParser::DIGIT, i);
}


size_t httpParser::Content_lengthContext::getRuleIndex() const {
  return httpParser::RuleContent_length;
}


antlrcpp::Any httpParser::Content_lengthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitContent_length(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Content_lengthContext* httpParser::content_length() {
  Content_lengthContext *_localctx = _tracker.createInstance<Content_lengthContext>(_ctx, getState());
  enterRule(_localctx, 4, httpParser::RuleContent_length);
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
    setState(225); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(224);
      match(httpParser::DIGIT);
      setState(227); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == httpParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Http_messageContext ------------------------------------------------------------------

httpParser::Http_messageContext::Http_messageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Start_lineContext* httpParser::Http_messageContext::start_line() {
  return getRuleContext<httpParser::Start_lineContext>(0);
}

std::vector<httpParser::CrlfContext *> httpParser::Http_messageContext::crlf() {
  return getRuleContexts<httpParser::CrlfContext>();
}

httpParser::CrlfContext* httpParser::Http_messageContext::crlf(size_t i) {
  return getRuleContext<httpParser::CrlfContext>(i);
}

httpParser::Message_bodyContext* httpParser::Http_messageContext::message_body() {
  return getRuleContext<httpParser::Message_bodyContext>(0);
}

std::vector<httpParser::Header_fieldContext *> httpParser::Http_messageContext::header_field() {
  return getRuleContexts<httpParser::Header_fieldContext>();
}

httpParser::Header_fieldContext* httpParser::Http_messageContext::header_field(size_t i) {
  return getRuleContext<httpParser::Header_fieldContext>(i);
}


size_t httpParser::Http_messageContext::getRuleIndex() const {
  return httpParser::RuleHttp_message;
}


antlrcpp::Any httpParser::Http_messageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHttp_message(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Http_messageContext* httpParser::http_message() {
  Http_messageContext *_localctx = _tracker.createInstance<Http_messageContext>(_ctx, getState());
  enterRule(_localctx, 6, httpParser::RuleHttp_message);
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
    setState(229);
    start_line();
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__15)
      | (1ULL << httpParser::T__19)
      | (1ULL << httpParser::T__34)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__36)
      | (1ULL << httpParser::T__37)
      | (1ULL << httpParser::T__38)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__40)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__42)
      | (1ULL << httpParser::T__43)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (httpParser::ASTERISK_FORM - 76))
      | (1ULL << (httpParser::ALPHA - 76))
      | (1ULL << (httpParser::DIGIT - 76)))) != 0)) {
      setState(230);
      header_field();
      setState(231);
      crlf();
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(238);
    crlf();
    setState(239);
    message_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Http_versionContext ------------------------------------------------------------------

httpParser::Http_versionContext::Http_versionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::Http_versionContext::HTTP_NAME() {
  return getToken(httpParser::HTTP_NAME, 0);
}

std::vector<tree::TerminalNode *> httpParser::Http_versionContext::DIGIT() {
  return getTokens(httpParser::DIGIT);
}

tree::TerminalNode* httpParser::Http_versionContext::DIGIT(size_t i) {
  return getToken(httpParser::DIGIT, i);
}


size_t httpParser::Http_versionContext::getRuleIndex() const {
  return httpParser::RuleHttp_version;
}


antlrcpp::Any httpParser::Http_versionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHttp_version(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Http_versionContext* httpParser::http_version() {
  Http_versionContext *_localctx = _tracker.createInstance<Http_versionContext>(_ctx, getState());
  enterRule(_localctx, 8, httpParser::RuleHttp_version);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(httpParser::HTTP_NAME);
    setState(242);
    match(httpParser::T__1);
    setState(243);
    match(httpParser::DIGIT);
    setState(244);
    match(httpParser::T__2);
    setState(245);
    match(httpParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HostContext ------------------------------------------------------------------

httpParser::HostContext::HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Uri_hostContext* httpParser::HostContext::uri_host() {
  return getRuleContext<httpParser::Uri_hostContext>(0);
}

httpParser::PortContext* httpParser::HostContext::port() {
  return getRuleContext<httpParser::PortContext>(0);
}


size_t httpParser::HostContext::getRuleIndex() const {
  return httpParser::RuleHost;
}


antlrcpp::Any httpParser::HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHost(this);
  else
    return visitor->visitChildren(this);
}

httpParser::HostContext* httpParser::host() {
  HostContext *_localctx = _tracker.createInstance<HostContext>(_ctx, getState());
  enterRule(_localctx, 10, httpParser::RuleHost);
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
    setState(247);
    uri_host();
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__3) {
      setState(248);
      match(httpParser::T__3);
      setState(249);
      port();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OwsContext ------------------------------------------------------------------

httpParser::OwsContext::OwsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::OwsContext::SP() {
  return getTokens(httpParser::SP);
}

tree::TerminalNode* httpParser::OwsContext::SP(size_t i) {
  return getToken(httpParser::SP, i);
}

std::vector<tree::TerminalNode *> httpParser::OwsContext::HTAB() {
  return getTokens(httpParser::HTAB);
}

tree::TerminalNode* httpParser::OwsContext::HTAB(size_t i) {
  return getToken(httpParser::HTAB, i);
}


size_t httpParser::OwsContext::getRuleIndex() const {
  return httpParser::RuleOws;
}


antlrcpp::Any httpParser::OwsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitOws(this);
  else
    return visitor->visitChildren(this);
}

httpParser::OwsContext* httpParser::ows() {
  OwsContext *_localctx = _tracker.createInstance<OwsContext>(_ctx, getState());
  enterRule(_localctx, 12, httpParser::RuleOws);
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
    setState(255);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(252);
        _la = _input->LA(1);
        if (!(_la == httpParser::HTAB

        || _la == httpParser::SP)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(257);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RwsContext ------------------------------------------------------------------

httpParser::RwsContext::RwsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::RwsContext::SP() {
  return getTokens(httpParser::SP);
}

tree::TerminalNode* httpParser::RwsContext::SP(size_t i) {
  return getToken(httpParser::SP, i);
}

std::vector<tree::TerminalNode *> httpParser::RwsContext::HTAB() {
  return getTokens(httpParser::HTAB);
}

tree::TerminalNode* httpParser::RwsContext::HTAB(size_t i) {
  return getToken(httpParser::HTAB, i);
}


size_t httpParser::RwsContext::getRuleIndex() const {
  return httpParser::RuleRws;
}


antlrcpp::Any httpParser::RwsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitRws(this);
  else
    return visitor->visitChildren(this);
}

httpParser::RwsContext* httpParser::rws() {
  RwsContext *_localctx = _tracker.createInstance<RwsContext>(_ctx, getState());
  enterRule(_localctx, 14, httpParser::RuleRws);
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
    setState(259); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(258);
              _la = _input->LA(1);
              if (!(_la == httpParser::HTAB

              || _la == httpParser::SP)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(261); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TeContext ------------------------------------------------------------------

httpParser::TeContext::TeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::T_codingsContext *> httpParser::TeContext::t_codings() {
  return getRuleContexts<httpParser::T_codingsContext>();
}

httpParser::T_codingsContext* httpParser::TeContext::t_codings(size_t i) {
  return getRuleContext<httpParser::T_codingsContext>(i);
}

std::vector<httpParser::OwsContext *> httpParser::TeContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::TeContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}


size_t httpParser::TeContext::getRuleIndex() const {
  return httpParser::RuleTe;
}


antlrcpp::Any httpParser::TeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTe(this);
  else
    return visitor->visitChildren(this);
}

httpParser::TeContext* httpParser::te() {
  TeContext *_localctx = _tracker.createInstance<TeContext>(_ctx, getState());
  enterRule(_localctx, 16, httpParser::RuleTe);
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
    setState(279);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__0)
      | (1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__10)
      | (1ULL << httpParser::T__11)
      | (1ULL << httpParser::T__15)
      | (1ULL << httpParser::T__19)
      | (1ULL << httpParser::T__34)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__36)
      | (1ULL << httpParser::T__37)
      | (1ULL << httpParser::T__38)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__40)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__42)
      | (1ULL << httpParser::T__43)
      | (1ULL << httpParser::T__44)
      | (1ULL << httpParser::T__45)
      | (1ULL << httpParser::T__46)
      | (1ULL << httpParser::T__53)
      | (1ULL << httpParser::T__54)
      | (1ULL << httpParser::T__61)
      | (1ULL << httpParser::T__62))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (httpParser::ASTERISK_FORM - 76))
      | (1ULL << (httpParser::ALPHA - 76))
      | (1ULL << (httpParser::DIGIT - 76)))) != 0)) {
      setState(265);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__0: {
          setState(263);
          match(httpParser::T__0);
          break;
        }

        case httpParser::T__2:
        case httpParser::T__10:
        case httpParser::T__11:
        case httpParser::T__15:
        case httpParser::T__19:
        case httpParser::T__34:
        case httpParser::T__35:
        case httpParser::T__36:
        case httpParser::T__37:
        case httpParser::T__38:
        case httpParser::T__39:
        case httpParser::T__40:
        case httpParser::T__41:
        case httpParser::T__42:
        case httpParser::T__43:
        case httpParser::T__44:
        case httpParser::T__45:
        case httpParser::T__46:
        case httpParser::T__53:
        case httpParser::T__54:
        case httpParser::T__61:
        case httpParser::T__62:
        case httpParser::ASTERISK_FORM:
        case httpParser::ALPHA:
        case httpParser::DIGIT: {
          setState(264);
          t_codings();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == httpParser::T__0 || _la == httpParser::HTAB

      || _la == httpParser::SP) {
        setState(267);
        ows();
        setState(268);
        match(httpParser::T__0);
        setState(272);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(269);
          ows();
          setState(270);
          t_codings();
          break;
        }

        default:
          break;
        }
        setState(278);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailerContext ------------------------------------------------------------------

httpParser::TrailerContext::TrailerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Field_nameContext *> httpParser::TrailerContext::field_name() {
  return getRuleContexts<httpParser::Field_nameContext>();
}

httpParser::Field_nameContext* httpParser::TrailerContext::field_name(size_t i) {
  return getRuleContext<httpParser::Field_nameContext>(i);
}

std::vector<httpParser::OwsContext *> httpParser::TrailerContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::TrailerContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}


size_t httpParser::TrailerContext::getRuleIndex() const {
  return httpParser::RuleTrailer;
}


antlrcpp::Any httpParser::TrailerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTrailer(this);
  else
    return visitor->visitChildren(this);
}

httpParser::TrailerContext* httpParser::trailer() {
  TrailerContext *_localctx = _tracker.createInstance<TrailerContext>(_ctx, getState());
  enterRule(_localctx, 18, httpParser::RuleTrailer);
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
    setState(285);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0) {
      setState(281);
      match(httpParser::T__0);
      setState(282);
      ows();
      setState(287);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(288);
    field_name();
    setState(298);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0 || _la == httpParser::HTAB

    || _la == httpParser::SP) {
      setState(289);
      ows();
      setState(290);
      match(httpParser::T__0);
      setState(294);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(291);
        ows();
        setState(292);
        field_name();
        break;
      }

      default:
        break;
      }
      setState(300);
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

//----------------- Transfer_encodingContext ------------------------------------------------------------------

httpParser::Transfer_encodingContext::Transfer_encodingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Transfer_codingContext *> httpParser::Transfer_encodingContext::transfer_coding() {
  return getRuleContexts<httpParser::Transfer_codingContext>();
}

httpParser::Transfer_codingContext* httpParser::Transfer_encodingContext::transfer_coding(size_t i) {
  return getRuleContext<httpParser::Transfer_codingContext>(i);
}

std::vector<httpParser::OwsContext *> httpParser::Transfer_encodingContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::Transfer_encodingContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}


size_t httpParser::Transfer_encodingContext::getRuleIndex() const {
  return httpParser::RuleTransfer_encoding;
}


antlrcpp::Any httpParser::Transfer_encodingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTransfer_encoding(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Transfer_encodingContext* httpParser::transfer_encoding() {
  Transfer_encodingContext *_localctx = _tracker.createInstance<Transfer_encodingContext>(_ctx, getState());
  enterRule(_localctx, 20, httpParser::RuleTransfer_encoding);
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
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0) {
      setState(301);
      match(httpParser::T__0);
      setState(302);
      ows();
      setState(307);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(308);
    transfer_coding();
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0 || _la == httpParser::HTAB

    || _la == httpParser::SP) {
      setState(309);
      ows();
      setState(310);
      match(httpParser::T__0);
      setState(314);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(311);
        ows();
        setState(312);
        transfer_coding();
        break;
      }

      default:
        break;
      }
      setState(320);
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

//----------------- UpgradeContext ------------------------------------------------------------------

httpParser::UpgradeContext::UpgradeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::ProtocolContext *> httpParser::UpgradeContext::protocol() {
  return getRuleContexts<httpParser::ProtocolContext>();
}

httpParser::ProtocolContext* httpParser::UpgradeContext::protocol(size_t i) {
  return getRuleContext<httpParser::ProtocolContext>(i);
}

std::vector<httpParser::OwsContext *> httpParser::UpgradeContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::UpgradeContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}


size_t httpParser::UpgradeContext::getRuleIndex() const {
  return httpParser::RuleUpgrade;
}


antlrcpp::Any httpParser::UpgradeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitUpgrade(this);
  else
    return visitor->visitChildren(this);
}

httpParser::UpgradeContext* httpParser::upgrade() {
  UpgradeContext *_localctx = _tracker.createInstance<UpgradeContext>(_ctx, getState());
  enterRule(_localctx, 22, httpParser::RuleUpgrade);
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
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0) {
      setState(321);
      match(httpParser::T__0);
      setState(322);
      ows();
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(328);
    protocol();
    setState(338);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0 || _la == httpParser::HTAB

    || _la == httpParser::SP) {
      setState(329);
      ows();
      setState(330);
      match(httpParser::T__0);
      setState(334);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(331);
        ows();
        setState(332);
        protocol();
        break;
      }

      default:
        break;
      }
      setState(340);
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

//----------------- ViaContext ------------------------------------------------------------------

httpParser::ViaContext::ViaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Received_protocolContext *> httpParser::ViaContext::received_protocol() {
  return getRuleContexts<httpParser::Received_protocolContext>();
}

httpParser::Received_protocolContext* httpParser::ViaContext::received_protocol(size_t i) {
  return getRuleContext<httpParser::Received_protocolContext>(i);
}

std::vector<httpParser::RwsContext *> httpParser::ViaContext::rws() {
  return getRuleContexts<httpParser::RwsContext>();
}

httpParser::RwsContext* httpParser::ViaContext::rws(size_t i) {
  return getRuleContext<httpParser::RwsContext>(i);
}

std::vector<httpParser::Received_byContext *> httpParser::ViaContext::received_by() {
  return getRuleContexts<httpParser::Received_byContext>();
}

httpParser::Received_byContext* httpParser::ViaContext::received_by(size_t i) {
  return getRuleContext<httpParser::Received_byContext>(i);
}

std::vector<httpParser::OwsContext *> httpParser::ViaContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::ViaContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}

std::vector<httpParser::CommentContext *> httpParser::ViaContext::comment() {
  return getRuleContexts<httpParser::CommentContext>();
}

httpParser::CommentContext* httpParser::ViaContext::comment(size_t i) {
  return getRuleContext<httpParser::CommentContext>(i);
}


size_t httpParser::ViaContext::getRuleIndex() const {
  return httpParser::RuleVia;
}


antlrcpp::Any httpParser::ViaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitVia(this);
  else
    return visitor->visitChildren(this);
}

httpParser::ViaContext* httpParser::via() {
  ViaContext *_localctx = _tracker.createInstance<ViaContext>(_ctx, getState());
  enterRule(_localctx, 24, httpParser::RuleVia);
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
    setState(345);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0) {
      setState(341);
      match(httpParser::T__0);
      setState(342);
      ows();
      setState(347);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }

    setState(348);
    received_protocol();
    setState(349);
    rws();
    setState(350);
    received_by();
    setState(354);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(351);
      rws();
      setState(352);
      comment();
      break;
    }

    default:
      break;
    }
    setState(371);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__0 || _la == httpParser::HTAB

    || _la == httpParser::SP) {
      setState(356);
      ows();
      setState(357);
      match(httpParser::T__0);
      setState(367);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(358);
        ows();

        setState(359);
        received_protocol();
        setState(360);
        rws();
        setState(361);
        received_by();
        setState(365);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          setState(362);
          rws();
          setState(363);
          comment();
          break;
        }

        default:
          break;
        }
        break;
      }

      default:
        break;
      }
      setState(373);
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

//----------------- Absolute_formContext ------------------------------------------------------------------

httpParser::Absolute_formContext::Absolute_formContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Absolute_uriContext* httpParser::Absolute_formContext::absolute_uri() {
  return getRuleContext<httpParser::Absolute_uriContext>(0);
}


size_t httpParser::Absolute_formContext::getRuleIndex() const {
  return httpParser::RuleAbsolute_form;
}


antlrcpp::Any httpParser::Absolute_formContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitAbsolute_form(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Absolute_formContext* httpParser::absolute_form() {
  Absolute_formContext *_localctx = _tracker.createInstance<Absolute_formContext>(_ctx, getState());
  enterRule(_localctx, 26, httpParser::RuleAbsolute_form);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    absolute_uri();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Absolute_pathContext ------------------------------------------------------------------

httpParser::Absolute_pathContext::Absolute_pathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::SegmentContext *> httpParser::Absolute_pathContext::segment() {
  return getRuleContexts<httpParser::SegmentContext>();
}

httpParser::SegmentContext* httpParser::Absolute_pathContext::segment(size_t i) {
  return getRuleContext<httpParser::SegmentContext>(i);
}


size_t httpParser::Absolute_pathContext::getRuleIndex() const {
  return httpParser::RuleAbsolute_path;
}


antlrcpp::Any httpParser::Absolute_pathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitAbsolute_path(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Absolute_pathContext* httpParser::absolute_path() {
  Absolute_pathContext *_localctx = _tracker.createInstance<Absolute_pathContext>(_ctx, getState());
  enterRule(_localctx, 28, httpParser::RuleAbsolute_path);
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
    setState(378); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(376);
      match(httpParser::T__1);
      setState(377);
      segment();
      setState(380); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == httpParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Authority_formContext ------------------------------------------------------------------

httpParser::Authority_formContext::Authority_formContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::AuthorityContext* httpParser::Authority_formContext::authority() {
  return getRuleContext<httpParser::AuthorityContext>(0);
}


size_t httpParser::Authority_formContext::getRuleIndex() const {
  return httpParser::RuleAuthority_form;
}


antlrcpp::Any httpParser::Authority_formContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitAuthority_form(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Authority_formContext* httpParser::authority_form() {
  Authority_formContext *_localctx = _tracker.createInstance<Authority_formContext>(_ctx, getState());
  enterRule(_localctx, 30, httpParser::RuleAuthority_form);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    authority();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChunkContext ------------------------------------------------------------------

httpParser::ChunkContext::ChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Chunk_sizeContext* httpParser::ChunkContext::chunk_size() {
  return getRuleContext<httpParser::Chunk_sizeContext>(0);
}

std::vector<httpParser::CrlfContext *> httpParser::ChunkContext::crlf() {
  return getRuleContexts<httpParser::CrlfContext>();
}

httpParser::CrlfContext* httpParser::ChunkContext::crlf(size_t i) {
  return getRuleContext<httpParser::CrlfContext>(i);
}

httpParser::Chunk_dataContext* httpParser::ChunkContext::chunk_data() {
  return getRuleContext<httpParser::Chunk_dataContext>(0);
}

httpParser::Chunk_extContext* httpParser::ChunkContext::chunk_ext() {
  return getRuleContext<httpParser::Chunk_extContext>(0);
}


size_t httpParser::ChunkContext::getRuleIndex() const {
  return httpParser::RuleChunk;
}


antlrcpp::Any httpParser::ChunkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitChunk(this);
  else
    return visitor->visitChildren(this);
}

httpParser::ChunkContext* httpParser::chunk() {
  ChunkContext *_localctx = _tracker.createInstance<ChunkContext>(_ctx, getState());
  enterRule(_localctx, 32, httpParser::RuleChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    chunk_size();
    setState(386);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(385);
      chunk_ext();
      break;
    }

    default:
      break;
    }
    setState(388);
    crlf();
    setState(389);
    chunk_data();
    setState(390);
    crlf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Chunk_dataContext ------------------------------------------------------------------

httpParser::Chunk_dataContext::Chunk_dataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::Chunk_dataContext::OCTET() {
  return getTokens(httpParser::OCTET);
}

tree::TerminalNode* httpParser::Chunk_dataContext::OCTET(size_t i) {
  return getToken(httpParser::OCTET, i);
}


size_t httpParser::Chunk_dataContext::getRuleIndex() const {
  return httpParser::RuleChunk_data;
}


antlrcpp::Any httpParser::Chunk_dataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitChunk_data(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Chunk_dataContext* httpParser::chunk_data() {
  Chunk_dataContext *_localctx = _tracker.createInstance<Chunk_dataContext>(_ctx, getState());
  enterRule(_localctx, 34, httpParser::RuleChunk_data);
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
    setState(393); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(392);
      match(httpParser::OCTET);
      setState(395); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == httpParser::OCTET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Chunk_extContext ------------------------------------------------------------------

httpParser::Chunk_extContext::Chunk_extContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Chunk_ext_nameContext *> httpParser::Chunk_extContext::chunk_ext_name() {
  return getRuleContexts<httpParser::Chunk_ext_nameContext>();
}

httpParser::Chunk_ext_nameContext* httpParser::Chunk_extContext::chunk_ext_name(size_t i) {
  return getRuleContext<httpParser::Chunk_ext_nameContext>(i);
}

std::vector<httpParser::Chunk_ext_valContext *> httpParser::Chunk_extContext::chunk_ext_val() {
  return getRuleContexts<httpParser::Chunk_ext_valContext>();
}

httpParser::Chunk_ext_valContext* httpParser::Chunk_extContext::chunk_ext_val(size_t i) {
  return getRuleContext<httpParser::Chunk_ext_valContext>(i);
}


size_t httpParser::Chunk_extContext::getRuleIndex() const {
  return httpParser::RuleChunk_ext;
}


antlrcpp::Any httpParser::Chunk_extContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitChunk_ext(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Chunk_extContext* httpParser::chunk_ext() {
  Chunk_extContext *_localctx = _tracker.createInstance<Chunk_extContext>(_ctx, getState());
  enterRule(_localctx, 36, httpParser::RuleChunk_ext);
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
    setState(405);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__4) {
      setState(397);
      match(httpParser::T__4);
      setState(398);
      chunk_ext_name();
      setState(401);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == httpParser::T__5) {
        setState(399);
        match(httpParser::T__5);
        setState(400);
        chunk_ext_val();
      }
      setState(407);
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

//----------------- Chunk_ext_nameContext ------------------------------------------------------------------

httpParser::Chunk_ext_nameContext::Chunk_ext_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::Chunk_ext_nameContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}


size_t httpParser::Chunk_ext_nameContext::getRuleIndex() const {
  return httpParser::RuleChunk_ext_name;
}


antlrcpp::Any httpParser::Chunk_ext_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitChunk_ext_name(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Chunk_ext_nameContext* httpParser::chunk_ext_name() {
  Chunk_ext_nameContext *_localctx = _tracker.createInstance<Chunk_ext_nameContext>(_ctx, getState());
  enterRule(_localctx, 38, httpParser::RuleChunk_ext_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Chunk_ext_valContext ------------------------------------------------------------------

httpParser::Chunk_ext_valContext::Chunk_ext_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::Chunk_ext_valContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}

httpParser::Quoted_stringContext* httpParser::Chunk_ext_valContext::quoted_string() {
  return getRuleContext<httpParser::Quoted_stringContext>(0);
}


size_t httpParser::Chunk_ext_valContext::getRuleIndex() const {
  return httpParser::RuleChunk_ext_val;
}


antlrcpp::Any httpParser::Chunk_ext_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitChunk_ext_val(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Chunk_ext_valContext* httpParser::chunk_ext_val() {
  Chunk_ext_valContext *_localctx = _tracker.createInstance<Chunk_ext_valContext>(_ctx, getState());
  enterRule(_localctx, 40, httpParser::RuleChunk_ext_val);

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
    switch (_input->LA(1)) {
      case httpParser::T__2:
      case httpParser::T__15:
      case httpParser::T__19:
      case httpParser::T__34:
      case httpParser::T__35:
      case httpParser::T__36:
      case httpParser::T__37:
      case httpParser::T__38:
      case httpParser::T__39:
      case httpParser::T__40:
      case httpParser::T__41:
      case httpParser::T__42:
      case httpParser::T__43:
      case httpParser::T__44:
      case httpParser::ASTERISK_FORM:
      case httpParser::ALPHA:
      case httpParser::DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(410);
        token();
        break;
      }

      case httpParser::DQUOTE: {
        enterOuterAlt(_localctx, 2);
        setState(411);
        quoted_string();
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

//----------------- Chunk_sizeContext ------------------------------------------------------------------

httpParser::Chunk_sizeContext::Chunk_sizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::HexdigContext *> httpParser::Chunk_sizeContext::hexdig() {
  return getRuleContexts<httpParser::HexdigContext>();
}

httpParser::HexdigContext* httpParser::Chunk_sizeContext::hexdig(size_t i) {
  return getRuleContext<httpParser::HexdigContext>(i);
}


size_t httpParser::Chunk_sizeContext::getRuleIndex() const {
  return httpParser::RuleChunk_size;
}


antlrcpp::Any httpParser::Chunk_sizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitChunk_size(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Chunk_sizeContext* httpParser::chunk_size() {
  Chunk_sizeContext *_localctx = _tracker.createInstance<Chunk_sizeContext>(_ctx, getState());
  enterRule(_localctx, 42, httpParser::RuleChunk_size);
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
    setState(415); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(414);
      hexdig();
      setState(417); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__24)
      | (1ULL << httpParser::T__25)
      | (1ULL << httpParser::T__30)
      | (1ULL << httpParser::T__31)
      | (1ULL << httpParser::T__45)
      | (1ULL << httpParser::T__46)
      | (1ULL << httpParser::T__53)
      | (1ULL << httpParser::T__54)
      | (1ULL << httpParser::T__59)
      | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
      | (1ULL << (httpParser::T__73 - 73))
      | (1ULL << (httpParser::DIGIT - 73)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Chunked_bodyContext ------------------------------------------------------------------

httpParser::Chunked_bodyContext::Chunked_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Last_chunkContext* httpParser::Chunked_bodyContext::last_chunk() {
  return getRuleContext<httpParser::Last_chunkContext>(0);
}

httpParser::Trailer_partContext* httpParser::Chunked_bodyContext::trailer_part() {
  return getRuleContext<httpParser::Trailer_partContext>(0);
}

httpParser::CrlfContext* httpParser::Chunked_bodyContext::crlf() {
  return getRuleContext<httpParser::CrlfContext>(0);
}

std::vector<httpParser::ChunkContext *> httpParser::Chunked_bodyContext::chunk() {
  return getRuleContexts<httpParser::ChunkContext>();
}

httpParser::ChunkContext* httpParser::Chunked_bodyContext::chunk(size_t i) {
  return getRuleContext<httpParser::ChunkContext>(i);
}


size_t httpParser::Chunked_bodyContext::getRuleIndex() const {
  return httpParser::RuleChunked_body;
}


antlrcpp::Any httpParser::Chunked_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitChunked_body(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Chunked_bodyContext* httpParser::chunked_body() {
  Chunked_bodyContext *_localctx = _tracker.createInstance<Chunked_bodyContext>(_ctx, getState());
  enterRule(_localctx, 44, httpParser::RuleChunked_body);
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
    setState(422);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__24)
      | (1ULL << httpParser::T__25)
      | (1ULL << httpParser::T__30)
      | (1ULL << httpParser::T__31)
      | (1ULL << httpParser::T__45)
      | (1ULL << httpParser::T__46)
      | (1ULL << httpParser::T__53)
      | (1ULL << httpParser::T__54)
      | (1ULL << httpParser::T__59)
      | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
      | (1ULL << (httpParser::T__73 - 73))
      | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
      setState(419);
      chunk();
      setState(424);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(425);
    last_chunk();
    setState(426);
    trailer_part();
    setState(427);
    crlf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

httpParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::CtextContext *> httpParser::CommentContext::ctext() {
  return getRuleContexts<httpParser::CtextContext>();
}

httpParser::CtextContext* httpParser::CommentContext::ctext(size_t i) {
  return getRuleContext<httpParser::CtextContext>(i);
}

std::vector<httpParser::Quoted_pairContext *> httpParser::CommentContext::quoted_pair() {
  return getRuleContexts<httpParser::Quoted_pairContext>();
}

httpParser::Quoted_pairContext* httpParser::CommentContext::quoted_pair(size_t i) {
  return getRuleContext<httpParser::Quoted_pairContext>(i);
}

std::vector<httpParser::CommentContext *> httpParser::CommentContext::comment() {
  return getRuleContexts<httpParser::CommentContext>();
}

httpParser::CommentContext* httpParser::CommentContext::comment(size_t i) {
  return getRuleContext<httpParser::CommentContext>(i);
}


size_t httpParser::CommentContext::getRuleIndex() const {
  return httpParser::RuleComment;
}


antlrcpp::Any httpParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

httpParser::CommentContext* httpParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 46, httpParser::RuleComment);
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
    match(httpParser::T__6);
    setState(435);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__6

    || _la == httpParser::T__20 || ((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & ((1ULL << (httpParser::FROM_EX_TO_APO - 77))
      | (1ULL << (httpParser::FROM_DASH_TO_LSQBR - 77))
      | (1ULL << (httpParser::FROM_RSQBR_TO_TYLDE - 77))
      | (1ULL << (httpParser::OBS_TEXT - 77))
      | (1ULL << (httpParser::HTAB - 77))
      | (1ULL << (httpParser::SP - 77)))) != 0)) {
      setState(433);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::FROM_EX_TO_APO:
        case httpParser::FROM_DASH_TO_LSQBR:
        case httpParser::FROM_RSQBR_TO_TYLDE:
        case httpParser::OBS_TEXT:
        case httpParser::HTAB:
        case httpParser::SP: {
          setState(430);
          ctext();
          break;
        }

        case httpParser::T__20: {
          setState(431);
          quoted_pair();
          break;
        }

        case httpParser::T__6: {
          setState(432);
          comment();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(438);
    match(httpParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Connection_optionContext ------------------------------------------------------------------

httpParser::Connection_optionContext::Connection_optionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::Connection_optionContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}


size_t httpParser::Connection_optionContext::getRuleIndex() const {
  return httpParser::RuleConnection_option;
}


antlrcpp::Any httpParser::Connection_optionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitConnection_option(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Connection_optionContext* httpParser::connection_option() {
  Connection_optionContext *_localctx = _tracker.createInstance<Connection_optionContext>(_ctx, getState());
  enterRule(_localctx, 48, httpParser::RuleConnection_option);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CtextContext ------------------------------------------------------------------

httpParser::CtextContext::CtextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::CtextContext::HTAB() {
  return getToken(httpParser::HTAB, 0);
}

tree::TerminalNode* httpParser::CtextContext::SP() {
  return getToken(httpParser::SP, 0);
}

tree::TerminalNode* httpParser::CtextContext::FROM_EX_TO_APO() {
  return getToken(httpParser::FROM_EX_TO_APO, 0);
}

tree::TerminalNode* httpParser::CtextContext::FROM_DASH_TO_LSQBR() {
  return getToken(httpParser::FROM_DASH_TO_LSQBR, 0);
}

tree::TerminalNode* httpParser::CtextContext::FROM_RSQBR_TO_TYLDE() {
  return getToken(httpParser::FROM_RSQBR_TO_TYLDE, 0);
}

tree::TerminalNode* httpParser::CtextContext::OBS_TEXT() {
  return getToken(httpParser::OBS_TEXT, 0);
}


size_t httpParser::CtextContext::getRuleIndex() const {
  return httpParser::RuleCtext;
}


antlrcpp::Any httpParser::CtextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitCtext(this);
  else
    return visitor->visitChildren(this);
}

httpParser::CtextContext* httpParser::ctext() {
  CtextContext *_localctx = _tracker.createInstance<CtextContext>(_ctx, getState());
  enterRule(_localctx, 50, httpParser::RuleCtext);
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
    setState(442);
    _la = _input->LA(1);
    if (!(((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & ((1ULL << (httpParser::FROM_EX_TO_APO - 77))
      | (1ULL << (httpParser::FROM_DASH_TO_LSQBR - 77))
      | (1ULL << (httpParser::FROM_RSQBR_TO_TYLDE - 77))
      | (1ULL << (httpParser::OBS_TEXT - 77))
      | (1ULL << (httpParser::HTAB - 77))
      | (1ULL << (httpParser::SP - 77)))) != 0))) {
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

//----------------- Field_contentContext ------------------------------------------------------------------

httpParser::Field_contentContext::Field_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Field_vcharContext *> httpParser::Field_contentContext::field_vchar() {
  return getRuleContexts<httpParser::Field_vcharContext>();
}

httpParser::Field_vcharContext* httpParser::Field_contentContext::field_vchar(size_t i) {
  return getRuleContext<httpParser::Field_vcharContext>(i);
}

std::vector<tree::TerminalNode *> httpParser::Field_contentContext::SP() {
  return getTokens(httpParser::SP);
}

tree::TerminalNode* httpParser::Field_contentContext::SP(size_t i) {
  return getToken(httpParser::SP, i);
}

std::vector<tree::TerminalNode *> httpParser::Field_contentContext::HTAB() {
  return getTokens(httpParser::HTAB);
}

tree::TerminalNode* httpParser::Field_contentContext::HTAB(size_t i) {
  return getToken(httpParser::HTAB, i);
}


size_t httpParser::Field_contentContext::getRuleIndex() const {
  return httpParser::RuleField_content;
}


antlrcpp::Any httpParser::Field_contentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitField_content(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Field_contentContext* httpParser::field_content() {
  Field_contentContext *_localctx = _tracker.createInstance<Field_contentContext>(_ctx, getState());
  enterRule(_localctx, 52, httpParser::RuleField_content);
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
    setState(444);
    field_vchar();
    setState(451);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(446); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(445);
        _la = _input->LA(1);
        if (!(_la == httpParser::HTAB

        || _la == httpParser::SP)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(448); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == httpParser::HTAB

      || _la == httpParser::SP);
      setState(450);
      field_vchar();
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

//----------------- Field_nameContext ------------------------------------------------------------------

httpParser::Field_nameContext::Field_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::Field_nameContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}


size_t httpParser::Field_nameContext::getRuleIndex() const {
  return httpParser::RuleField_name;
}


antlrcpp::Any httpParser::Field_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitField_name(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Field_nameContext* httpParser::field_name() {
  Field_nameContext *_localctx = _tracker.createInstance<Field_nameContext>(_ctx, getState());
  enterRule(_localctx, 54, httpParser::RuleField_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_valueContext ------------------------------------------------------------------

httpParser::Field_valueContext::Field_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Field_contentContext *> httpParser::Field_valueContext::field_content() {
  return getRuleContexts<httpParser::Field_contentContext>();
}

httpParser::Field_contentContext* httpParser::Field_valueContext::field_content(size_t i) {
  return getRuleContext<httpParser::Field_contentContext>(i);
}

std::vector<httpParser::Obs_foldContext *> httpParser::Field_valueContext::obs_fold() {
  return getRuleContexts<httpParser::Obs_foldContext>();
}

httpParser::Obs_foldContext* httpParser::Field_valueContext::obs_fold(size_t i) {
  return getRuleContext<httpParser::Obs_foldContext>(i);
}


size_t httpParser::Field_valueContext::getRuleIndex() const {
  return httpParser::RuleField_value;
}


antlrcpp::Any httpParser::Field_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitField_value(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Field_valueContext* httpParser::field_value() {
  Field_valueContext *_localctx = _tracker.createInstance<Field_valueContext>(_ctx, getState());
  enterRule(_localctx, 56, httpParser::RuleField_value);

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
    setState(459);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(457);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case httpParser::OBS_TEXT:
          case httpParser::VCHAR: {
            setState(455);
            field_content();
            break;
          }

          case httpParser::CR: {
            setState(456);
            obs_fold();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(461);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_vcharContext ------------------------------------------------------------------

httpParser::Field_vcharContext::Field_vcharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::Field_vcharContext::VCHAR() {
  return getToken(httpParser::VCHAR, 0);
}

tree::TerminalNode* httpParser::Field_vcharContext::OBS_TEXT() {
  return getToken(httpParser::OBS_TEXT, 0);
}


size_t httpParser::Field_vcharContext::getRuleIndex() const {
  return httpParser::RuleField_vchar;
}


antlrcpp::Any httpParser::Field_vcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitField_vchar(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Field_vcharContext* httpParser::field_vchar() {
  Field_vcharContext *_localctx = _tracker.createInstance<Field_vcharContext>(_ctx, getState());
  enterRule(_localctx, 58, httpParser::RuleField_vchar);
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
    setState(462);
    _la = _input->LA(1);
    if (!(_la == httpParser::OBS_TEXT

    || _la == httpParser::VCHAR)) {
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

//----------------- Header_fieldContext ------------------------------------------------------------------

httpParser::Header_fieldContext::Header_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Field_nameContext* httpParser::Header_fieldContext::field_name() {
  return getRuleContext<httpParser::Field_nameContext>(0);
}

std::vector<httpParser::OwsContext *> httpParser::Header_fieldContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::Header_fieldContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}

httpParser::Field_valueContext* httpParser::Header_fieldContext::field_value() {
  return getRuleContext<httpParser::Field_valueContext>(0);
}


size_t httpParser::Header_fieldContext::getRuleIndex() const {
  return httpParser::RuleHeader_field;
}


antlrcpp::Any httpParser::Header_fieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHeader_field(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Header_fieldContext* httpParser::header_field() {
  Header_fieldContext *_localctx = _tracker.createInstance<Header_fieldContext>(_ctx, getState());
  enterRule(_localctx, 60, httpParser::RuleHeader_field);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    field_name();
    setState(465);
    match(httpParser::T__3);
    setState(466);
    ows();
    setState(467);
    field_value();
    setState(468);
    ows();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Http_uriContext ------------------------------------------------------------------

httpParser::Http_uriContext::Http_uriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::AuthorityContext* httpParser::Http_uriContext::authority() {
  return getRuleContext<httpParser::AuthorityContext>(0);
}

httpParser::Path_abemptyContext* httpParser::Http_uriContext::path_abempty() {
  return getRuleContext<httpParser::Path_abemptyContext>(0);
}

httpParser::QueryContext* httpParser::Http_uriContext::query() {
  return getRuleContext<httpParser::QueryContext>(0);
}

httpParser::Fragment_1Context* httpParser::Http_uriContext::fragment_1() {
  return getRuleContext<httpParser::Fragment_1Context>(0);
}


size_t httpParser::Http_uriContext::getRuleIndex() const {
  return httpParser::RuleHttp_uri;
}


antlrcpp::Any httpParser::Http_uriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHttp_uri(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Http_uriContext* httpParser::http_uri() {
  Http_uriContext *_localctx = _tracker.createInstance<Http_uriContext>(_ctx, getState());
  enterRule(_localctx, 62, httpParser::RuleHttp_uri);
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
    setState(470);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__8

    || _la == httpParser::T__9)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(471);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__10

    || _la == httpParser::T__11)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(472);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__10

    || _la == httpParser::T__11)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(473);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__12

    || _la == httpParser::T__13)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(474);
    match(httpParser::T__3);
    setState(475);
    match(httpParser::T__1);
    setState(476);
    match(httpParser::T__1);
    setState(478);
    authority();
    setState(479);
    path_abempty();
    setState(482);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__14) {
      setState(480);
      match(httpParser::T__14);
      setState(481);
      query();
    }
    setState(486);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__15) {
      setState(484);
      match(httpParser::T__15);
      setState(485);
      fragment_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Https_uriContext ------------------------------------------------------------------

httpParser::Https_uriContext::Https_uriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::AuthorityContext* httpParser::Https_uriContext::authority() {
  return getRuleContext<httpParser::AuthorityContext>(0);
}

httpParser::Path_abemptyContext* httpParser::Https_uriContext::path_abempty() {
  return getRuleContext<httpParser::Path_abemptyContext>(0);
}

httpParser::QueryContext* httpParser::Https_uriContext::query() {
  return getRuleContext<httpParser::QueryContext>(0);
}

httpParser::Fragment_1Context* httpParser::Https_uriContext::fragment_1() {
  return getRuleContext<httpParser::Fragment_1Context>(0);
}


size_t httpParser::Https_uriContext::getRuleIndex() const {
  return httpParser::RuleHttps_uri;
}


antlrcpp::Any httpParser::Https_uriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHttps_uri(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Https_uriContext* httpParser::https_uri() {
  Https_uriContext *_localctx = _tracker.createInstance<Https_uriContext>(_ctx, getState());
  enterRule(_localctx, 64, httpParser::RuleHttps_uri);
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
    setState(488);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__8

    || _la == httpParser::T__9)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(489);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__10

    || _la == httpParser::T__11)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(490);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__10

    || _la == httpParser::T__11)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(491);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__12

    || _la == httpParser::T__13)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(492);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__16

    || _la == httpParser::T__17)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(493);
    match(httpParser::T__3);
    setState(494);
    match(httpParser::T__1);
    setState(495);
    match(httpParser::T__1);
    setState(497);
    authority();
    setState(498);
    path_abempty();
    setState(501);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__14) {
      setState(499);
      match(httpParser::T__14);
      setState(500);
      query();
    }
    setState(505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__15) {
      setState(503);
      match(httpParser::T__15);
      setState(504);
      fragment_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Last_chunkContext ------------------------------------------------------------------

httpParser::Last_chunkContext::Last_chunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::CrlfContext* httpParser::Last_chunkContext::crlf() {
  return getRuleContext<httpParser::CrlfContext>(0);
}

httpParser::Chunk_extContext* httpParser::Last_chunkContext::chunk_ext() {
  return getRuleContext<httpParser::Chunk_extContext>(0);
}


size_t httpParser::Last_chunkContext::getRuleIndex() const {
  return httpParser::RuleLast_chunk;
}


antlrcpp::Any httpParser::Last_chunkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitLast_chunk(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Last_chunkContext* httpParser::last_chunk() {
  Last_chunkContext *_localctx = _tracker.createInstance<Last_chunkContext>(_ctx, getState());
  enterRule(_localctx, 66, httpParser::RuleLast_chunk);
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
    setState(508); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(507);
      match(httpParser::T__18);
      setState(510); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == httpParser::T__18);
    setState(513);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(512);
      chunk_ext();
      break;
    }

    default:
      break;
    }
    setState(515);
    crlf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Message_bodyContext ------------------------------------------------------------------

httpParser::Message_bodyContext::Message_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::Message_bodyContext::OCTET() {
  return getTokens(httpParser::OCTET);
}

tree::TerminalNode* httpParser::Message_bodyContext::OCTET(size_t i) {
  return getToken(httpParser::OCTET, i);
}


size_t httpParser::Message_bodyContext::getRuleIndex() const {
  return httpParser::RuleMessage_body;
}


antlrcpp::Any httpParser::Message_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitMessage_body(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Message_bodyContext* httpParser::message_body() {
  Message_bodyContext *_localctx = _tracker.createInstance<Message_bodyContext>(_ctx, getState());
  enterRule(_localctx, 68, httpParser::RuleMessage_body);
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
    setState(520);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::OCTET) {
      setState(517);
      match(httpParser::OCTET);
      setState(522);
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

//----------------- MethodContext ------------------------------------------------------------------

httpParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::MethodContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}


size_t httpParser::MethodContext::getRuleIndex() const {
  return httpParser::RuleMethod;
}


antlrcpp::Any httpParser::MethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitMethod(this);
  else
    return visitor->visitChildren(this);
}

httpParser::MethodContext* httpParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 70, httpParser::RuleMethod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Obs_foldContext ------------------------------------------------------------------

httpParser::Obs_foldContext::Obs_foldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::CrlfContext* httpParser::Obs_foldContext::crlf() {
  return getRuleContext<httpParser::CrlfContext>(0);
}

std::vector<tree::TerminalNode *> httpParser::Obs_foldContext::SP() {
  return getTokens(httpParser::SP);
}

tree::TerminalNode* httpParser::Obs_foldContext::SP(size_t i) {
  return getToken(httpParser::SP, i);
}

std::vector<tree::TerminalNode *> httpParser::Obs_foldContext::HTAB() {
  return getTokens(httpParser::HTAB);
}

tree::TerminalNode* httpParser::Obs_foldContext::HTAB(size_t i) {
  return getToken(httpParser::HTAB, i);
}


size_t httpParser::Obs_foldContext::getRuleIndex() const {
  return httpParser::RuleObs_fold;
}


antlrcpp::Any httpParser::Obs_foldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitObs_fold(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Obs_foldContext* httpParser::obs_fold() {
  Obs_foldContext *_localctx = _tracker.createInstance<Obs_foldContext>(_ctx, getState());
  enterRule(_localctx, 72, httpParser::RuleObs_fold);
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
    setState(525);
    crlf();
    setState(527); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(526);
              _la = _input->LA(1);
              if (!(_la == httpParser::HTAB

              || _la == httpParser::SP)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(529); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Origin_formContext ------------------------------------------------------------------

httpParser::Origin_formContext::Origin_formContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Absolute_pathContext* httpParser::Origin_formContext::absolute_path() {
  return getRuleContext<httpParser::Absolute_pathContext>(0);
}

httpParser::QueryContext* httpParser::Origin_formContext::query() {
  return getRuleContext<httpParser::QueryContext>(0);
}


size_t httpParser::Origin_formContext::getRuleIndex() const {
  return httpParser::RuleOrigin_form;
}


antlrcpp::Any httpParser::Origin_formContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitOrigin_form(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Origin_formContext* httpParser::origin_form() {
  Origin_formContext *_localctx = _tracker.createInstance<Origin_formContext>(_ctx, getState());
  enterRule(_localctx, 74, httpParser::RuleOrigin_form);
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
    setState(531);
    absolute_path();
    setState(534);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__14) {
      setState(532);
      match(httpParser::T__14);
      setState(533);
      query();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Partial_uriContext ------------------------------------------------------------------

httpParser::Partial_uriContext::Partial_uriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Relative_partContext* httpParser::Partial_uriContext::relative_part() {
  return getRuleContext<httpParser::Relative_partContext>(0);
}

httpParser::QueryContext* httpParser::Partial_uriContext::query() {
  return getRuleContext<httpParser::QueryContext>(0);
}


size_t httpParser::Partial_uriContext::getRuleIndex() const {
  return httpParser::RulePartial_uri;
}


antlrcpp::Any httpParser::Partial_uriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPartial_uri(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Partial_uriContext* httpParser::partial_uri() {
  Partial_uriContext *_localctx = _tracker.createInstance<Partial_uriContext>(_ctx, getState());
  enterRule(_localctx, 76, httpParser::RulePartial_uri);
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
    relative_part();
    setState(539);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__14) {
      setState(537);
      match(httpParser::T__14);
      setState(538);
      query();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProtocolContext ------------------------------------------------------------------

httpParser::ProtocolContext::ProtocolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Protocol_nameContext* httpParser::ProtocolContext::protocol_name() {
  return getRuleContext<httpParser::Protocol_nameContext>(0);
}

httpParser::Protocol_versionContext* httpParser::ProtocolContext::protocol_version() {
  return getRuleContext<httpParser::Protocol_versionContext>(0);
}


size_t httpParser::ProtocolContext::getRuleIndex() const {
  return httpParser::RuleProtocol;
}


antlrcpp::Any httpParser::ProtocolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitProtocol(this);
  else
    return visitor->visitChildren(this);
}

httpParser::ProtocolContext* httpParser::protocol() {
  ProtocolContext *_localctx = _tracker.createInstance<ProtocolContext>(_ctx, getState());
  enterRule(_localctx, 78, httpParser::RuleProtocol);
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
    setState(541);
    protocol_name();
    setState(544);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__1) {
      setState(542);
      match(httpParser::T__1);
      setState(543);
      protocol_version();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Protocol_nameContext ------------------------------------------------------------------

httpParser::Protocol_nameContext::Protocol_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::Protocol_nameContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}


size_t httpParser::Protocol_nameContext::getRuleIndex() const {
  return httpParser::RuleProtocol_name;
}


antlrcpp::Any httpParser::Protocol_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitProtocol_name(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Protocol_nameContext* httpParser::protocol_name() {
  Protocol_nameContext *_localctx = _tracker.createInstance<Protocol_nameContext>(_ctx, getState());
  enterRule(_localctx, 80, httpParser::RuleProtocol_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Protocol_versionContext ------------------------------------------------------------------

httpParser::Protocol_versionContext::Protocol_versionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::Protocol_versionContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}


size_t httpParser::Protocol_versionContext::getRuleIndex() const {
  return httpParser::RuleProtocol_version;
}


antlrcpp::Any httpParser::Protocol_versionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitProtocol_version(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Protocol_versionContext* httpParser::protocol_version() {
  Protocol_versionContext *_localctx = _tracker.createInstance<Protocol_versionContext>(_ctx, getState());
  enterRule(_localctx, 82, httpParser::RuleProtocol_version);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudonymContext ------------------------------------------------------------------

httpParser::PseudonymContext::PseudonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::PseudonymContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}


size_t httpParser::PseudonymContext::getRuleIndex() const {
  return httpParser::RulePseudonym;
}


antlrcpp::Any httpParser::PseudonymContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPseudonym(this);
  else
    return visitor->visitChildren(this);
}

httpParser::PseudonymContext* httpParser::pseudonym() {
  PseudonymContext *_localctx = _tracker.createInstance<PseudonymContext>(_ctx, getState());
  enterRule(_localctx, 84, httpParser::RulePseudonym);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    token();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QdtextContext ------------------------------------------------------------------

httpParser::QdtextContext::QdtextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::QdtextContext::HTAB() {
  return getToken(httpParser::HTAB, 0);
}

tree::TerminalNode* httpParser::QdtextContext::SP() {
  return getToken(httpParser::SP, 0);
}

tree::TerminalNode* httpParser::QdtextContext::FROM_HASH_TO_LSQBR() {
  return getToken(httpParser::FROM_HASH_TO_LSQBR, 0);
}

tree::TerminalNode* httpParser::QdtextContext::FROM_RSQBR_TO_TYLDE() {
  return getToken(httpParser::FROM_RSQBR_TO_TYLDE, 0);
}

tree::TerminalNode* httpParser::QdtextContext::OBS_TEXT() {
  return getToken(httpParser::OBS_TEXT, 0);
}


size_t httpParser::QdtextContext::getRuleIndex() const {
  return httpParser::RuleQdtext;
}


antlrcpp::Any httpParser::QdtextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitQdtext(this);
  else
    return visitor->visitChildren(this);
}

httpParser::QdtextContext* httpParser::qdtext() {
  QdtextContext *_localctx = _tracker.createInstance<QdtextContext>(_ctx, getState());
  enterRule(_localctx, 86, httpParser::RuleQdtext);
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
    setState(552);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__19 || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (httpParser::FROM_RSQBR_TO_TYLDE - 79))
      | (1ULL << (httpParser::OBS_TEXT - 79))
      | (1ULL << (httpParser::FROM_HASH_TO_LSQBR - 79))
      | (1ULL << (httpParser::HTAB - 79))
      | (1ULL << (httpParser::SP - 79)))) != 0))) {
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

//----------------- Quoted_pairContext ------------------------------------------------------------------

httpParser::Quoted_pairContext::Quoted_pairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::Quoted_pairContext::HTAB() {
  return getToken(httpParser::HTAB, 0);
}

tree::TerminalNode* httpParser::Quoted_pairContext::SP() {
  return getToken(httpParser::SP, 0);
}

tree::TerminalNode* httpParser::Quoted_pairContext::VCHAR() {
  return getToken(httpParser::VCHAR, 0);
}

tree::TerminalNode* httpParser::Quoted_pairContext::OBS_TEXT() {
  return getToken(httpParser::OBS_TEXT, 0);
}


size_t httpParser::Quoted_pairContext::getRuleIndex() const {
  return httpParser::RuleQuoted_pair;
}


antlrcpp::Any httpParser::Quoted_pairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitQuoted_pair(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Quoted_pairContext* httpParser::quoted_pair() {
  Quoted_pairContext *_localctx = _tracker.createInstance<Quoted_pairContext>(_ctx, getState());
  enterRule(_localctx, 88, httpParser::RuleQuoted_pair);
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
    setState(554);
    match(httpParser::T__20);
    setState(555);
    _la = _input->LA(1);
    if (!(((((_la - 80) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 80)) & ((1ULL << (httpParser::OBS_TEXT - 80))
      | (1ULL << (httpParser::HTAB - 80))
      | (1ULL << (httpParser::SP - 80))
      | (1ULL << (httpParser::VCHAR - 80)))) != 0))) {
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

//----------------- Quoted_stringContext ------------------------------------------------------------------

httpParser::Quoted_stringContext::Quoted_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::Quoted_stringContext::DQUOTE() {
  return getTokens(httpParser::DQUOTE);
}

tree::TerminalNode* httpParser::Quoted_stringContext::DQUOTE(size_t i) {
  return getToken(httpParser::DQUOTE, i);
}

std::vector<httpParser::QdtextContext *> httpParser::Quoted_stringContext::qdtext() {
  return getRuleContexts<httpParser::QdtextContext>();
}

httpParser::QdtextContext* httpParser::Quoted_stringContext::qdtext(size_t i) {
  return getRuleContext<httpParser::QdtextContext>(i);
}

std::vector<httpParser::Quoted_pairContext *> httpParser::Quoted_stringContext::quoted_pair() {
  return getRuleContexts<httpParser::Quoted_pairContext>();
}

httpParser::Quoted_pairContext* httpParser::Quoted_stringContext::quoted_pair(size_t i) {
  return getRuleContext<httpParser::Quoted_pairContext>(i);
}


size_t httpParser::Quoted_stringContext::getRuleIndex() const {
  return httpParser::RuleQuoted_string;
}


antlrcpp::Any httpParser::Quoted_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitQuoted_string(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Quoted_stringContext* httpParser::quoted_string() {
  Quoted_stringContext *_localctx = _tracker.createInstance<Quoted_stringContext>(_ctx, getState());
  enterRule(_localctx, 90, httpParser::RuleQuoted_string);
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
    setState(557);
    match(httpParser::DQUOTE);
    setState(562);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__19

    || _la == httpParser::T__20 || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (httpParser::FROM_RSQBR_TO_TYLDE - 79))
      | (1ULL << (httpParser::OBS_TEXT - 79))
      | (1ULL << (httpParser::FROM_HASH_TO_LSQBR - 79))
      | (1ULL << (httpParser::HTAB - 79))
      | (1ULL << (httpParser::SP - 79)))) != 0)) {
      setState(560);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__19:
        case httpParser::FROM_RSQBR_TO_TYLDE:
        case httpParser::OBS_TEXT:
        case httpParser::FROM_HASH_TO_LSQBR:
        case httpParser::HTAB:
        case httpParser::SP: {
          setState(558);
          qdtext();
          break;
        }

        case httpParser::T__20: {
          setState(559);
          quoted_pair();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(564);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(565);
    match(httpParser::DQUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RankContext ------------------------------------------------------------------

httpParser::RankContext::RankContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::RankContext::DIGIT() {
  return getTokens(httpParser::DIGIT);
}

tree::TerminalNode* httpParser::RankContext::DIGIT(size_t i) {
  return getToken(httpParser::DIGIT, i);
}


size_t httpParser::RankContext::getRuleIndex() const {
  return httpParser::RuleRank;
}


antlrcpp::Any httpParser::RankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitRank(this);
  else
    return visitor->visitChildren(this);
}

httpParser::RankContext* httpParser::rank() {
  RankContext *_localctx = _tracker.createInstance<RankContext>(_ctx, getState());
  enterRule(_localctx, 92, httpParser::RuleRank);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(595);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case httpParser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(567);
        match(httpParser::T__18);
        setState(579);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == httpParser::T__2) {
          setState(568);
          match(httpParser::T__2);

          setState(577);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
          case 1: {
            setState(569);
            match(httpParser::DIGIT);
            setState(570);
            match(httpParser::DIGIT);
            setState(571);
            match(httpParser::DIGIT);
            break;
          }

          case 2: {
            setState(572);
            match(httpParser::DIGIT);
            setState(573);
            match(httpParser::DIGIT);
            break;
          }

          case 3: {
            setState(575);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == httpParser::DIGIT) {
              setState(574);
              match(httpParser::DIGIT);
            }
            break;
          }

          default:
            break;
          }
        }
        break;
      }

      case httpParser::T__21: {
        enterOuterAlt(_localctx, 2);
        setState(581);
        match(httpParser::T__21);
        setState(593);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == httpParser::T__2) {
          setState(582);
          match(httpParser::T__2);

          setState(591);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
          case 1: {
            setState(583);
            match(httpParser::T__18);
            setState(584);
            match(httpParser::T__18);
            setState(585);
            match(httpParser::T__18);
            break;
          }

          case 2: {
            setState(586);
            match(httpParser::T__18);
            setState(587);
            match(httpParser::T__18);
            break;
          }

          case 3: {
            setState(589);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == httpParser::T__18) {
              setState(588);
              match(httpParser::T__18);
            }
            break;
          }

          default:
            break;
          }
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

//----------------- Reason_phraseContext ------------------------------------------------------------------

httpParser::Reason_phraseContext::Reason_phraseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::Reason_phraseContext::HTAB() {
  return getTokens(httpParser::HTAB);
}

tree::TerminalNode* httpParser::Reason_phraseContext::HTAB(size_t i) {
  return getToken(httpParser::HTAB, i);
}

std::vector<tree::TerminalNode *> httpParser::Reason_phraseContext::SP() {
  return getTokens(httpParser::SP);
}

tree::TerminalNode* httpParser::Reason_phraseContext::SP(size_t i) {
  return getToken(httpParser::SP, i);
}

std::vector<tree::TerminalNode *> httpParser::Reason_phraseContext::VCHAR() {
  return getTokens(httpParser::VCHAR);
}

tree::TerminalNode* httpParser::Reason_phraseContext::VCHAR(size_t i) {
  return getToken(httpParser::VCHAR, i);
}

std::vector<tree::TerminalNode *> httpParser::Reason_phraseContext::OBS_TEXT() {
  return getTokens(httpParser::OBS_TEXT);
}

tree::TerminalNode* httpParser::Reason_phraseContext::OBS_TEXT(size_t i) {
  return getToken(httpParser::OBS_TEXT, i);
}


size_t httpParser::Reason_phraseContext::getRuleIndex() const {
  return httpParser::RuleReason_phrase;
}


antlrcpp::Any httpParser::Reason_phraseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitReason_phrase(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Reason_phraseContext* httpParser::reason_phrase() {
  Reason_phraseContext *_localctx = _tracker.createInstance<Reason_phraseContext>(_ctx, getState());
  enterRule(_localctx, 94, httpParser::RuleReason_phrase);
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
    setState(600);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 80) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 80)) & ((1ULL << (httpParser::OBS_TEXT - 80))
      | (1ULL << (httpParser::HTAB - 80))
      | (1ULL << (httpParser::SP - 80))
      | (1ULL << (httpParser::VCHAR - 80)))) != 0)) {
      setState(597);
      _la = _input->LA(1);
      if (!(((((_la - 80) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 80)) & ((1ULL << (httpParser::OBS_TEXT - 80))
        | (1ULL << (httpParser::HTAB - 80))
        | (1ULL << (httpParser::SP - 80))
        | (1ULL << (httpParser::VCHAR - 80)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(602);
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

//----------------- Received_byContext ------------------------------------------------------------------

httpParser::Received_byContext::Received_byContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Uri_hostContext* httpParser::Received_byContext::uri_host() {
  return getRuleContext<httpParser::Uri_hostContext>(0);
}

httpParser::PortContext* httpParser::Received_byContext::port() {
  return getRuleContext<httpParser::PortContext>(0);
}

httpParser::PseudonymContext* httpParser::Received_byContext::pseudonym() {
  return getRuleContext<httpParser::PseudonymContext>(0);
}


size_t httpParser::Received_byContext::getRuleIndex() const {
  return httpParser::RuleReceived_by;
}


antlrcpp::Any httpParser::Received_byContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitReceived_by(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Received_byContext* httpParser::received_by() {
  Received_byContext *_localctx = _tracker.createInstance<Received_byContext>(_ctx, getState());
  enterRule(_localctx, 96, httpParser::RuleReceived_by);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(609);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(603);
      uri_host();
      setState(606);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == httpParser::T__3) {
        setState(604);
        match(httpParser::T__3);
        setState(605);
        port();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(608);
      pseudonym();
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

//----------------- Received_protocolContext ------------------------------------------------------------------

httpParser::Received_protocolContext::Received_protocolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Protocol_versionContext* httpParser::Received_protocolContext::protocol_version() {
  return getRuleContext<httpParser::Protocol_versionContext>(0);
}

httpParser::Protocol_nameContext* httpParser::Received_protocolContext::protocol_name() {
  return getRuleContext<httpParser::Protocol_nameContext>(0);
}


size_t httpParser::Received_protocolContext::getRuleIndex() const {
  return httpParser::RuleReceived_protocol;
}


antlrcpp::Any httpParser::Received_protocolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitReceived_protocol(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Received_protocolContext* httpParser::received_protocol() {
  Received_protocolContext *_localctx = _tracker.createInstance<Received_protocolContext>(_ctx, getState());
  enterRule(_localctx, 98, httpParser::RuleReceived_protocol);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(611);
      protocol_name();
      setState(612);
      match(httpParser::T__1);
      break;
    }

    default:
      break;
    }
    setState(616);
    protocol_version();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Request_lineContext ------------------------------------------------------------------

httpParser::Request_lineContext::Request_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::MethodContext* httpParser::Request_lineContext::method() {
  return getRuleContext<httpParser::MethodContext>(0);
}

std::vector<tree::TerminalNode *> httpParser::Request_lineContext::SP() {
  return getTokens(httpParser::SP);
}

tree::TerminalNode* httpParser::Request_lineContext::SP(size_t i) {
  return getToken(httpParser::SP, i);
}

httpParser::Request_targetContext* httpParser::Request_lineContext::request_target() {
  return getRuleContext<httpParser::Request_targetContext>(0);
}

httpParser::Http_versionContext* httpParser::Request_lineContext::http_version() {
  return getRuleContext<httpParser::Http_versionContext>(0);
}

httpParser::CrlfContext* httpParser::Request_lineContext::crlf() {
  return getRuleContext<httpParser::CrlfContext>(0);
}


size_t httpParser::Request_lineContext::getRuleIndex() const {
  return httpParser::RuleRequest_line;
}


antlrcpp::Any httpParser::Request_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitRequest_line(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Request_lineContext* httpParser::request_line() {
  Request_lineContext *_localctx = _tracker.createInstance<Request_lineContext>(_ctx, getState());
  enterRule(_localctx, 100, httpParser::RuleRequest_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    method();
    setState(619);
    match(httpParser::SP);
    setState(620);
    request_target();
    setState(621);
    match(httpParser::SP);
    setState(622);
    http_version();
    setState(623);
    crlf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Request_targetContext ------------------------------------------------------------------

httpParser::Request_targetContext::Request_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Origin_formContext* httpParser::Request_targetContext::origin_form() {
  return getRuleContext<httpParser::Origin_formContext>(0);
}

httpParser::Absolute_formContext* httpParser::Request_targetContext::absolute_form() {
  return getRuleContext<httpParser::Absolute_formContext>(0);
}

httpParser::Authority_formContext* httpParser::Request_targetContext::authority_form() {
  return getRuleContext<httpParser::Authority_formContext>(0);
}

tree::TerminalNode* httpParser::Request_targetContext::ASTERISK_FORM() {
  return getToken(httpParser::ASTERISK_FORM, 0);
}


size_t httpParser::Request_targetContext::getRuleIndex() const {
  return httpParser::RuleRequest_target;
}


antlrcpp::Any httpParser::Request_targetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitRequest_target(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Request_targetContext* httpParser::request_target() {
  Request_targetContext *_localctx = _tracker.createInstance<Request_targetContext>(_ctx, getState());
  enterRule(_localctx, 102, httpParser::RuleRequest_target);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(629);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(625);
      origin_form();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(626);
      absolute_form();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(627);
      authority_form();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(628);
      match(httpParser::ASTERISK_FORM);
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

//----------------- Start_lineContext ------------------------------------------------------------------

httpParser::Start_lineContext::Start_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Request_lineContext* httpParser::Start_lineContext::request_line() {
  return getRuleContext<httpParser::Request_lineContext>(0);
}

httpParser::Status_lineContext* httpParser::Start_lineContext::status_line() {
  return getRuleContext<httpParser::Status_lineContext>(0);
}


size_t httpParser::Start_lineContext::getRuleIndex() const {
  return httpParser::RuleStart_line;
}


antlrcpp::Any httpParser::Start_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitStart_line(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Start_lineContext* httpParser::start_line() {
  Start_lineContext *_localctx = _tracker.createInstance<Start_lineContext>(_ctx, getState());
  enterRule(_localctx, 104, httpParser::RuleStart_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(633);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case httpParser::T__2:
      case httpParser::T__15:
      case httpParser::T__19:
      case httpParser::T__34:
      case httpParser::T__35:
      case httpParser::T__36:
      case httpParser::T__37:
      case httpParser::T__38:
      case httpParser::T__39:
      case httpParser::T__40:
      case httpParser::T__41:
      case httpParser::T__42:
      case httpParser::T__43:
      case httpParser::T__44:
      case httpParser::ASTERISK_FORM:
      case httpParser::ALPHA:
      case httpParser::DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(631);
        request_line();
        break;
      }

      case httpParser::HTTP_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(632);
        status_line();
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

//----------------- Status_codeContext ------------------------------------------------------------------

httpParser::Status_codeContext::Status_codeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::Status_codeContext::DIGIT() {
  return getTokens(httpParser::DIGIT);
}

tree::TerminalNode* httpParser::Status_codeContext::DIGIT(size_t i) {
  return getToken(httpParser::DIGIT, i);
}


size_t httpParser::Status_codeContext::getRuleIndex() const {
  return httpParser::RuleStatus_code;
}


antlrcpp::Any httpParser::Status_codeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitStatus_code(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Status_codeContext* httpParser::status_code() {
  Status_codeContext *_localctx = _tracker.createInstance<Status_codeContext>(_ctx, getState());
  enterRule(_localctx, 106, httpParser::RuleStatus_code);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    match(httpParser::DIGIT);
    setState(636);
    match(httpParser::DIGIT);
    setState(637);
    match(httpParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Status_lineContext ------------------------------------------------------------------

httpParser::Status_lineContext::Status_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Http_versionContext* httpParser::Status_lineContext::http_version() {
  return getRuleContext<httpParser::Http_versionContext>(0);
}

std::vector<tree::TerminalNode *> httpParser::Status_lineContext::SP() {
  return getTokens(httpParser::SP);
}

tree::TerminalNode* httpParser::Status_lineContext::SP(size_t i) {
  return getToken(httpParser::SP, i);
}

httpParser::Status_codeContext* httpParser::Status_lineContext::status_code() {
  return getRuleContext<httpParser::Status_codeContext>(0);
}

httpParser::Reason_phraseContext* httpParser::Status_lineContext::reason_phrase() {
  return getRuleContext<httpParser::Reason_phraseContext>(0);
}

httpParser::CrlfContext* httpParser::Status_lineContext::crlf() {
  return getRuleContext<httpParser::CrlfContext>(0);
}


size_t httpParser::Status_lineContext::getRuleIndex() const {
  return httpParser::RuleStatus_line;
}


antlrcpp::Any httpParser::Status_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitStatus_line(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Status_lineContext* httpParser::status_line() {
  Status_lineContext *_localctx = _tracker.createInstance<Status_lineContext>(_ctx, getState());
  enterRule(_localctx, 108, httpParser::RuleStatus_line);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(639);
    http_version();
    setState(640);
    match(httpParser::SP);
    setState(641);
    status_code();
    setState(642);
    match(httpParser::SP);
    setState(643);
    reason_phrase();
    setState(644);
    crlf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- T_codingsContext ------------------------------------------------------------------

httpParser::T_codingsContext::T_codingsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Transfer_codingContext* httpParser::T_codingsContext::transfer_coding() {
  return getRuleContext<httpParser::Transfer_codingContext>(0);
}

httpParser::T_rankingContext* httpParser::T_codingsContext::t_ranking() {
  return getRuleContext<httpParser::T_rankingContext>(0);
}


size_t httpParser::T_codingsContext::getRuleIndex() const {
  return httpParser::RuleT_codings;
}


antlrcpp::Any httpParser::T_codingsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitT_codings(this);
  else
    return visitor->visitChildren(this);
}

httpParser::T_codingsContext* httpParser::t_codings() {
  T_codingsContext *_localctx = _tracker.createInstance<T_codingsContext>(_ctx, getState());
  enterRule(_localctx, 110, httpParser::RuleT_codings);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(658);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case httpParser::T__10:
      case httpParser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(646);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__10

        || _la == httpParser::T__11)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(647);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__22

        || _la == httpParser::T__23)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(648);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__24

        || _la == httpParser::T__25)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(649);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__26

        || _la == httpParser::T__27)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(650);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__28

        || _la == httpParser::T__29)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(651);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__30

        || _la == httpParser::T__31)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(652);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__22

        || _la == httpParser::T__23)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(653);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__16

        || _la == httpParser::T__17)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case httpParser::T__2:
      case httpParser::T__15:
      case httpParser::T__19:
      case httpParser::T__34:
      case httpParser::T__35:
      case httpParser::T__36:
      case httpParser::T__37:
      case httpParser::T__38:
      case httpParser::T__39:
      case httpParser::T__40:
      case httpParser::T__41:
      case httpParser::T__42:
      case httpParser::T__43:
      case httpParser::T__44:
      case httpParser::T__45:
      case httpParser::T__46:
      case httpParser::T__53:
      case httpParser::T__54:
      case httpParser::T__61:
      case httpParser::T__62:
      case httpParser::ASTERISK_FORM:
      case httpParser::ALPHA:
      case httpParser::DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(654);
        transfer_coding();
        setState(656);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
        case 1: {
          setState(655);
          t_ranking();
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

//----------------- T_rankingContext ------------------------------------------------------------------

httpParser::T_rankingContext::T_rankingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::OwsContext *> httpParser::T_rankingContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::T_rankingContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}

httpParser::RankContext* httpParser::T_rankingContext::rank() {
  return getRuleContext<httpParser::RankContext>(0);
}


size_t httpParser::T_rankingContext::getRuleIndex() const {
  return httpParser::RuleT_ranking;
}


antlrcpp::Any httpParser::T_rankingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitT_ranking(this);
  else
    return visitor->visitChildren(this);
}

httpParser::T_rankingContext* httpParser::t_ranking() {
  T_rankingContext *_localctx = _tracker.createInstance<T_rankingContext>(_ctx, getState());
  enterRule(_localctx, 112, httpParser::RuleT_ranking);
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
    setState(660);
    ows();
    setState(661);
    match(httpParser::T__4);
    setState(662);
    ows();

    setState(663);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__32

    || _la == httpParser::T__33)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(664);
    match(httpParser::T__5);
    setState(666);
    rank();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TcharContext ------------------------------------------------------------------

httpParser::TcharContext::TcharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::TcharContext::ASTERISK_FORM() {
  return getToken(httpParser::ASTERISK_FORM, 0);
}

tree::TerminalNode* httpParser::TcharContext::DIGIT() {
  return getToken(httpParser::DIGIT, 0);
}

tree::TerminalNode* httpParser::TcharContext::ALPHA() {
  return getToken(httpParser::ALPHA, 0);
}


size_t httpParser::TcharContext::getRuleIndex() const {
  return httpParser::RuleTchar;
}


antlrcpp::Any httpParser::TcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTchar(this);
  else
    return visitor->visitChildren(this);
}

httpParser::TcharContext* httpParser::tchar() {
  TcharContext *_localctx = _tracker.createInstance<TcharContext>(_ctx, getState());
  enterRule(_localctx, 114, httpParser::RuleTchar);
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
    setState(668);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__15)
      | (1ULL << httpParser::T__19)
      | (1ULL << httpParser::T__34)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__36)
      | (1ULL << httpParser::T__37)
      | (1ULL << httpParser::T__38)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__40)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__42)
      | (1ULL << httpParser::T__43)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (httpParser::ASTERISK_FORM - 76))
      | (1ULL << (httpParser::ALPHA - 76))
      | (1ULL << (httpParser::DIGIT - 76)))) != 0))) {
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

//----------------- TokenContext ------------------------------------------------------------------

httpParser::TokenContext::TokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::TcharContext *> httpParser::TokenContext::tchar() {
  return getRuleContexts<httpParser::TcharContext>();
}

httpParser::TcharContext* httpParser::TokenContext::tchar(size_t i) {
  return getRuleContext<httpParser::TcharContext>(i);
}


size_t httpParser::TokenContext::getRuleIndex() const {
  return httpParser::RuleToken;
}


antlrcpp::Any httpParser::TokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitToken(this);
  else
    return visitor->visitChildren(this);
}

httpParser::TokenContext* httpParser::token() {
  TokenContext *_localctx = _tracker.createInstance<TokenContext>(_ctx, getState());
  enterRule(_localctx, 116, httpParser::RuleToken);
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
    setState(671); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(670);
      tchar();
      setState(673); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__15)
      | (1ULL << httpParser::T__19)
      | (1ULL << httpParser::T__34)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__36)
      | (1ULL << httpParser::T__37)
      | (1ULL << httpParser::T__38)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__40)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__42)
      | (1ULL << httpParser::T__43)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (httpParser::ASTERISK_FORM - 76))
      | (1ULL << (httpParser::ALPHA - 76))
      | (1ULL << (httpParser::DIGIT - 76)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Trailer_partContext ------------------------------------------------------------------

httpParser::Trailer_partContext::Trailer_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Header_fieldContext *> httpParser::Trailer_partContext::header_field() {
  return getRuleContexts<httpParser::Header_fieldContext>();
}

httpParser::Header_fieldContext* httpParser::Trailer_partContext::header_field(size_t i) {
  return getRuleContext<httpParser::Header_fieldContext>(i);
}

std::vector<httpParser::CrlfContext *> httpParser::Trailer_partContext::crlf() {
  return getRuleContexts<httpParser::CrlfContext>();
}

httpParser::CrlfContext* httpParser::Trailer_partContext::crlf(size_t i) {
  return getRuleContext<httpParser::CrlfContext>(i);
}


size_t httpParser::Trailer_partContext::getRuleIndex() const {
  return httpParser::RuleTrailer_part;
}


antlrcpp::Any httpParser::Trailer_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTrailer_part(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Trailer_partContext* httpParser::trailer_part() {
  Trailer_partContext *_localctx = _tracker.createInstance<Trailer_partContext>(_ctx, getState());
  enterRule(_localctx, 118, httpParser::RuleTrailer_part);
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
    setState(680);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__15)
      | (1ULL << httpParser::T__19)
      | (1ULL << httpParser::T__34)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__36)
      | (1ULL << httpParser::T__37)
      | (1ULL << httpParser::T__38)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__40)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__42)
      | (1ULL << httpParser::T__43)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (httpParser::ASTERISK_FORM - 76))
      | (1ULL << (httpParser::ALPHA - 76))
      | (1ULL << (httpParser::DIGIT - 76)))) != 0)) {
      setState(675);
      header_field();
      setState(676);
      crlf();
      setState(682);
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

//----------------- Transfer_codingContext ------------------------------------------------------------------

httpParser::Transfer_codingContext::Transfer_codingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Transfer_extensionContext* httpParser::Transfer_codingContext::transfer_extension() {
  return getRuleContext<httpParser::Transfer_extensionContext>(0);
}


size_t httpParser::Transfer_codingContext::getRuleIndex() const {
  return httpParser::RuleTransfer_coding;
}


antlrcpp::Any httpParser::Transfer_codingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTransfer_coding(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Transfer_codingContext* httpParser::transfer_coding() {
  Transfer_codingContext *_localctx = _tracker.createInstance<Transfer_codingContext>(_ctx, getState());
  enterRule(_localctx, 120, httpParser::RuleTransfer_coding);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(710);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(683);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__45

      || _la == httpParser::T__46)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(684);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__8

      || _la == httpParser::T__9)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(685);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__47

      || _la == httpParser::T__48)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(686);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__49

      || _la == httpParser::T__50)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(687);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__51

      || _la == httpParser::T__52)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(688);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__30

      || _la == httpParser::T__31)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(689);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__53

      || _la == httpParser::T__54)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(690);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__45

      || _la == httpParser::T__46)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(691);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__55

      || _la == httpParser::T__56)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(692);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__57

      || _la == httpParser::T__58)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(693);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__12

      || _la == httpParser::T__13)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(694);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__22

      || _la == httpParser::T__23)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(695);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__30

      || _la == httpParser::T__31)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(696);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__16

      || _la == httpParser::T__17)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(697);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__16

      || _la == httpParser::T__17)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(698);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__53

      || _la == httpParser::T__54)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(699);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__30

      || _la == httpParser::T__31)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(700);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__59

      || _la == httpParser::T__60)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(701);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__28

      || _la == httpParser::T__29)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(702);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__24

      || _la == httpParser::T__25)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(703);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__10

      || _la == httpParser::T__11)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(704);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__30

      || _la == httpParser::T__31)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(705);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__61

      || _la == httpParser::T__62)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(706);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__63

      || _la == httpParser::T__64)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(707);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__26

      || _la == httpParser::T__27)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(708);
      _la = _input->LA(1);
      if (!(_la == httpParser::T__12

      || _la == httpParser::T__13)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(709);
      transfer_extension();
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

//----------------- Transfer_extensionContext ------------------------------------------------------------------

httpParser::Transfer_extensionContext::Transfer_extensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::TokenContext* httpParser::Transfer_extensionContext::token() {
  return getRuleContext<httpParser::TokenContext>(0);
}

std::vector<httpParser::OwsContext *> httpParser::Transfer_extensionContext::ows() {
  return getRuleContexts<httpParser::OwsContext>();
}

httpParser::OwsContext* httpParser::Transfer_extensionContext::ows(size_t i) {
  return getRuleContext<httpParser::OwsContext>(i);
}

std::vector<httpParser::Transfer_parameterContext *> httpParser::Transfer_extensionContext::transfer_parameter() {
  return getRuleContexts<httpParser::Transfer_parameterContext>();
}

httpParser::Transfer_parameterContext* httpParser::Transfer_extensionContext::transfer_parameter(size_t i) {
  return getRuleContext<httpParser::Transfer_parameterContext>(i);
}


size_t httpParser::Transfer_extensionContext::getRuleIndex() const {
  return httpParser::RuleTransfer_extension;
}


antlrcpp::Any httpParser::Transfer_extensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTransfer_extension(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Transfer_extensionContext* httpParser::transfer_extension() {
  Transfer_extensionContext *_localctx = _tracker.createInstance<Transfer_extensionContext>(_ctx, getState());
  enterRule(_localctx, 122, httpParser::RuleTransfer_extension);

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
    setState(712);
    token();
    setState(720);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(713);
        ows();
        setState(714);
        match(httpParser::T__4);
        setState(715);
        ows();
        setState(716);
        transfer_parameter(); 
      }
      setState(722);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transfer_parameterContext ------------------------------------------------------------------

httpParser::Transfer_parameterContext::Transfer_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::TokenContext *> httpParser::Transfer_parameterContext::token() {
  return getRuleContexts<httpParser::TokenContext>();
}

httpParser::TokenContext* httpParser::Transfer_parameterContext::token(size_t i) {
  return getRuleContext<httpParser::TokenContext>(i);
}

std::vector<httpParser::BwsContext *> httpParser::Transfer_parameterContext::bws() {
  return getRuleContexts<httpParser::BwsContext>();
}

httpParser::BwsContext* httpParser::Transfer_parameterContext::bws(size_t i) {
  return getRuleContext<httpParser::BwsContext>(i);
}

httpParser::Quoted_stringContext* httpParser::Transfer_parameterContext::quoted_string() {
  return getRuleContext<httpParser::Quoted_stringContext>(0);
}


size_t httpParser::Transfer_parameterContext::getRuleIndex() const {
  return httpParser::RuleTransfer_parameter;
}


antlrcpp::Any httpParser::Transfer_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitTransfer_parameter(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Transfer_parameterContext* httpParser::transfer_parameter() {
  Transfer_parameterContext *_localctx = _tracker.createInstance<Transfer_parameterContext>(_ctx, getState());
  enterRule(_localctx, 124, httpParser::RuleTransfer_parameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(723);
    token();
    setState(724);
    bws();
    setState(725);
    match(httpParser::T__5);
    setState(726);
    bws();
    setState(729);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case httpParser::T__2:
      case httpParser::T__15:
      case httpParser::T__19:
      case httpParser::T__34:
      case httpParser::T__35:
      case httpParser::T__36:
      case httpParser::T__37:
      case httpParser::T__38:
      case httpParser::T__39:
      case httpParser::T__40:
      case httpParser::T__41:
      case httpParser::T__42:
      case httpParser::T__43:
      case httpParser::T__44:
      case httpParser::ASTERISK_FORM:
      case httpParser::ALPHA:
      case httpParser::DIGIT: {
        setState(727);
        token();
        break;
      }

      case httpParser::DQUOTE: {
        setState(728);
        quoted_string();
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

//----------------- UriContext ------------------------------------------------------------------

httpParser::UriContext::UriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::SchemeContext* httpParser::UriContext::scheme() {
  return getRuleContext<httpParser::SchemeContext>(0);
}

httpParser::Hier_partContext* httpParser::UriContext::hier_part() {
  return getRuleContext<httpParser::Hier_partContext>(0);
}

httpParser::QueryContext* httpParser::UriContext::query() {
  return getRuleContext<httpParser::QueryContext>(0);
}

httpParser::Fragment_1Context* httpParser::UriContext::fragment_1() {
  return getRuleContext<httpParser::Fragment_1Context>(0);
}


size_t httpParser::UriContext::getRuleIndex() const {
  return httpParser::RuleUri;
}


antlrcpp::Any httpParser::UriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitUri(this);
  else
    return visitor->visitChildren(this);
}

httpParser::UriContext* httpParser::uri() {
  UriContext *_localctx = _tracker.createInstance<UriContext>(_ctx, getState());
  enterRule(_localctx, 126, httpParser::RuleUri);
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
    setState(731);
    scheme();
    setState(732);
    match(httpParser::T__3);
    setState(733);
    hier_part();
    setState(736);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__14) {
      setState(734);
      match(httpParser::T__14);
      setState(735);
      query();
    }
    setState(740);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__15) {
      setState(738);
      match(httpParser::T__15);
      setState(739);
      fragment_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Hier_partContext ------------------------------------------------------------------

httpParser::Hier_partContext::Hier_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::AuthorityContext* httpParser::Hier_partContext::authority() {
  return getRuleContext<httpParser::AuthorityContext>(0);
}

httpParser::Path_abemptyContext* httpParser::Hier_partContext::path_abempty() {
  return getRuleContext<httpParser::Path_abemptyContext>(0);
}

httpParser::Path_absoluteContext* httpParser::Hier_partContext::path_absolute() {
  return getRuleContext<httpParser::Path_absoluteContext>(0);
}

httpParser::Path_rootlessContext* httpParser::Hier_partContext::path_rootless() {
  return getRuleContext<httpParser::Path_rootlessContext>(0);
}

httpParser::Path_emptyContext* httpParser::Hier_partContext::path_empty() {
  return getRuleContext<httpParser::Path_emptyContext>(0);
}


size_t httpParser::Hier_partContext::getRuleIndex() const {
  return httpParser::RuleHier_part;
}


antlrcpp::Any httpParser::Hier_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHier_part(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Hier_partContext* httpParser::hier_part() {
  Hier_partContext *_localctx = _tracker.createInstance<Hier_partContext>(_ctx, getState());
  enterRule(_localctx, 128, httpParser::RuleHier_part);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(751);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(742);
      match(httpParser::T__1);
      setState(743);
      match(httpParser::T__1);
      setState(745);
      authority();
      setState(746);
      path_abempty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(748);
      path_absolute();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(749);
      path_rootless();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(750);
      path_empty();
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

//----------------- Uri_referenceContext ------------------------------------------------------------------

httpParser::Uri_referenceContext::Uri_referenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::UriContext* httpParser::Uri_referenceContext::uri() {
  return getRuleContext<httpParser::UriContext>(0);
}

httpParser::Relative_refContext* httpParser::Uri_referenceContext::relative_ref() {
  return getRuleContext<httpParser::Relative_refContext>(0);
}


size_t httpParser::Uri_referenceContext::getRuleIndex() const {
  return httpParser::RuleUri_reference;
}


antlrcpp::Any httpParser::Uri_referenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitUri_reference(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Uri_referenceContext* httpParser::uri_reference() {
  Uri_referenceContext *_localctx = _tracker.createInstance<Uri_referenceContext>(_ctx, getState());
  enterRule(_localctx, 130, httpParser::RuleUri_reference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(755);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(753);
      uri();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(754);
      relative_ref();
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

//----------------- Absolute_uriContext ------------------------------------------------------------------

httpParser::Absolute_uriContext::Absolute_uriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::SchemeContext* httpParser::Absolute_uriContext::scheme() {
  return getRuleContext<httpParser::SchemeContext>(0);
}

httpParser::Hier_partContext* httpParser::Absolute_uriContext::hier_part() {
  return getRuleContext<httpParser::Hier_partContext>(0);
}

httpParser::QueryContext* httpParser::Absolute_uriContext::query() {
  return getRuleContext<httpParser::QueryContext>(0);
}


size_t httpParser::Absolute_uriContext::getRuleIndex() const {
  return httpParser::RuleAbsolute_uri;
}


antlrcpp::Any httpParser::Absolute_uriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitAbsolute_uri(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Absolute_uriContext* httpParser::absolute_uri() {
  Absolute_uriContext *_localctx = _tracker.createInstance<Absolute_uriContext>(_ctx, getState());
  enterRule(_localctx, 132, httpParser::RuleAbsolute_uri);
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
    setState(757);
    scheme();
    setState(758);
    match(httpParser::T__3);
    setState(759);
    hier_part();
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__14) {
      setState(760);
      match(httpParser::T__14);
      setState(761);
      query();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relative_refContext ------------------------------------------------------------------

httpParser::Relative_refContext::Relative_refContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Relative_partContext* httpParser::Relative_refContext::relative_part() {
  return getRuleContext<httpParser::Relative_partContext>(0);
}

httpParser::QueryContext* httpParser::Relative_refContext::query() {
  return getRuleContext<httpParser::QueryContext>(0);
}

httpParser::Fragment_1Context* httpParser::Relative_refContext::fragment_1() {
  return getRuleContext<httpParser::Fragment_1Context>(0);
}


size_t httpParser::Relative_refContext::getRuleIndex() const {
  return httpParser::RuleRelative_ref;
}


antlrcpp::Any httpParser::Relative_refContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitRelative_ref(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Relative_refContext* httpParser::relative_ref() {
  Relative_refContext *_localctx = _tracker.createInstance<Relative_refContext>(_ctx, getState());
  enterRule(_localctx, 134, httpParser::RuleRelative_ref);
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
    setState(764);
    relative_part();
    setState(767);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__14) {
      setState(765);
      match(httpParser::T__14);
      setState(766);
      query();
    }
    setState(771);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__15) {
      setState(769);
      match(httpParser::T__15);
      setState(770);
      fragment_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relative_partContext ------------------------------------------------------------------

httpParser::Relative_partContext::Relative_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::AuthorityContext* httpParser::Relative_partContext::authority() {
  return getRuleContext<httpParser::AuthorityContext>(0);
}

httpParser::Path_abemptyContext* httpParser::Relative_partContext::path_abempty() {
  return getRuleContext<httpParser::Path_abemptyContext>(0);
}

httpParser::Path_absoluteContext* httpParser::Relative_partContext::path_absolute() {
  return getRuleContext<httpParser::Path_absoluteContext>(0);
}

httpParser::Path_noschemeContext* httpParser::Relative_partContext::path_noscheme() {
  return getRuleContext<httpParser::Path_noschemeContext>(0);
}

httpParser::Path_emptyContext* httpParser::Relative_partContext::path_empty() {
  return getRuleContext<httpParser::Path_emptyContext>(0);
}


size_t httpParser::Relative_partContext::getRuleIndex() const {
  return httpParser::RuleRelative_part;
}


antlrcpp::Any httpParser::Relative_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitRelative_part(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Relative_partContext* httpParser::relative_part() {
  Relative_partContext *_localctx = _tracker.createInstance<Relative_partContext>(_ctx, getState());
  enterRule(_localctx, 136, httpParser::RuleRelative_part);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(782);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(773);
      match(httpParser::T__1);
      setState(774);
      match(httpParser::T__1);
      setState(776);
      authority();
      setState(777);
      path_abempty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(779);
      path_absolute();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(780);
      path_noscheme();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(781);
      path_empty();
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

//----------------- SchemeContext ------------------------------------------------------------------

httpParser::SchemeContext::SchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::SchemeContext::ALPHA() {
  return getTokens(httpParser::ALPHA);
}

tree::TerminalNode* httpParser::SchemeContext::ALPHA(size_t i) {
  return getToken(httpParser::ALPHA, i);
}

std::vector<tree::TerminalNode *> httpParser::SchemeContext::DIGIT() {
  return getTokens(httpParser::DIGIT);
}

tree::TerminalNode* httpParser::SchemeContext::DIGIT(size_t i) {
  return getToken(httpParser::DIGIT, i);
}


size_t httpParser::SchemeContext::getRuleIndex() const {
  return httpParser::RuleScheme;
}


antlrcpp::Any httpParser::SchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitScheme(this);
  else
    return visitor->visitChildren(this);
}

httpParser::SchemeContext* httpParser::scheme() {
  SchemeContext *_localctx = _tracker.createInstance<SchemeContext>(_ctx, getState());
  enterRule(_localctx, 138, httpParser::RuleScheme);
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
    setState(784);
    match(httpParser::ALPHA);
    setState(788);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__38)
      | (1ULL << httpParser::T__39))) != 0) || _la == httpParser::ALPHA

    || _la == httpParser::DIGIT) {
      setState(785);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__2)
        | (1ULL << httpParser::T__38)
        | (1ULL << httpParser::T__39))) != 0) || _la == httpParser::ALPHA

      || _la == httpParser::DIGIT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(790);
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

//----------------- AuthorityContext ------------------------------------------------------------------

httpParser::AuthorityContext::AuthorityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Uri_hostContext* httpParser::AuthorityContext::uri_host() {
  return getRuleContext<httpParser::Uri_hostContext>(0);
}

httpParser::UserinfoContext* httpParser::AuthorityContext::userinfo() {
  return getRuleContext<httpParser::UserinfoContext>(0);
}

httpParser::PortContext* httpParser::AuthorityContext::port() {
  return getRuleContext<httpParser::PortContext>(0);
}


size_t httpParser::AuthorityContext::getRuleIndex() const {
  return httpParser::RuleAuthority;
}


antlrcpp::Any httpParser::AuthorityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitAuthority(this);
  else
    return visitor->visitChildren(this);
}

httpParser::AuthorityContext* httpParser::authority() {
  AuthorityContext *_localctx = _tracker.createInstance<AuthorityContext>(_ctx, getState());
  enterRule(_localctx, 140, httpParser::RuleAuthority);
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
    setState(794);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      setState(791);
      userinfo();
      setState(792);
      match(httpParser::T__65);
      break;
    }

    default:
      break;
    }
    setState(796);
    uri_host();
    setState(799);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == httpParser::T__3) {
      setState(797);
      match(httpParser::T__3);
      setState(798);
      port();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserinfoContext ------------------------------------------------------------------

httpParser::UserinfoContext::UserinfoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::UnreservedContext *> httpParser::UserinfoContext::unreserved() {
  return getRuleContexts<httpParser::UnreservedContext>();
}

httpParser::UnreservedContext* httpParser::UserinfoContext::unreserved(size_t i) {
  return getRuleContext<httpParser::UnreservedContext>(i);
}

std::vector<httpParser::Pct_encodedContext *> httpParser::UserinfoContext::pct_encoded() {
  return getRuleContexts<httpParser::Pct_encodedContext>();
}

httpParser::Pct_encodedContext* httpParser::UserinfoContext::pct_encoded(size_t i) {
  return getRuleContext<httpParser::Pct_encodedContext>(i);
}

std::vector<tree::TerminalNode *> httpParser::UserinfoContext::SUB_DELIMS() {
  return getTokens(httpParser::SUB_DELIMS);
}

tree::TerminalNode* httpParser::UserinfoContext::SUB_DELIMS(size_t i) {
  return getToken(httpParser::SUB_DELIMS, i);
}


size_t httpParser::UserinfoContext::getRuleIndex() const {
  return httpParser::RuleUserinfo;
}


antlrcpp::Any httpParser::UserinfoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitUserinfo(this);
  else
    return visitor->visitChildren(this);
}

httpParser::UserinfoContext* httpParser::userinfo() {
  UserinfoContext *_localctx = _tracker.createInstance<UserinfoContext>(_ctx, getState());
  enterRule(_localctx, 142, httpParser::RuleUserinfo);
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
    setState(807);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__3)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (httpParser::SUB_DELIMS - 86))
      | (1ULL << (httpParser::ALPHA - 86))
      | (1ULL << (httpParser::DIGIT - 86)))) != 0)) {
      setState(805);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__2:
        case httpParser::T__39:
        case httpParser::T__41:
        case httpParser::T__44:
        case httpParser::ALPHA:
        case httpParser::DIGIT: {
          setState(801);
          unreserved();
          break;
        }

        case httpParser::T__35: {
          setState(802);
          pct_encoded();
          break;
        }

        case httpParser::SUB_DELIMS: {
          setState(803);
          match(httpParser::SUB_DELIMS);
          break;
        }

        case httpParser::T__3: {
          setState(804);
          match(httpParser::T__3);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(809);
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

//----------------- Uri_hostContext ------------------------------------------------------------------

httpParser::Uri_hostContext::Uri_hostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Ip_literalContext* httpParser::Uri_hostContext::ip_literal() {
  return getRuleContext<httpParser::Ip_literalContext>(0);
}

httpParser::Ipv4addressContext* httpParser::Uri_hostContext::ipv4address() {
  return getRuleContext<httpParser::Ipv4addressContext>(0);
}

httpParser::Reg_nameContext* httpParser::Uri_hostContext::reg_name() {
  return getRuleContext<httpParser::Reg_nameContext>(0);
}


size_t httpParser::Uri_hostContext::getRuleIndex() const {
  return httpParser::RuleUri_host;
}


antlrcpp::Any httpParser::Uri_hostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitUri_host(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Uri_hostContext* httpParser::uri_host() {
  Uri_hostContext *_localctx = _tracker.createInstance<Uri_hostContext>(_ctx, getState());
  enterRule(_localctx, 144, httpParser::RuleUri_host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(813);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(810);
      ip_literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(811);
      ipv4address();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(812);
      reg_name();
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

//----------------- PortContext ------------------------------------------------------------------

httpParser::PortContext::PortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::PortContext::DIGIT() {
  return getTokens(httpParser::DIGIT);
}

tree::TerminalNode* httpParser::PortContext::DIGIT(size_t i) {
  return getToken(httpParser::DIGIT, i);
}


size_t httpParser::PortContext::getRuleIndex() const {
  return httpParser::RulePort;
}


antlrcpp::Any httpParser::PortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPort(this);
  else
    return visitor->visitChildren(this);
}

httpParser::PortContext* httpParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 146, httpParser::RulePort);
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
    setState(818);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::DIGIT) {
      setState(815);
      match(httpParser::DIGIT);
      setState(820);
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

//----------------- Ip_literalContext ------------------------------------------------------------------

httpParser::Ip_literalContext::Ip_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Ipv6addressContext* httpParser::Ip_literalContext::ipv6address() {
  return getRuleContext<httpParser::Ipv6addressContext>(0);
}

httpParser::IpvfutureContext* httpParser::Ip_literalContext::ipvfuture() {
  return getRuleContext<httpParser::IpvfutureContext>(0);
}


size_t httpParser::Ip_literalContext::getRuleIndex() const {
  return httpParser::RuleIp_literal;
}


antlrcpp::Any httpParser::Ip_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitIp_literal(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Ip_literalContext* httpParser::ip_literal() {
  Ip_literalContext *_localctx = _tracker.createInstance<Ip_literalContext>(_ctx, getState());
  enterRule(_localctx, 148, httpParser::RuleIp_literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(httpParser::T__66);
    setState(824);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case httpParser::T__3:
      case httpParser::T__24:
      case httpParser::T__25:
      case httpParser::T__30:
      case httpParser::T__31:
      case httpParser::T__45:
      case httpParser::T__46:
      case httpParser::T__53:
      case httpParser::T__54:
      case httpParser::T__59:
      case httpParser::T__60:
      case httpParser::T__72:
      case httpParser::T__73:
      case httpParser::DIGIT: {
        setState(822);
        ipv6address();
        break;
      }

      case httpParser::T__68:
      case httpParser::T__69: {
        setState(823);
        ipvfuture();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(826);
    match(httpParser::T__67);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IpvfutureContext ------------------------------------------------------------------

httpParser::IpvfutureContext::IpvfutureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::HexdigContext *> httpParser::IpvfutureContext::hexdig() {
  return getRuleContexts<httpParser::HexdigContext>();
}

httpParser::HexdigContext* httpParser::IpvfutureContext::hexdig(size_t i) {
  return getRuleContext<httpParser::HexdigContext>(i);
}

std::vector<httpParser::UnreservedContext *> httpParser::IpvfutureContext::unreserved() {
  return getRuleContexts<httpParser::UnreservedContext>();
}

httpParser::UnreservedContext* httpParser::IpvfutureContext::unreserved(size_t i) {
  return getRuleContext<httpParser::UnreservedContext>(i);
}

std::vector<tree::TerminalNode *> httpParser::IpvfutureContext::SUB_DELIMS() {
  return getTokens(httpParser::SUB_DELIMS);
}

tree::TerminalNode* httpParser::IpvfutureContext::SUB_DELIMS(size_t i) {
  return getToken(httpParser::SUB_DELIMS, i);
}


size_t httpParser::IpvfutureContext::getRuleIndex() const {
  return httpParser::RuleIpvfuture;
}


antlrcpp::Any httpParser::IpvfutureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitIpvfuture(this);
  else
    return visitor->visitChildren(this);
}

httpParser::IpvfutureContext* httpParser::ipvfuture() {
  IpvfutureContext *_localctx = _tracker.createInstance<IpvfutureContext>(_ctx, getState());
  enterRule(_localctx, 150, httpParser::RuleIpvfuture);
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
    setState(828);
    _la = _input->LA(1);
    if (!(_la == httpParser::T__68

    || _la == httpParser::T__69)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(830); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(829);
      hexdig();
      setState(832); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__24)
      | (1ULL << httpParser::T__25)
      | (1ULL << httpParser::T__30)
      | (1ULL << httpParser::T__31)
      | (1ULL << httpParser::T__45)
      | (1ULL << httpParser::T__46)
      | (1ULL << httpParser::T__53)
      | (1ULL << httpParser::T__54)
      | (1ULL << httpParser::T__59)
      | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
      | (1ULL << (httpParser::T__73 - 73))
      | (1ULL << (httpParser::DIGIT - 73)))) != 0));
    setState(834);
    match(httpParser::T__2);
    setState(838); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(838);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__2:
        case httpParser::T__39:
        case httpParser::T__41:
        case httpParser::T__44:
        case httpParser::ALPHA:
        case httpParser::DIGIT: {
          setState(835);
          unreserved();
          break;
        }

        case httpParser::SUB_DELIMS: {
          setState(836);
          match(httpParser::SUB_DELIMS);
          break;
        }

        case httpParser::T__3: {
          setState(837);
          match(httpParser::T__3);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(840); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__3)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (httpParser::SUB_DELIMS - 86))
      | (1ULL << (httpParser::ALPHA - 86))
      | (1ULL << (httpParser::DIGIT - 86)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ipv6addressContext ------------------------------------------------------------------

httpParser::Ipv6addressContext::Ipv6addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Ls32Context* httpParser::Ipv6addressContext::ls32() {
  return getRuleContext<httpParser::Ls32Context>(0);
}

std::vector<httpParser::H16Context *> httpParser::Ipv6addressContext::h16() {
  return getRuleContexts<httpParser::H16Context>();
}

httpParser::H16Context* httpParser::Ipv6addressContext::h16(size_t i) {
  return getRuleContext<httpParser::H16Context>(i);
}


size_t httpParser::Ipv6addressContext::getRuleIndex() const {
  return httpParser::RuleIpv6address;
}


antlrcpp::Any httpParser::Ipv6addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitIpv6address(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Ipv6addressContext* httpParser::ipv6address() {
  Ipv6addressContext *_localctx = _tracker.createInstance<Ipv6addressContext>(_ctx, getState());
  enterRule(_localctx, 152, httpParser::RuleIpv6address);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(842);
      h16();
      setState(843);
      match(httpParser::T__3);

      setState(845);
      h16();
      setState(846);
      match(httpParser::T__3);

      setState(848);
      h16();
      setState(849);
      match(httpParser::T__3);

      setState(851);
      h16();
      setState(852);
      match(httpParser::T__3);

      setState(854);
      h16();
      setState(855);
      match(httpParser::T__3);

      setState(857);
      h16();
      setState(858);
      match(httpParser::T__3);
      setState(860);
      ls32();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(862);
      match(httpParser::T__3);
      setState(863);
      match(httpParser::T__3);

      setState(865);
      h16();
      setState(866);
      match(httpParser::T__3);

      setState(868);
      h16();
      setState(869);
      match(httpParser::T__3);

      setState(871);
      h16();
      setState(872);
      match(httpParser::T__3);

      setState(874);
      h16();
      setState(875);
      match(httpParser::T__3);

      setState(877);
      h16();
      setState(878);
      match(httpParser::T__3);
      setState(880);
      ls32();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(883);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(882);
        h16();
      }

      setState(885);
      match(httpParser::T__3);
      setState(886);
      match(httpParser::T__3);

      setState(888);
      h16();
      setState(889);
      match(httpParser::T__3);

      setState(891);
      h16();
      setState(892);
      match(httpParser::T__3);

      setState(894);
      h16();
      setState(895);
      match(httpParser::T__3);

      setState(897);
      h16();
      setState(898);
      match(httpParser::T__3);
      setState(900);
      ls32();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(908);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(905);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
        case 1: {
          setState(902);
          h16();
          setState(903);
          match(httpParser::T__3);
          break;
        }

        default:
          break;
        }
        setState(907);
        h16();
      }

      setState(910);
      match(httpParser::T__3);
      setState(911);
      match(httpParser::T__3);

      setState(913);
      h16();
      setState(914);
      match(httpParser::T__3);

      setState(916);
      h16();
      setState(917);
      match(httpParser::T__3);

      setState(919);
      h16();
      setState(920);
      match(httpParser::T__3);
      setState(922);
      ls32();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(938);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(935);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
        case 1: {
          setState(924);
          h16();
          setState(925);
          match(httpParser::T__3);

          setState(927);
          h16();
          setState(928);
          match(httpParser::T__3);
          break;
        }

        case 2: {
          setState(933);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
          case 1: {
            setState(930);
            h16();
            setState(931);
            match(httpParser::T__3);
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        }
        setState(937);
        h16();
      }

      setState(940);
      match(httpParser::T__3);
      setState(941);
      match(httpParser::T__3);

      setState(943);
      h16();
      setState(944);
      match(httpParser::T__3);

      setState(946);
      h16();
      setState(947);
      match(httpParser::T__3);
      setState(949);
      ls32();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(974);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(971);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
        case 1: {
          setState(951);
          h16();
          setState(952);
          match(httpParser::T__3);

          setState(954);
          h16();
          setState(955);
          match(httpParser::T__3);

          setState(957);
          h16();
          setState(958);
          match(httpParser::T__3);
          break;
        }

        case 2: {
          setState(960);
          h16();
          setState(961);
          match(httpParser::T__3);

          setState(963);
          h16();
          setState(964);
          match(httpParser::T__3);
          break;
        }

        case 3: {
          setState(969);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
          case 1: {
            setState(966);
            h16();
            setState(967);
            match(httpParser::T__3);
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        }
        setState(973);
        h16();
      }

      setState(976);
      match(httpParser::T__3);
      setState(977);
      match(httpParser::T__3);
      setState(979);
      h16();
      setState(980);
      match(httpParser::T__3);
      setState(981);
      ls32();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1018);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(1015);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
        case 1: {
          setState(983);
          h16();
          setState(984);
          match(httpParser::T__3);

          setState(986);
          h16();
          setState(987);
          match(httpParser::T__3);

          setState(989);
          h16();
          setState(990);
          match(httpParser::T__3);

          setState(992);
          h16();
          setState(993);
          match(httpParser::T__3);
          break;
        }

        case 2: {
          setState(995);
          h16();
          setState(996);
          match(httpParser::T__3);

          setState(998);
          h16();
          setState(999);
          match(httpParser::T__3);

          setState(1001);
          h16();
          setState(1002);
          match(httpParser::T__3);
          break;
        }

        case 3: {
          setState(1004);
          h16();
          setState(1005);
          match(httpParser::T__3);

          setState(1007);
          h16();
          setState(1008);
          match(httpParser::T__3);
          break;
        }

        case 4: {
          setState(1013);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
          case 1: {
            setState(1010);
            h16();
            setState(1011);
            match(httpParser::T__3);
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        }
        setState(1017);
        h16();
      }

      setState(1020);
      match(httpParser::T__3);
      setState(1021);
      match(httpParser::T__3);
      setState(1023);
      ls32();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1074);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(1071);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
        case 1: {
          setState(1024);
          h16();
          setState(1025);
          match(httpParser::T__3);

          setState(1027);
          h16();
          setState(1028);
          match(httpParser::T__3);

          setState(1030);
          h16();
          setState(1031);
          match(httpParser::T__3);

          setState(1033);
          h16();
          setState(1034);
          match(httpParser::T__3);

          setState(1036);
          h16();
          setState(1037);
          match(httpParser::T__3);
          break;
        }

        case 2: {
          setState(1039);
          h16();
          setState(1040);
          match(httpParser::T__3);

          setState(1042);
          h16();
          setState(1043);
          match(httpParser::T__3);

          setState(1045);
          h16();
          setState(1046);
          match(httpParser::T__3);

          setState(1048);
          h16();
          setState(1049);
          match(httpParser::T__3);
          break;
        }

        case 3: {
          setState(1051);
          h16();
          setState(1052);
          match(httpParser::T__3);

          setState(1054);
          h16();
          setState(1055);
          match(httpParser::T__3);

          setState(1057);
          h16();
          setState(1058);
          match(httpParser::T__3);
          break;
        }

        case 4: {
          setState(1060);
          h16();
          setState(1061);
          match(httpParser::T__3);

          setState(1063);
          h16();
          setState(1064);
          match(httpParser::T__3);
          break;
        }

        case 5: {
          setState(1069);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
          case 1: {
            setState(1066);
            h16();
            setState(1067);
            match(httpParser::T__3);
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        }
        setState(1073);
        h16();
      }

      setState(1076);
      match(httpParser::T__3);
      setState(1077);
      match(httpParser::T__3);
      setState(1079);
      h16();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1148);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(1145);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
        case 1: {
          setState(1080);
          h16();
          setState(1081);
          match(httpParser::T__3);

          setState(1083);
          h16();
          setState(1084);
          match(httpParser::T__3);

          setState(1086);
          h16();
          setState(1087);
          match(httpParser::T__3);

          setState(1089);
          h16();
          setState(1090);
          match(httpParser::T__3);

          setState(1092);
          h16();
          setState(1093);
          match(httpParser::T__3);

          setState(1095);
          h16();
          setState(1096);
          match(httpParser::T__3);
          break;
        }

        case 2: {
          setState(1098);
          h16();
          setState(1099);
          match(httpParser::T__3);

          setState(1101);
          h16();
          setState(1102);
          match(httpParser::T__3);

          setState(1104);
          h16();
          setState(1105);
          match(httpParser::T__3);

          setState(1107);
          h16();
          setState(1108);
          match(httpParser::T__3);

          setState(1110);
          h16();
          setState(1111);
          match(httpParser::T__3);
          break;
        }

        case 3: {
          setState(1113);
          h16();
          setState(1114);
          match(httpParser::T__3);

          setState(1116);
          h16();
          setState(1117);
          match(httpParser::T__3);

          setState(1119);
          h16();
          setState(1120);
          match(httpParser::T__3);

          setState(1122);
          h16();
          setState(1123);
          match(httpParser::T__3);
          break;
        }

        case 4: {
          setState(1125);
          h16();
          setState(1126);
          match(httpParser::T__3);

          setState(1128);
          h16();
          setState(1129);
          match(httpParser::T__3);

          setState(1131);
          h16();
          setState(1132);
          match(httpParser::T__3);
          break;
        }

        case 5: {
          setState(1134);
          h16();
          setState(1135);
          match(httpParser::T__3);

          setState(1137);
          h16();
          setState(1138);
          match(httpParser::T__3);
          break;
        }

        case 6: {
          setState(1143);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
          case 1: {
            setState(1140);
            h16();
            setState(1141);
            match(httpParser::T__3);
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        }
        setState(1147);
        h16();
      }

      setState(1150);
      match(httpParser::T__3);
      setState(1151);
      match(httpParser::T__3);
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

//----------------- H16Context ------------------------------------------------------------------

httpParser::H16Context::H16Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::HexdigContext *> httpParser::H16Context::hexdig() {
  return getRuleContexts<httpParser::HexdigContext>();
}

httpParser::HexdigContext* httpParser::H16Context::hexdig(size_t i) {
  return getRuleContext<httpParser::HexdigContext>(i);
}


size_t httpParser::H16Context::getRuleIndex() const {
  return httpParser::RuleH16;
}


antlrcpp::Any httpParser::H16Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitH16(this);
  else
    return visitor->visitChildren(this);
}

httpParser::H16Context* httpParser::h16() {
  H16Context *_localctx = _tracker.createInstance<H16Context>(_ctx, getState());
  enterRule(_localctx, 154, httpParser::RuleH16);
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
    setState(1154);
    hexdig();
    setState(1165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      setState(1155);
      hexdig();
      setState(1156);
      hexdig();
      setState(1157);
      hexdig();
      break;
    }

    case 2: {
      setState(1159);
      hexdig();
      setState(1160);
      hexdig();
      break;
    }

    case 3: {
      setState(1163);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << httpParser::T__24)
        | (1ULL << httpParser::T__25)
        | (1ULL << httpParser::T__30)
        | (1ULL << httpParser::T__31)
        | (1ULL << httpParser::T__45)
        | (1ULL << httpParser::T__46)
        | (1ULL << httpParser::T__53)
        | (1ULL << httpParser::T__54)
        | (1ULL << httpParser::T__59)
        | (1ULL << httpParser::T__60))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (httpParser::T__72 - 73))
        | (1ULL << (httpParser::T__73 - 73))
        | (1ULL << (httpParser::DIGIT - 73)))) != 0)) {
        setState(1162);
        hexdig();
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

//----------------- Ls32Context ------------------------------------------------------------------

httpParser::Ls32Context::Ls32Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::H16Context *> httpParser::Ls32Context::h16() {
  return getRuleContexts<httpParser::H16Context>();
}

httpParser::H16Context* httpParser::Ls32Context::h16(size_t i) {
  return getRuleContext<httpParser::H16Context>(i);
}

httpParser::Ipv4addressContext* httpParser::Ls32Context::ipv4address() {
  return getRuleContext<httpParser::Ipv4addressContext>(0);
}


size_t httpParser::Ls32Context::getRuleIndex() const {
  return httpParser::RuleLs32;
}


antlrcpp::Any httpParser::Ls32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitLs32(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Ls32Context* httpParser::ls32() {
  Ls32Context *_localctx = _tracker.createInstance<Ls32Context>(_ctx, getState());
  enterRule(_localctx, 156, httpParser::RuleLs32);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1167);
      h16();
      setState(1168);
      match(httpParser::T__3);
      setState(1169);
      h16();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1171);
      ipv4address();
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

//----------------- Ipv4addressContext ------------------------------------------------------------------

httpParser::Ipv4addressContext::Ipv4addressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::Dec_octetContext *> httpParser::Ipv4addressContext::dec_octet() {
  return getRuleContexts<httpParser::Dec_octetContext>();
}

httpParser::Dec_octetContext* httpParser::Ipv4addressContext::dec_octet(size_t i) {
  return getRuleContext<httpParser::Dec_octetContext>(i);
}


size_t httpParser::Ipv4addressContext::getRuleIndex() const {
  return httpParser::RuleIpv4address;
}


antlrcpp::Any httpParser::Ipv4addressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitIpv4address(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Ipv4addressContext* httpParser::ipv4address() {
  Ipv4addressContext *_localctx = _tracker.createInstance<Ipv4addressContext>(_ctx, getState());
  enterRule(_localctx, 158, httpParser::RuleIpv4address);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1174);
    dec_octet();
    setState(1175);
    match(httpParser::T__2);
    setState(1176);
    dec_octet();
    setState(1177);
    match(httpParser::T__2);
    setState(1178);
    dec_octet();
    setState(1179);
    match(httpParser::T__2);
    setState(1180);
    dec_octet();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dec_octetContext ------------------------------------------------------------------

httpParser::Dec_octetContext::Dec_octetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> httpParser::Dec_octetContext::DIGIT() {
  return getTokens(httpParser::DIGIT);
}

tree::TerminalNode* httpParser::Dec_octetContext::DIGIT(size_t i) {
  return getToken(httpParser::DIGIT, i);
}

tree::TerminalNode* httpParser::Dec_octetContext::ONE_TO_NINE() {
  return getToken(httpParser::ONE_TO_NINE, 0);
}

tree::TerminalNode* httpParser::Dec_octetContext::ZERO_TO_FOUR() {
  return getToken(httpParser::ZERO_TO_FOUR, 0);
}

tree::TerminalNode* httpParser::Dec_octetContext::ZERO_TO_FIVE() {
  return getToken(httpParser::ZERO_TO_FIVE, 0);
}


size_t httpParser::Dec_octetContext::getRuleIndex() const {
  return httpParser::RuleDec_octet;
}


antlrcpp::Any httpParser::Dec_octetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitDec_octet(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Dec_octetContext* httpParser::dec_octet() {
  Dec_octetContext *_localctx = _tracker.createInstance<Dec_octetContext>(_ctx, getState());
  enterRule(_localctx, 160, httpParser::RuleDec_octet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1195);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1182);
      match(httpParser::DIGIT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1183);
      match(httpParser::ONE_TO_NINE);
      setState(1184);
      match(httpParser::DIGIT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1185);
      match(httpParser::T__21);

      setState(1186);
      match(httpParser::DIGIT);
      setState(1187);
      match(httpParser::DIGIT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1188);
      match(httpParser::T__70);
      setState(1189);
      match(httpParser::ZERO_TO_FOUR);
      setState(1190);
      match(httpParser::DIGIT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1191);
      match(httpParser::T__70);
      setState(1192);
      match(httpParser::T__71);
      setState(1194);
      match(httpParser::ZERO_TO_FIVE);
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

//----------------- Reg_nameContext ------------------------------------------------------------------

httpParser::Reg_nameContext::Reg_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::UnreservedContext *> httpParser::Reg_nameContext::unreserved() {
  return getRuleContexts<httpParser::UnreservedContext>();
}

httpParser::UnreservedContext* httpParser::Reg_nameContext::unreserved(size_t i) {
  return getRuleContext<httpParser::UnreservedContext>(i);
}

std::vector<httpParser::Pct_encodedContext *> httpParser::Reg_nameContext::pct_encoded() {
  return getRuleContexts<httpParser::Pct_encodedContext>();
}

httpParser::Pct_encodedContext* httpParser::Reg_nameContext::pct_encoded(size_t i) {
  return getRuleContext<httpParser::Pct_encodedContext>(i);
}

std::vector<tree::TerminalNode *> httpParser::Reg_nameContext::SUB_DELIMS() {
  return getTokens(httpParser::SUB_DELIMS);
}

tree::TerminalNode* httpParser::Reg_nameContext::SUB_DELIMS(size_t i) {
  return getToken(httpParser::SUB_DELIMS, i);
}


size_t httpParser::Reg_nameContext::getRuleIndex() const {
  return httpParser::RuleReg_name;
}


antlrcpp::Any httpParser::Reg_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitReg_name(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Reg_nameContext* httpParser::reg_name() {
  Reg_nameContext *_localctx = _tracker.createInstance<Reg_nameContext>(_ctx, getState());
  enterRule(_localctx, 162, httpParser::RuleReg_name);
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
    setState(1202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (httpParser::SUB_DELIMS - 86))
      | (1ULL << (httpParser::ALPHA - 86))
      | (1ULL << (httpParser::DIGIT - 86)))) != 0)) {
      setState(1200);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__2:
        case httpParser::T__39:
        case httpParser::T__41:
        case httpParser::T__44:
        case httpParser::ALPHA:
        case httpParser::DIGIT: {
          setState(1197);
          unreserved();
          break;
        }

        case httpParser::T__35: {
          setState(1198);
          pct_encoded();
          break;
        }

        case httpParser::SUB_DELIMS: {
          setState(1199);
          match(httpParser::SUB_DELIMS);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1204);
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

//----------------- PathContext ------------------------------------------------------------------

httpParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Path_abemptyContext* httpParser::PathContext::path_abempty() {
  return getRuleContext<httpParser::Path_abemptyContext>(0);
}

httpParser::Path_absoluteContext* httpParser::PathContext::path_absolute() {
  return getRuleContext<httpParser::Path_absoluteContext>(0);
}

httpParser::Path_noschemeContext* httpParser::PathContext::path_noscheme() {
  return getRuleContext<httpParser::Path_noschemeContext>(0);
}

httpParser::Path_rootlessContext* httpParser::PathContext::path_rootless() {
  return getRuleContext<httpParser::Path_rootlessContext>(0);
}

httpParser::Path_emptyContext* httpParser::PathContext::path_empty() {
  return getRuleContext<httpParser::Path_emptyContext>(0);
}


size_t httpParser::PathContext::getRuleIndex() const {
  return httpParser::RulePath;
}


antlrcpp::Any httpParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

httpParser::PathContext* httpParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 164, httpParser::RulePath);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1205);
      path_abempty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1206);
      path_absolute();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1207);
      path_noscheme();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1208);
      path_rootless();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1209);
      path_empty();
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

//----------------- Path_abemptyContext ------------------------------------------------------------------

httpParser::Path_abemptyContext::Path_abemptyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::SegmentContext *> httpParser::Path_abemptyContext::segment() {
  return getRuleContexts<httpParser::SegmentContext>();
}

httpParser::SegmentContext* httpParser::Path_abemptyContext::segment(size_t i) {
  return getRuleContext<httpParser::SegmentContext>(i);
}


size_t httpParser::Path_abemptyContext::getRuleIndex() const {
  return httpParser::RulePath_abempty;
}


antlrcpp::Any httpParser::Path_abemptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPath_abempty(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Path_abemptyContext* httpParser::path_abempty() {
  Path_abemptyContext *_localctx = _tracker.createInstance<Path_abemptyContext>(_ctx, getState());
  enterRule(_localctx, 166, httpParser::RulePath_abempty);
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
    setState(1216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__1) {
      setState(1212);
      match(httpParser::T__1);
      setState(1213);
      segment();
      setState(1218);
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

//----------------- Path_absoluteContext ------------------------------------------------------------------

httpParser::Path_absoluteContext::Path_absoluteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Segment_nzContext* httpParser::Path_absoluteContext::segment_nz() {
  return getRuleContext<httpParser::Segment_nzContext>(0);
}

std::vector<httpParser::SegmentContext *> httpParser::Path_absoluteContext::segment() {
  return getRuleContexts<httpParser::SegmentContext>();
}

httpParser::SegmentContext* httpParser::Path_absoluteContext::segment(size_t i) {
  return getRuleContext<httpParser::SegmentContext>(i);
}


size_t httpParser::Path_absoluteContext::getRuleIndex() const {
  return httpParser::RulePath_absolute;
}


antlrcpp::Any httpParser::Path_absoluteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPath_absolute(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Path_absoluteContext* httpParser::path_absolute() {
  Path_absoluteContext *_localctx = _tracker.createInstance<Path_absoluteContext>(_ctx, getState());
  enterRule(_localctx, 168, httpParser::RulePath_absolute);
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
    setState(1219);
    match(httpParser::T__1);
    setState(1228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__3)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (httpParser::T__65 - 66))
      | (1ULL << (httpParser::SUB_DELIMS - 66))
      | (1ULL << (httpParser::ALPHA - 66))
      | (1ULL << (httpParser::DIGIT - 66)))) != 0)) {
      setState(1220);
      segment_nz();
      setState(1225);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == httpParser::T__1) {
        setState(1221);
        match(httpParser::T__1);
        setState(1222);
        segment();
        setState(1227);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Path_noschemeContext ------------------------------------------------------------------

httpParser::Path_noschemeContext::Path_noschemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Segment_nz_ncContext* httpParser::Path_noschemeContext::segment_nz_nc() {
  return getRuleContext<httpParser::Segment_nz_ncContext>(0);
}

std::vector<httpParser::SegmentContext *> httpParser::Path_noschemeContext::segment() {
  return getRuleContexts<httpParser::SegmentContext>();
}

httpParser::SegmentContext* httpParser::Path_noschemeContext::segment(size_t i) {
  return getRuleContext<httpParser::SegmentContext>(i);
}


size_t httpParser::Path_noschemeContext::getRuleIndex() const {
  return httpParser::RulePath_noscheme;
}


antlrcpp::Any httpParser::Path_noschemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPath_noscheme(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Path_noschemeContext* httpParser::path_noscheme() {
  Path_noschemeContext *_localctx = _tracker.createInstance<Path_noschemeContext>(_ctx, getState());
  enterRule(_localctx, 170, httpParser::RulePath_noscheme);
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
    setState(1230);
    segment_nz_nc();
    setState(1235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__1) {
      setState(1231);
      match(httpParser::T__1);
      setState(1232);
      segment();
      setState(1237);
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

//----------------- Path_rootlessContext ------------------------------------------------------------------

httpParser::Path_rootlessContext::Path_rootlessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::Segment_nzContext* httpParser::Path_rootlessContext::segment_nz() {
  return getRuleContext<httpParser::Segment_nzContext>(0);
}

std::vector<httpParser::SegmentContext *> httpParser::Path_rootlessContext::segment() {
  return getRuleContexts<httpParser::SegmentContext>();
}

httpParser::SegmentContext* httpParser::Path_rootlessContext::segment(size_t i) {
  return getRuleContext<httpParser::SegmentContext>(i);
}


size_t httpParser::Path_rootlessContext::getRuleIndex() const {
  return httpParser::RulePath_rootless;
}


antlrcpp::Any httpParser::Path_rootlessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPath_rootless(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Path_rootlessContext* httpParser::path_rootless() {
  Path_rootlessContext *_localctx = _tracker.createInstance<Path_rootlessContext>(_ctx, getState());
  enterRule(_localctx, 172, httpParser::RulePath_rootless);
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
    setState(1238);
    segment_nz();
    setState(1243);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == httpParser::T__1) {
      setState(1239);
      match(httpParser::T__1);
      setState(1240);
      segment();
      setState(1245);
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

//----------------- Path_emptyContext ------------------------------------------------------------------

httpParser::Path_emptyContext::Path_emptyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t httpParser::Path_emptyContext::getRuleIndex() const {
  return httpParser::RulePath_empty;
}


antlrcpp::Any httpParser::Path_emptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPath_empty(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Path_emptyContext* httpParser::path_empty() {
  Path_emptyContext *_localctx = _tracker.createInstance<Path_emptyContext>(_ctx, getState());
  enterRule(_localctx, 174, httpParser::RulePath_empty);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SegmentContext ------------------------------------------------------------------

httpParser::SegmentContext::SegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::PcharContext *> httpParser::SegmentContext::pchar() {
  return getRuleContexts<httpParser::PcharContext>();
}

httpParser::PcharContext* httpParser::SegmentContext::pchar(size_t i) {
  return getRuleContext<httpParser::PcharContext>(i);
}


size_t httpParser::SegmentContext::getRuleIndex() const {
  return httpParser::RuleSegment;
}


antlrcpp::Any httpParser::SegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitSegment(this);
  else
    return visitor->visitChildren(this);
}

httpParser::SegmentContext* httpParser::segment() {
  SegmentContext *_localctx = _tracker.createInstance<SegmentContext>(_ctx, getState());
  enterRule(_localctx, 176, httpParser::RuleSegment);
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
    setState(1251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__3)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (httpParser::T__65 - 66))
      | (1ULL << (httpParser::SUB_DELIMS - 66))
      | (1ULL << (httpParser::ALPHA - 66))
      | (1ULL << (httpParser::DIGIT - 66)))) != 0)) {
      setState(1248);
      pchar();
      setState(1253);
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

//----------------- Segment_nzContext ------------------------------------------------------------------

httpParser::Segment_nzContext::Segment_nzContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::PcharContext *> httpParser::Segment_nzContext::pchar() {
  return getRuleContexts<httpParser::PcharContext>();
}

httpParser::PcharContext* httpParser::Segment_nzContext::pchar(size_t i) {
  return getRuleContext<httpParser::PcharContext>(i);
}


size_t httpParser::Segment_nzContext::getRuleIndex() const {
  return httpParser::RuleSegment_nz;
}


antlrcpp::Any httpParser::Segment_nzContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitSegment_nz(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Segment_nzContext* httpParser::segment_nz() {
  Segment_nzContext *_localctx = _tracker.createInstance<Segment_nzContext>(_ctx, getState());
  enterRule(_localctx, 178, httpParser::RuleSegment_nz);
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
    setState(1255); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1254);
      pchar();
      setState(1257); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__3)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (httpParser::T__65 - 66))
      | (1ULL << (httpParser::SUB_DELIMS - 66))
      | (1ULL << (httpParser::ALPHA - 66))
      | (1ULL << (httpParser::DIGIT - 66)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Segment_nz_ncContext ------------------------------------------------------------------

httpParser::Segment_nz_ncContext::Segment_nz_ncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::UnreservedContext *> httpParser::Segment_nz_ncContext::unreserved() {
  return getRuleContexts<httpParser::UnreservedContext>();
}

httpParser::UnreservedContext* httpParser::Segment_nz_ncContext::unreserved(size_t i) {
  return getRuleContext<httpParser::UnreservedContext>(i);
}

std::vector<httpParser::Pct_encodedContext *> httpParser::Segment_nz_ncContext::pct_encoded() {
  return getRuleContexts<httpParser::Pct_encodedContext>();
}

httpParser::Pct_encodedContext* httpParser::Segment_nz_ncContext::pct_encoded(size_t i) {
  return getRuleContext<httpParser::Pct_encodedContext>(i);
}

std::vector<tree::TerminalNode *> httpParser::Segment_nz_ncContext::SUB_DELIMS() {
  return getTokens(httpParser::SUB_DELIMS);
}

tree::TerminalNode* httpParser::Segment_nz_ncContext::SUB_DELIMS(size_t i) {
  return getToken(httpParser::SUB_DELIMS, i);
}


size_t httpParser::Segment_nz_ncContext::getRuleIndex() const {
  return httpParser::RuleSegment_nz_nc;
}


antlrcpp::Any httpParser::Segment_nz_ncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitSegment_nz_nc(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Segment_nz_ncContext* httpParser::segment_nz_nc() {
  Segment_nz_ncContext *_localctx = _tracker.createInstance<Segment_nz_ncContext>(_ctx, getState());
  enterRule(_localctx, 180, httpParser::RuleSegment_nz_nc);
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
    setState(1263); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1263);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__2:
        case httpParser::T__39:
        case httpParser::T__41:
        case httpParser::T__44:
        case httpParser::ALPHA:
        case httpParser::DIGIT: {
          setState(1259);
          unreserved();
          break;
        }

        case httpParser::T__35: {
          setState(1260);
          pct_encoded();
          break;
        }

        case httpParser::SUB_DELIMS: {
          setState(1261);
          match(httpParser::SUB_DELIMS);
          break;
        }

        case httpParser::T__65: {
          setState(1262);
          match(httpParser::T__65);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1265); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (httpParser::T__65 - 66))
      | (1ULL << (httpParser::SUB_DELIMS - 66))
      | (1ULL << (httpParser::ALPHA - 66))
      | (1ULL << (httpParser::DIGIT - 66)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PcharContext ------------------------------------------------------------------

httpParser::PcharContext::PcharContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

httpParser::UnreservedContext* httpParser::PcharContext::unreserved() {
  return getRuleContext<httpParser::UnreservedContext>(0);
}

httpParser::Pct_encodedContext* httpParser::PcharContext::pct_encoded() {
  return getRuleContext<httpParser::Pct_encodedContext>(0);
}

tree::TerminalNode* httpParser::PcharContext::SUB_DELIMS() {
  return getToken(httpParser::SUB_DELIMS, 0);
}


size_t httpParser::PcharContext::getRuleIndex() const {
  return httpParser::RulePchar;
}


antlrcpp::Any httpParser::PcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPchar(this);
  else
    return visitor->visitChildren(this);
}

httpParser::PcharContext* httpParser::pchar() {
  PcharContext *_localctx = _tracker.createInstance<PcharContext>(_ctx, getState());
  enterRule(_localctx, 182, httpParser::RulePchar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1272);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case httpParser::T__2:
      case httpParser::T__39:
      case httpParser::T__41:
      case httpParser::T__44:
      case httpParser::ALPHA:
      case httpParser::DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(1267);
        unreserved();
        break;
      }

      case httpParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(1268);
        pct_encoded();
        break;
      }

      case httpParser::SUB_DELIMS: {
        enterOuterAlt(_localctx, 3);
        setState(1269);
        match(httpParser::SUB_DELIMS);
        break;
      }

      case httpParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(1270);
        match(httpParser::T__3);
        break;
      }

      case httpParser::T__65: {
        enterOuterAlt(_localctx, 5);
        setState(1271);
        match(httpParser::T__65);
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

//----------------- QueryContext ------------------------------------------------------------------

httpParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::PcharContext *> httpParser::QueryContext::pchar() {
  return getRuleContexts<httpParser::PcharContext>();
}

httpParser::PcharContext* httpParser::QueryContext::pchar(size_t i) {
  return getRuleContext<httpParser::PcharContext>(i);
}


size_t httpParser::QueryContext::getRuleIndex() const {
  return httpParser::RuleQuery;
}


antlrcpp::Any httpParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

httpParser::QueryContext* httpParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 184, httpParser::RuleQuery);
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
    setState(1279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__1)
      | (1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__3)
      | (1ULL << httpParser::T__14)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (httpParser::T__65 - 66))
      | (1ULL << (httpParser::SUB_DELIMS - 66))
      | (1ULL << (httpParser::ALPHA - 66))
      | (1ULL << (httpParser::DIGIT - 66)))) != 0)) {
      setState(1277);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__2:
        case httpParser::T__3:
        case httpParser::T__35:
        case httpParser::T__39:
        case httpParser::T__41:
        case httpParser::T__44:
        case httpParser::T__65:
        case httpParser::SUB_DELIMS:
        case httpParser::ALPHA:
        case httpParser::DIGIT: {
          setState(1274);
          pchar();
          break;
        }

        case httpParser::T__1: {
          setState(1275);
          match(httpParser::T__1);
          break;
        }

        case httpParser::T__14: {
          setState(1276);
          match(httpParser::T__14);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1281);
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

//----------------- Fragment_1Context ------------------------------------------------------------------

httpParser::Fragment_1Context::Fragment_1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::PcharContext *> httpParser::Fragment_1Context::pchar() {
  return getRuleContexts<httpParser::PcharContext>();
}

httpParser::PcharContext* httpParser::Fragment_1Context::pchar(size_t i) {
  return getRuleContext<httpParser::PcharContext>(i);
}


size_t httpParser::Fragment_1Context::getRuleIndex() const {
  return httpParser::RuleFragment_1;
}


antlrcpp::Any httpParser::Fragment_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitFragment_1(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Fragment_1Context* httpParser::fragment_1() {
  Fragment_1Context *_localctx = _tracker.createInstance<Fragment_1Context>(_ctx, getState());
  enterRule(_localctx, 186, httpParser::RuleFragment_1);
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
    setState(1287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__1)
      | (1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__3)
      | (1ULL << httpParser::T__14)
      | (1ULL << httpParser::T__35)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (httpParser::T__65 - 66))
      | (1ULL << (httpParser::SUB_DELIMS - 66))
      | (1ULL << (httpParser::ALPHA - 66))
      | (1ULL << (httpParser::DIGIT - 66)))) != 0)) {
      setState(1285);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::T__2:
        case httpParser::T__3:
        case httpParser::T__35:
        case httpParser::T__39:
        case httpParser::T__41:
        case httpParser::T__44:
        case httpParser::T__65:
        case httpParser::SUB_DELIMS:
        case httpParser::ALPHA:
        case httpParser::DIGIT: {
          setState(1282);
          pchar();
          break;
        }

        case httpParser::T__1: {
          setState(1283);
          match(httpParser::T__1);
          break;
        }

        case httpParser::T__14: {
          setState(1284);
          match(httpParser::T__14);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1289);
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

//----------------- Pct_encodedContext ------------------------------------------------------------------

httpParser::Pct_encodedContext::Pct_encodedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::HexdigContext *> httpParser::Pct_encodedContext::hexdig() {
  return getRuleContexts<httpParser::HexdigContext>();
}

httpParser::HexdigContext* httpParser::Pct_encodedContext::hexdig(size_t i) {
  return getRuleContext<httpParser::HexdigContext>(i);
}


size_t httpParser::Pct_encodedContext::getRuleIndex() const {
  return httpParser::RulePct_encoded;
}


antlrcpp::Any httpParser::Pct_encodedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitPct_encoded(this);
  else
    return visitor->visitChildren(this);
}

httpParser::Pct_encodedContext* httpParser::pct_encoded() {
  Pct_encodedContext *_localctx = _tracker.createInstance<Pct_encodedContext>(_ctx, getState());
  enterRule(_localctx, 188, httpParser::RulePct_encoded);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1290);
    match(httpParser::T__35);
    setState(1291);
    hexdig();
    setState(1292);
    hexdig();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnreservedContext ------------------------------------------------------------------

httpParser::UnreservedContext::UnreservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::UnreservedContext::ALPHA() {
  return getToken(httpParser::ALPHA, 0);
}

tree::TerminalNode* httpParser::UnreservedContext::DIGIT() {
  return getToken(httpParser::DIGIT, 0);
}


size_t httpParser::UnreservedContext::getRuleIndex() const {
  return httpParser::RuleUnreserved;
}


antlrcpp::Any httpParser::UnreservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitUnreserved(this);
  else
    return visitor->visitChildren(this);
}

httpParser::UnreservedContext* httpParser::unreserved() {
  UnreservedContext *_localctx = _tracker.createInstance<UnreservedContext>(_ctx, getState());
  enterRule(_localctx, 190, httpParser::RuleUnreserved);
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
    setState(1294);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << httpParser::T__2)
      | (1ULL << httpParser::T__39)
      | (1ULL << httpParser::T__41)
      | (1ULL << httpParser::T__44))) != 0) || _la == httpParser::ALPHA

    || _la == httpParser::DIGIT)) {
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

//----------------- ReservedContext ------------------------------------------------------------------

httpParser::ReservedContext::ReservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::ReservedContext::GEN_DELIMS() {
  return getToken(httpParser::GEN_DELIMS, 0);
}

tree::TerminalNode* httpParser::ReservedContext::SUB_DELIMS() {
  return getToken(httpParser::SUB_DELIMS, 0);
}


size_t httpParser::ReservedContext::getRuleIndex() const {
  return httpParser::RuleReserved;
}


antlrcpp::Any httpParser::ReservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitReserved(this);
  else
    return visitor->visitChildren(this);
}

httpParser::ReservedContext* httpParser::reserved() {
  ReservedContext *_localctx = _tracker.createInstance<ReservedContext>(_ctx, getState());
  enterRule(_localctx, 192, httpParser::RuleReserved);
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
    setState(1296);
    _la = _input->LA(1);
    if (!(_la == httpParser::GEN_DELIMS

    || _la == httpParser::SUB_DELIMS)) {
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

//----------------- CrlfContext ------------------------------------------------------------------

httpParser::CrlfContext::CrlfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::CrlfContext::CR() {
  return getToken(httpParser::CR, 0);
}

tree::TerminalNode* httpParser::CrlfContext::LF() {
  return getToken(httpParser::LF, 0);
}


size_t httpParser::CrlfContext::getRuleIndex() const {
  return httpParser::RuleCrlf;
}


antlrcpp::Any httpParser::CrlfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitCrlf(this);
  else
    return visitor->visitChildren(this);
}

httpParser::CrlfContext* httpParser::crlf() {
  CrlfContext *_localctx = _tracker.createInstance<CrlfContext>(_ctx, getState());
  enterRule(_localctx, 194, httpParser::RuleCrlf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1298);
    match(httpParser::CR);
    setState(1299);
    match(httpParser::LF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexdigContext ------------------------------------------------------------------

httpParser::HexdigContext::HexdigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::HexdigContext::DIGIT() {
  return getToken(httpParser::DIGIT, 0);
}


size_t httpParser::HexdigContext::getRuleIndex() const {
  return httpParser::RuleHexdig;
}


antlrcpp::Any httpParser::HexdigContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitHexdig(this);
  else
    return visitor->visitChildren(this);
}

httpParser::HexdigContext* httpParser::hexdig() {
  HexdigContext *_localctx = _tracker.createInstance<HexdigContext>(_ctx, getState());
  enterRule(_localctx, 196, httpParser::RuleHexdig);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1308);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case httpParser::DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(1301);
        match(httpParser::DIGIT);
        break;
      }

      case httpParser::T__24:
      case httpParser::T__25: {
        enterOuterAlt(_localctx, 2);
        setState(1302);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__24

        || _la == httpParser::T__25)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case httpParser::T__72:
      case httpParser::T__73: {
        enterOuterAlt(_localctx, 3);
        setState(1303);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__72

        || _la == httpParser::T__73)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case httpParser::T__45:
      case httpParser::T__46: {
        enterOuterAlt(_localctx, 4);
        setState(1304);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__45

        || _la == httpParser::T__46)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case httpParser::T__53:
      case httpParser::T__54: {
        enterOuterAlt(_localctx, 5);
        setState(1305);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__53

        || _la == httpParser::T__54)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case httpParser::T__30:
      case httpParser::T__31: {
        enterOuterAlt(_localctx, 6);
        setState(1306);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__30

        || _la == httpParser::T__31)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case httpParser::T__59:
      case httpParser::T__60: {
        enterOuterAlt(_localctx, 7);
        setState(1307);
        _la = _input->LA(1);
        if (!(_la == httpParser::T__59

        || _la == httpParser::T__60)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
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

//----------------- LwspContext ------------------------------------------------------------------

httpParser::LwspContext::LwspContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<httpParser::WspContext *> httpParser::LwspContext::wsp() {
  return getRuleContexts<httpParser::WspContext>();
}

httpParser::WspContext* httpParser::LwspContext::wsp(size_t i) {
  return getRuleContext<httpParser::WspContext>(i);
}

std::vector<httpParser::CrlfContext *> httpParser::LwspContext::crlf() {
  return getRuleContexts<httpParser::CrlfContext>();
}

httpParser::CrlfContext* httpParser::LwspContext::crlf(size_t i) {
  return getRuleContext<httpParser::CrlfContext>(i);
}


size_t httpParser::LwspContext::getRuleIndex() const {
  return httpParser::RuleLwsp;
}


antlrcpp::Any httpParser::LwspContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitLwsp(this);
  else
    return visitor->visitChildren(this);
}

httpParser::LwspContext* httpParser::lwsp() {
  LwspContext *_localctx = _tracker.createInstance<LwspContext>(_ctx, getState());
  enterRule(_localctx, 198, httpParser::RuleLwsp);
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
    setState(1316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 90) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 90)) & ((1ULL << (httpParser::CR - 90))
      | (1ULL << (httpParser::HTAB - 90))
      | (1ULL << (httpParser::SP - 90)))) != 0)) {
      setState(1314);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case httpParser::HTAB:
        case httpParser::SP: {
          setState(1310);
          wsp();
          break;
        }

        case httpParser::CR: {
          setState(1311);
          crlf();
          setState(1312);
          wsp();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1318);
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

//----------------- WspContext ------------------------------------------------------------------

httpParser::WspContext::WspContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* httpParser::WspContext::SP() {
  return getToken(httpParser::SP, 0);
}

tree::TerminalNode* httpParser::WspContext::HTAB() {
  return getToken(httpParser::HTAB, 0);
}


size_t httpParser::WspContext::getRuleIndex() const {
  return httpParser::RuleWsp;
}


antlrcpp::Any httpParser::WspContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<httpVisitor*>(visitor))
    return parserVisitor->visitWsp(this);
  else
    return visitor->visitChildren(this);
}

httpParser::WspContext* httpParser::wsp() {
  WspContext *_localctx = _tracker.createInstance<WspContext>(_ctx, getState());
  enterRule(_localctx, 200, httpParser::RuleWsp);
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
    setState(1319);
    _la = _input->LA(1);
    if (!(_la == httpParser::HTAB

    || _la == httpParser::SP)) {
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

// Static vars and initialization.
std::vector<dfa::DFA> httpParser::_decisionToDFA;
atn::PredictionContextCache httpParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN httpParser::_atn;
std::vector<uint16_t> httpParser::_serializedATN;

std::vector<std::string> httpParser::_ruleNames = {
  "bws", "connection", "content_length", "http_message", "http_version", 
  "host", "ows", "rws", "te", "trailer", "transfer_encoding", "upgrade", 
  "via", "absolute_form", "absolute_path", "authority_form", "chunk", "chunk_data", 
  "chunk_ext", "chunk_ext_name", "chunk_ext_val", "chunk_size", "chunked_body", 
  "comment", "connection_option", "ctext", "field_content", "field_name", 
  "field_value", "field_vchar", "header_field", "http_uri", "https_uri", 
  "last_chunk", "message_body", "method", "obs_fold", "origin_form", "partial_uri", 
  "protocol", "protocol_name", "protocol_version", "pseudonym", "qdtext", 
  "quoted_pair", "quoted_string", "rank", "reason_phrase", "received_by", 
  "received_protocol", "request_line", "request_target", "start_line", "status_code", 
  "status_line", "t_codings", "t_ranking", "tchar", "token", "trailer_part", 
  "transfer_coding", "transfer_extension", "transfer_parameter", "uri", 
  "hier_part", "uri_reference", "absolute_uri", "relative_ref", "relative_part", 
  "scheme", "authority", "userinfo", "uri_host", "port", "ip_literal", "ipvfuture", 
  "ipv6address", "h16", "ls32", "ipv4address", "dec_octet", "reg_name", 
  "path", "path_abempty", "path_absolute", "path_noscheme", "path_rootless", 
  "path_empty", "segment", "segment_nz", "segment_nz_nc", "pchar", "query", 
  "fragment_1", "pct_encoded", "unreserved", "reserved", "crlf", "hexdig", 
  "lwsp", "wsp"
};

std::vector<std::string> httpParser::_literalNames = {
  "", "','", "'/'", "'.'", "':'", "';'", "'='", "'('", "')'", "'H'", "'h'", 
  "'T'", "'t'", "'P'", "'p'", "'\u003F'", "'#'", "'S'", "'s'", "'0'", "'!'", 
  "'\\'", "'1'", "'R'", "'r'", "'A'", "'a'", "'I'", "'i'", "'L'", "'l'", 
  "'E'", "'e'", "'Q'", "'q'", "'$'", "'%'", "'&'", "'''", "'+'", "'-'", 
  "'^'", "'_'", "'`'", "'|'", "'~'", "'C'", "'c'", "'U'", "'u'", "'N'", 
  "'n'", "'K'", "'k'", "'D'", "'d'", "'O'", "'o'", "'M'", "'m'", "'F'", 
  "'f'", "'G'", "'g'", "'Z'", "'z'", "'@'", "'['", "']'", "'V'", "'v'", 
  "'2'", "'5'", "'B'", "'b'", "", "'*'", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "'\u000D'", "", "", "'\u0022'", "'\u0009'", "'\u000A'", 
  "", "'\u0020'"
};

std::vector<std::string> httpParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "HTTP_NAME", "ASTERISK_FORM", "FROM_EX_TO_APO", "FROM_DASH_TO_LSQBR", 
  "FROM_RSQBR_TO_TYLDE", "OBS_TEXT", "FROM_HASH_TO_LSQBR", "ONE_TO_NINE", 
  "ZERO_TO_FOUR", "ZERO_TO_FIVE", "GEN_DELIMS", "SUB_DELIMS", "ALPHA", "BIT", 
  "CHAR_1", "CR", "CTL", "DIGIT", "DQUOTE", "HTAB", "LF", "OCTET", "SP", 
  "VCHAR"
};

dfa::Vocabulary httpParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> httpParser::_tokenNames;

httpParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x64, 0x52c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0xd1, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0xd4, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xdc, 0xa, 0x3, 0x7, 0x3, 0xde, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0xe1, 0xb, 0x3, 0x3, 0x4, 0x6, 0x4, 0xe4, 0xa, 
    0x4, 0xd, 0x4, 0xe, 0x4, 0xe5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0xec, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xef, 0xb, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xfd, 0xa, 0x7, 0x3, 
    0x8, 0x7, 0x8, 0x100, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x103, 0xb, 0x8, 
    0x3, 0x9, 0x6, 0x9, 0x106, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x107, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x10c, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x113, 0xa, 0xa, 0x7, 0xa, 0x115, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x118, 0xb, 0xa, 0x5, 0xa, 0x11a, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x11e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x121, 
    0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x129, 0xa, 0xb, 0x7, 0xb, 0x12b, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x12e, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x132, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0x135, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x13d, 0xa, 0xc, 0x7, 0xc, 0x13f, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x142, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 
    0xd, 0x146, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x149, 0xb, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x151, 0xa, 
    0xd, 0x7, 0xd, 0x153, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x156, 0xb, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x15a, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x15d, 
    0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0x165, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x170, 0xa, 0xe, 
    0x5, 0xe, 0x172, 0xa, 0xe, 0x7, 0xe, 0x174, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x177, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x6, 
    0x10, 0x17d, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x17e, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x185, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x6, 0x13, 0x18c, 0xa, 0x13, 
    0xd, 0x13, 0xe, 0x13, 0x18d, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0x194, 0xa, 0x14, 0x7, 0x14, 0x196, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x199, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x19f, 0xa, 0x16, 0x3, 0x17, 0x6, 0x17, 0x1a2, 0xa, 0x17, 
    0xd, 0x17, 0xe, 0x17, 0x1a3, 0x3, 0x18, 0x7, 0x18, 0x1a7, 0xa, 0x18, 
    0xc, 0x18, 0xe, 0x18, 0x1aa, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x1b4, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x1b7, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x6, 
    0x1c, 0x1c1, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x1c2, 0x3, 0x1c, 0x5, 
    0x1c, 0x1c6, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x7, 0x1e, 0x1cc, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x1cf, 0xb, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x5, 0x21, 0x1e5, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x1e9, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x5, 0x22, 0x1f8, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x5, 0x22, 0x1fc, 0xa, 0x22, 0x3, 0x23, 0x6, 0x23, 0x1ff, 0xa, 0x23, 
    0xd, 0x23, 0xe, 0x23, 0x200, 0x3, 0x23, 0x5, 0x23, 0x204, 0xa, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x7, 0x24, 0x209, 0xa, 0x24, 0xc, 0x24, 
    0xe, 0x24, 0x20c, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x6, 0x26, 0x212, 0xa, 0x26, 0xd, 0x26, 0xe, 0x26, 0x213, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x219, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x5, 0x28, 0x21e, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x223, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x233, 0xa, 0x2f, 
    0xc, 0x2f, 0xe, 0x2f, 0x236, 0xb, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x30, 0x5, 0x30, 0x242, 0xa, 0x30, 0x5, 0x30, 0x244, 0xa, 0x30, 0x5, 
    0x30, 0x246, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x250, 0xa, 0x30, 
    0x5, 0x30, 0x252, 0xa, 0x30, 0x5, 0x30, 0x254, 0xa, 0x30, 0x5, 0x30, 
    0x256, 0xa, 0x30, 0x3, 0x31, 0x7, 0x31, 0x259, 0xa, 0x31, 0xc, 0x31, 
    0xe, 0x31, 0x25c, 0xb, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 
    0x261, 0xa, 0x32, 0x3, 0x32, 0x5, 0x32, 0x264, 0xa, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x269, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x278, 
    0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x27c, 0xa, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x5, 0x39, 0x293, 0xa, 0x39, 0x5, 0x39, 0x295, 0xa, 0x39, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x6, 0x3c, 0x2a2, 0xa, 0x3c, 
    0xd, 0x3c, 0xe, 0x3c, 0x2a3, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 
    0x2a9, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x2ac, 0xb, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x5, 0x3e, 0x2c9, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x2d1, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 
    0x2d4, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x5, 0x40, 0x2dc, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x2e3, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x5, 0x41, 0x2e7, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x2f2, 
    0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x2f6, 0xa, 0x43, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x2fd, 0xa, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x302, 0xa, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x5, 0x45, 0x306, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 
    0x46, 0x311, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x315, 0xa, 
    0x47, 0xc, 0x47, 0xe, 0x47, 0x318, 0xb, 0x47, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x5, 0x48, 0x31d, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x5, 0x48, 0x322, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x7, 0x49, 0x328, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x32b, 0xb, 0x49, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x330, 0xa, 0x4a, 0x3, 0x4b, 
    0x7, 0x4b, 0x333, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x336, 0xb, 0x4b, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x33b, 0xa, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x6, 0x4d, 0x341, 0xa, 0x4d, 0xd, 0x4d, 
    0xe, 0x4d, 0x342, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x6, 0x4d, 
    0x349, 0xa, 0x4d, 0xd, 0x4d, 0xe, 0x4d, 0x34a, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x5, 0x4e, 0x376, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x38c, 0xa, 0x4e, 0x3, 0x4e, 
    0x5, 0x4e, 0x38f, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x3a8, 0xa, 0x4e, 0x5, 0x4e, 0x3aa, 0xa, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x3ad, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 
    0x3cc, 0xa, 0x4e, 0x5, 0x4e, 0x3ce, 0xa, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 
    0x3d1, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x3f8, 0xa, 0x4e, 0x5, 0x4e, 0x3fa, 0xa, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x3fd, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x430, 0xa, 0x4e, 0x5, 0x4e, 0x432, 0xa, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x435, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x47a, 
    0xa, 0x4e, 0x5, 0x4e, 0x47c, 0xa, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x47f, 
    0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x483, 0xa, 0x4e, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x48e, 0xa, 0x4f, 0x5, 0x4f, 0x490, 0xa, 
    0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 
    0x497, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x4ae, 0xa, 0x52, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x4b3, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 
    0x4b6, 0xb, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x5, 0x54, 0x4bd, 0xa, 0x54, 0x3, 0x55, 0x3, 0x55, 0x7, 0x55, 0x4c1, 
    0xa, 0x55, 0xc, 0x55, 0xe, 0x55, 0x4c4, 0xb, 0x55, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x4ca, 0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 
    0x4cd, 0xb, 0x56, 0x5, 0x56, 0x4cf, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x7, 0x57, 0x4d4, 0xa, 0x57, 0xc, 0x57, 0xe, 0x57, 0x4d7, 
    0xb, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x7, 0x58, 0x4dc, 0xa, 0x58, 
    0xc, 0x58, 0xe, 0x58, 0x4df, 0xb, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 
    0x7, 0x5a, 0x4e4, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 0x4e7, 0xb, 0x5a, 
    0x3, 0x5b, 0x6, 0x5b, 0x4ea, 0xa, 0x5b, 0xd, 0x5b, 0xe, 0x5b, 0x4eb, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x6, 0x5c, 0x4f2, 0xa, 0x5c, 
    0xd, 0x5c, 0xe, 0x5c, 0x4f3, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x5, 0x5d, 0x4fb, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x7, 0x5e, 0x500, 0xa, 0x5e, 0xc, 0x5e, 0xe, 0x5e, 0x503, 0xb, 0x5e, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x7, 0x5f, 0x508, 0xa, 0x5f, 0xc, 0x5f, 
    0xe, 0x5f, 0x50b, 0xb, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 
    0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x3, 0x64, 0x5, 0x64, 0x51f, 0xa, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x7, 0x65, 0x525, 0xa, 0x65, 0xc, 0x65, 0xe, 0x65, 0x528, 
    0xb, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x2, 0x2, 0x67, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
    0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
    0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
    0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 
    0xc8, 0xca, 0x2, 0x21, 0x4, 0x2, 0x60, 0x60, 0x63, 0x63, 0x5, 0x2, 0x4f, 
    0x52, 0x60, 0x60, 0x63, 0x63, 0x4, 0x2, 0x52, 0x52, 0x64, 0x64, 0x3, 
    0x2, 0xb, 0xc, 0x3, 0x2, 0xd, 0xe, 0x3, 0x2, 0xf, 0x10, 0x3, 0x2, 0x13, 
    0x14, 0x6, 0x2, 0x16, 0x16, 0x51, 0x53, 0x60, 0x60, 0x63, 0x63, 0x5, 
    0x2, 0x52, 0x52, 0x60, 0x60, 0x63, 0x64, 0x3, 0x2, 0x19, 0x1a, 0x3, 
    0x2, 0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x1f, 0x20, 0x3, 0x2, 
    0x21, 0x22, 0x3, 0x2, 0x23, 0x24, 0x9, 0x2, 0x5, 0x5, 0x12, 0x12, 0x16, 
    0x16, 0x25, 0x2f, 0x4e, 0x4e, 0x59, 0x59, 0x5e, 0x5e, 0x3, 0x2, 0x30, 
    0x31, 0x3, 0x2, 0x32, 0x33, 0x3, 0x2, 0x34, 0x35, 0x3, 0x2, 0x36, 0x37, 
    0x3, 0x2, 0x38, 0x39, 0x3, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x3c, 0x3d, 0x3, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x40, 0x41, 0x3, 0x2, 0x42, 0x43, 0x6, 0x2, 
    0x5, 0x5, 0x29, 0x2a, 0x59, 0x59, 0x5e, 0x5e, 0x3, 0x2, 0x47, 0x48, 
    0x8, 0x2, 0x5, 0x5, 0x2a, 0x2a, 0x2c, 0x2c, 0x2f, 0x2f, 0x59, 0x59, 
    0x5e, 0x5e, 0x3, 0x2, 0x57, 0x58, 0x3, 0x2, 0x4b, 0x4c, 0x2, 0x582, 
    0x2, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x6, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xa, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xe, 0x101, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x105, 0x3, 0x2, 0x2, 0x2, 0x12, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x133, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x147, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x178, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x182, 0x3, 0x2, 0x2, 0x2, 0x24, 0x18b, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x197, 0x3, 0x2, 0x2, 0x2, 0x28, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x1ba, 0x3, 0x2, 0x2, 0x2, 0x34, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1be, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1cd, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1d2, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1ea, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x46, 0x20a, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x215, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x50, 0x21f, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x224, 0x3, 0x2, 0x2, 0x2, 0x54, 0x226, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x228, 0x3, 0x2, 0x2, 0x2, 0x58, 0x22a, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x22f, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x255, 0x3, 0x2, 0x2, 0x2, 0x60, 0x25a, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x263, 0x3, 0x2, 0x2, 0x2, 0x64, 0x268, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x68, 0x277, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x27b, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x281, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x294, 0x3, 0x2, 0x2, 0x2, 0x72, 0x296, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2a1, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2c8, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x2dd, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x84, 0x2f5, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x88, 0x2fe, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x310, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x312, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x90, 0x329, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x94, 0x334, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x337, 0x3, 0x2, 0x2, 0x2, 0x98, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x482, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x484, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x496, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0x498, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x4ad, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x4bc, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x4c5, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0xae, 0x4d8, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0x4e9, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x4fa, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0x501, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x509, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0x50c, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x510, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0x512, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x514, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0x51e, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x526, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0x529, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0xe, 0x8, 0x2, 0xcd, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x3, 0x2, 0x2, 0xcf, 0xd1, 
    0x5, 0xe, 0x8, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd4, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xdf, 0x5, 0x32, 0x1a, 0x2, 0xd6, 0xd7, 0x5, 0xe, 0x8, 0x2, 
    0xd7, 0xdb, 0x7, 0x3, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0xe, 0x8, 0x2, 0xd9, 
    0xda, 0x5, 0x32, 0x1a, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0x5, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xe4, 0x7, 0x5e, 0x2, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0x7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xed, 0x5, 
    0x6a, 0x36, 0x2, 0xe8, 0xe9, 0x5, 0x3e, 0x20, 0x2, 0xe9, 0xea, 0x5, 
    0xc4, 0x63, 0x2, 0xea, 0xec, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xef, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0xc4, 0x63, 0x2, 0xf1, 
    0xf2, 0x5, 0x46, 0x24, 0x2, 0xf2, 0x9, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 
    0x7, 0x4d, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x4, 0x2, 0x2, 0xf5, 0xf6, 0x7, 
    0x5e, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x5, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x5e, 
    0x2, 0x2, 0xf8, 0xb, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x5, 0x92, 0x4a, 
    0x2, 0xfa, 0xfb, 0x7, 0x6, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x94, 0x4b, 0x2, 
    0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x100, 0x9, 0x2, 0x2, 0x2, 0xff, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x103, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x9, 0x2, 
    0x2, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x108, 0x11, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x7, 0x3, 0x2, 
    0x2, 0x10a, 0x10c, 0x5, 0x70, 0x39, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x10d, 0x10e, 0x5, 0xe, 0x8, 0x2, 0x10e, 0x112, 0x7, 0x3, 0x2, 
    0x2, 0x10f, 0x110, 0x5, 0xe, 0x8, 0x2, 0x110, 0x111, 0x5, 0x70, 0x39, 
    0x2, 0x111, 0x113, 0x3, 0x2, 0x2, 0x2, 0x112, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x115, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x3, 0x2, 0x2, 
    0x11c, 0x11e, 0x5, 0xe, 0x8, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x121, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x122, 0x12c, 0x5, 0x38, 0x1d, 0x2, 
    0x123, 0x124, 0x5, 0xe, 0x8, 0x2, 0x124, 0x128, 0x7, 0x3, 0x2, 0x2, 
    0x125, 0x126, 0x5, 0xe, 0x8, 0x2, 0x126, 0x127, 0x5, 0x38, 0x1d, 0x2, 
    0x127, 0x129, 0x3, 0x2, 0x2, 0x2, 0x128, 0x125, 0x3, 0x2, 0x2, 0x2, 
    0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x123, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 
    0x130, 0x7, 0x3, 0x2, 0x2, 0x130, 0x132, 0x5, 0xe, 0x8, 0x2, 0x131, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x3, 0x2, 0x2, 0x2, 0x133, 
    0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x136, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x140, 0x5, 0x7a, 0x3e, 0x2, 0x137, 0x138, 0x5, 0xe, 0x8, 0x2, 0x138, 
    0x13c, 0x7, 0x3, 0x2, 0x2, 0x139, 0x13a, 0x5, 0xe, 0x8, 0x2, 0x13a, 
    0x13b, 0x5, 0x7a, 0x3e, 0x2, 0x13b, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x13f, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13f, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x17, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 
    0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x3, 0x2, 0x2, 0x144, 0x146, 
    0x5, 0xe, 0x8, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x14a, 0x154, 0x5, 0x50, 0x29, 0x2, 0x14b, 0x14c, 
    0x5, 0xe, 0x8, 0x2, 0x14c, 0x150, 0x7, 0x3, 0x2, 0x2, 0x14d, 0x14e, 
    0x5, 0xe, 0x8, 0x2, 0x14e, 0x14f, 0x5, 0x50, 0x29, 0x2, 0x14f, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x153, 0x3, 0x2, 0x2, 0x2, 0x152, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x153, 0x156, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 0x155, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x7, 
    0x3, 0x2, 0x2, 0x158, 0x15a, 0x5, 0xe, 0x8, 0x2, 0x159, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15e, 0x3, 
    0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x5, 
    0x64, 0x33, 0x2, 0x15f, 0x160, 0x5, 0x10, 0x9, 0x2, 0x160, 0x164, 0x5, 
    0x62, 0x32, 0x2, 0x161, 0x162, 0x5, 0x10, 0x9, 0x2, 0x162, 0x163, 0x5, 
    0x30, 0x19, 0x2, 0x163, 0x165, 0x3, 0x2, 0x2, 0x2, 0x164, 0x161, 0x3, 
    0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x166, 0x167, 0x5, 0xe, 0x8, 0x2, 0x167, 0x171, 0x7, 
    0x3, 0x2, 0x2, 0x168, 0x169, 0x5, 0xe, 0x8, 0x2, 0x169, 0x16a, 0x5, 
    0x64, 0x33, 0x2, 0x16a, 0x16b, 0x5, 0x10, 0x9, 0x2, 0x16b, 0x16f, 0x5, 
    0x62, 0x32, 0x2, 0x16c, 0x16d, 0x5, 0x10, 0x9, 0x2, 0x16d, 0x16e, 0x5, 
    0x30, 0x19, 0x2, 0x16e, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x172, 0x3, 
    0x2, 0x2, 0x2, 0x171, 0x168, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 
    0x2, 0x2, 0x2, 0x172, 0x174, 0x3, 0x2, 0x2, 0x2, 0x173, 0x166, 0x3, 
    0x2, 0x2, 0x2, 0x174, 0x177, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 0x3, 
    0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x5, 0x86, 
    0x44, 0x2, 0x179, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x4, 
    0x2, 0x2, 0x17b, 0x17d, 0x5, 0xb2, 0x5a, 0x2, 0x17c, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x180, 0x181, 0x5, 0x8e, 0x48, 0x2, 0x181, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x182, 0x184, 0x5, 0x2c, 0x17, 0x2, 0x183, 0x185, 0x5, 0x26, 0x14, 
    0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 
    0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x5, 0xc4, 0x63, 
    0x2, 0x187, 0x188, 0x5, 0x24, 0x13, 0x2, 0x188, 0x189, 0x5, 0xc4, 0x63, 
    0x2, 0x189, 0x23, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18c, 0x7, 0x62, 0x2, 
    0x2, 0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x25, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x7, 0x2, 0x2, 
    0x190, 0x193, 0x5, 0x28, 0x15, 0x2, 0x191, 0x192, 0x7, 0x8, 0x2, 0x2, 
    0x192, 0x194, 0x5, 0x2a, 0x16, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x196, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x27, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19a, 
    0x19b, 0x5, 0x76, 0x3c, 0x2, 0x19b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19f, 0x5, 0x76, 0x3c, 0x2, 0x19d, 0x19f, 0x5, 0x5c, 0x2f, 0x2, 0x19e, 
    0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19f, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a2, 0x5, 0xc6, 0x64, 0x2, 0x1a1, 
    0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x22, 0x12, 0x2, 0x1a6, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
    0x1ac, 0x5, 0x44, 0x23, 0x2, 0x1ac, 0x1ad, 0x5, 0x78, 0x3d, 0x2, 0x1ad, 
    0x1ae, 0x5, 0xc4, 0x63, 0x2, 0x1ae, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1af, 
    0x1b5, 0x7, 0x9, 0x2, 0x2, 0x1b0, 0x1b4, 0x5, 0x34, 0x1b, 0x2, 0x1b1, 
    0x1b4, 0x5, 0x5a, 0x2e, 0x2, 0x1b2, 0x1b4, 0x5, 0x30, 0x19, 0x2, 0x1b3, 
    0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 
    0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
    0x1b9, 0x7, 0xa, 0x2, 0x2, 0x1b9, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 
    0x5, 0x76, 0x3c, 0x2, 0x1bb, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 
    0x9, 0x3, 0x2, 0x2, 0x1bd, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c5, 0x5, 
    0x3c, 0x1f, 0x2, 0x1bf, 0x1c1, 0x9, 0x2, 0x2, 0x2, 0x1c0, 0x1bf, 0x3, 
    0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c0, 0x3, 
    0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x3, 
    0x2, 0x2, 0x2, 0x1c4, 0x1c6, 0x5, 0x3c, 0x1f, 0x2, 0x1c5, 0x1c0, 0x3, 
    0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x1c7, 0x1c8, 0x5, 0x76, 0x3c, 0x2, 0x1c8, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x1c9, 0x1cc, 0x5, 0x36, 0x1c, 0x2, 0x1ca, 0x1cc, 0x5, 0x4a, 
    0x26, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x1cc, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 
    0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x9, 0x4, 0x2, 
    0x2, 0x1d1, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x5, 0x38, 0x1d, 
    0x2, 0x1d3, 0x1d4, 0x7, 0x6, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0xe, 0x8, 
    0x2, 0x1d5, 0x1d6, 0x5, 0x3a, 0x1e, 0x2, 0x1d6, 0x1d7, 0x5, 0xe, 0x8, 
    0x2, 0x1d7, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x9, 0x5, 0x2, 0x2, 
    0x1d9, 0x1da, 0x9, 0x6, 0x2, 0x2, 0x1da, 0x1db, 0x9, 0x6, 0x2, 0x2, 
    0x1db, 0x1dc, 0x9, 0x7, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x6, 0x2, 0x2, 
    0x1dd, 0x1de, 0x7, 0x4, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x4, 0x2, 0x2, 
    0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x5, 0x8e, 0x48, 0x2, 
    0x1e1, 0x1e4, 0x5, 0xa8, 0x55, 0x2, 0x1e2, 0x1e3, 0x7, 0x11, 0x2, 0x2, 
    0x1e3, 0x1e5, 0x5, 0xba, 0x5e, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
    0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1e6, 0x1e7, 0x7, 0x12, 0x2, 0x2, 0x1e7, 0x1e9, 0x5, 0xbc, 0x5f, 0x2, 
    0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 
    0x1e9, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x9, 0x5, 0x2, 0x2, 0x1eb, 
    0x1ec, 0x9, 0x6, 0x2, 0x2, 0x1ec, 0x1ed, 0x9, 0x6, 0x2, 0x2, 0x1ed, 
    0x1ee, 0x9, 0x7, 0x2, 0x2, 0x1ee, 0x1ef, 0x9, 0x8, 0x2, 0x2, 0x1ef, 
    0x1f0, 0x7, 0x6, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x4, 0x2, 0x2, 0x1f1, 
    0x1f2, 0x7, 0x4, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1f4, 0x5, 0x8e, 0x48, 0x2, 0x1f4, 0x1f7, 0x5, 0xa8, 0x55, 0x2, 0x1f5, 
    0x1f6, 0x7, 0x11, 0x2, 0x2, 0x1f6, 0x1f8, 0x5, 0xba, 0x5e, 0x2, 0x1f7, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 
    0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x7, 0x12, 0x2, 0x2, 0x1fa, 
    0x1fc, 0x5, 0xbc, 0x5f, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
    0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1ff, 
    0x7, 0x15, 0x2, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 
    0x3, 0x2, 0x2, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 
    0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 0x3, 0x2, 0x2, 0x2, 0x202, 0x204, 
    0x5, 0x26, 0x14, 0x2, 0x203, 0x202, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 
    0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 
    0x5, 0xc4, 0x63, 0x2, 0x206, 0x45, 0x3, 0x2, 0x2, 0x2, 0x207, 0x209, 
    0x7, 0x62, 0x2, 0x2, 0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 
    0x3, 0x2, 0x2, 0x2, 0x20b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 
    0x2, 0x2, 0x2, 0x20d, 0x20e, 0x5, 0x76, 0x3c, 0x2, 0x20e, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x20f, 0x211, 0x5, 0xc4, 0x63, 0x2, 0x210, 0x212, 0x9, 
    0x2, 0x2, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 
    0x2, 0x2, 0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 
    0x2, 0x2, 0x2, 0x214, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x215, 0x218, 0x5, 0x1e, 
    0x10, 0x2, 0x216, 0x217, 0x7, 0x11, 0x2, 0x2, 0x217, 0x219, 0x5, 0xba, 
    0x5e, 0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x219, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21d, 0x5, 0x8a, 
    0x46, 0x2, 0x21b, 0x21c, 0x7, 0x11, 0x2, 0x2, 0x21c, 0x21e, 0x5, 0xba, 
    0x5e, 0x2, 0x21d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 
    0x2, 0x2, 0x21e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x222, 0x5, 0x52, 
    0x2a, 0x2, 0x220, 0x221, 0x7, 0x4, 0x2, 0x2, 0x221, 0x223, 0x5, 0x54, 
    0x2b, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x3, 0x2, 
    0x2, 0x2, 0x223, 0x51, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x5, 0x76, 
    0x3c, 0x2, 0x225, 0x53, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x5, 0x76, 
    0x3c, 0x2, 0x227, 0x55, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x5, 0x76, 
    0x3c, 0x2, 0x229, 0x57, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x9, 0x9, 
    0x2, 0x2, 0x22b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x17, 
    0x2, 0x2, 0x22d, 0x22e, 0x9, 0xa, 0x2, 0x2, 0x22e, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x22f, 0x234, 0x7, 0x5f, 0x2, 0x2, 0x230, 0x233, 0x5, 0x58, 0x2d, 
    0x2, 0x231, 0x233, 0x5, 0x5a, 0x2e, 0x2, 0x232, 0x230, 0x3, 0x2, 0x2, 
    0x2, 0x232, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x3, 0x2, 0x2, 
    0x2, 0x235, 0x237, 0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 
    0x2, 0x237, 0x238, 0x7, 0x5f, 0x2, 0x2, 0x238, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x239, 0x245, 0x7, 0x15, 0x2, 0x2, 0x23a, 0x243, 0x7, 0x5, 0x2, 
    0x2, 0x23b, 0x23c, 0x7, 0x5e, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x5e, 0x2, 
    0x2, 0x23d, 0x244, 0x7, 0x5e, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x5e, 0x2, 
    0x2, 0x23f, 0x244, 0x7, 0x5e, 0x2, 0x2, 0x240, 0x242, 0x7, 0x5e, 0x2, 
    0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x244, 0x3, 0x2, 0x2, 0x2, 0x243, 0x23b, 0x3, 0x2, 0x2, 
    0x2, 0x243, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x244, 0x246, 0x3, 0x2, 0x2, 0x2, 0x245, 0x23a, 0x3, 0x2, 0x2, 
    0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 0x246, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x247, 0x253, 0x7, 0x18, 0x2, 0x2, 0x248, 0x251, 0x7, 0x5, 0x2, 
    0x2, 0x249, 0x24a, 0x7, 0x15, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x15, 0x2, 
    0x2, 0x24b, 0x252, 0x7, 0x15, 0x2, 0x2, 0x24c, 0x24d, 0x7, 0x15, 0x2, 
    0x2, 0x24d, 0x252, 0x7, 0x15, 0x2, 0x2, 0x24e, 0x250, 0x7, 0x15, 0x2, 
    0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 
    0x2, 0x250, 0x252, 0x3, 0x2, 0x2, 0x2, 0x251, 0x249, 0x3, 0x2, 0x2, 
    0x2, 0x251, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 
    0x2, 0x252, 0x254, 0x3, 0x2, 0x2, 0x2, 0x253, 0x248, 0x3, 0x2, 0x2, 
    0x2, 0x253, 0x254, 0x3, 0x2, 0x2, 0x2, 0x254, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x255, 0x239, 0x3, 0x2, 0x2, 0x2, 0x255, 0x247, 0x3, 0x2, 0x2, 
    0x2, 0x256, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x257, 0x259, 0x9, 0xa, 0x2, 0x2, 
    0x258, 0x257, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25c, 0x3, 0x2, 0x2, 0x2, 
    0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x3, 0x2, 0x2, 0x2, 
    0x25b, 0x61, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25d, 
    0x260, 0x5, 0x92, 0x4a, 0x2, 0x25e, 0x25f, 0x7, 0x6, 0x2, 0x2, 0x25f, 
    0x261, 0x5, 0x94, 0x4b, 0x2, 0x260, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x260, 
    0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 
    0x264, 0x5, 0x56, 0x2c, 0x2, 0x263, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 0x63, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 
    0x5, 0x52, 0x2a, 0x2, 0x266, 0x267, 0x7, 0x4, 0x2, 0x2, 0x267, 0x269, 
    0x3, 0x2, 0x2, 0x2, 0x268, 0x265, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 
    0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 
    0x5, 0x54, 0x2b, 0x2, 0x26b, 0x65, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 
    0x5, 0x48, 0x25, 0x2, 0x26d, 0x26e, 0x7, 0x63, 0x2, 0x2, 0x26e, 0x26f, 
    0x5, 0x68, 0x35, 0x2, 0x26f, 0x270, 0x7, 0x63, 0x2, 0x2, 0x270, 0x271, 
    0x5, 0xa, 0x6, 0x2, 0x271, 0x272, 0x5, 0xc4, 0x63, 0x2, 0x272, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x273, 0x278, 0x5, 0x4c, 0x27, 0x2, 0x274, 0x278, 
    0x5, 0x1c, 0xf, 0x2, 0x275, 0x278, 0x5, 0x20, 0x11, 0x2, 0x276, 0x278, 
    0x7, 0x4e, 0x2, 0x2, 0x277, 0x273, 0x3, 0x2, 0x2, 0x2, 0x277, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x277, 0x275, 0x3, 0x2, 0x2, 0x2, 0x277, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x69, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27c, 0x5, 
    0x66, 0x34, 0x2, 0x27a, 0x27c, 0x5, 0x6e, 0x38, 0x2, 0x27b, 0x279, 0x3, 
    0x2, 0x2, 0x2, 0x27b, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x27d, 0x27e, 0x7, 0x5e, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x5e, 
    0x2, 0x2, 0x27f, 0x280, 0x7, 0x5e, 0x2, 0x2, 0x280, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x282, 0x5, 0xa, 0x6, 0x2, 0x282, 0x283, 0x7, 0x63, 
    0x2, 0x2, 0x283, 0x284, 0x5, 0x6c, 0x37, 0x2, 0x284, 0x285, 0x7, 0x63, 
    0x2, 0x2, 0x285, 0x286, 0x5, 0x60, 0x31, 0x2, 0x286, 0x287, 0x5, 0xc4, 
    0x63, 0x2, 0x287, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 0x9, 0x6, 
    0x2, 0x2, 0x289, 0x28a, 0x9, 0xb, 0x2, 0x2, 0x28a, 0x28b, 0x9, 0xc, 
    0x2, 0x2, 0x28b, 0x28c, 0x9, 0xd, 0x2, 0x2, 0x28c, 0x28d, 0x9, 0xe, 
    0x2, 0x2, 0x28d, 0x28e, 0x9, 0xf, 0x2, 0x2, 0x28e, 0x28f, 0x9, 0xb, 
    0x2, 0x2, 0x28f, 0x295, 0x9, 0x8, 0x2, 0x2, 0x290, 0x292, 0x5, 0x7a, 
    0x3e, 0x2, 0x291, 0x293, 0x5, 0x72, 0x3a, 0x2, 0x292, 0x291, 0x3, 0x2, 
    0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 0x295, 0x3, 0x2, 
    0x2, 0x2, 0x294, 0x288, 0x3, 0x2, 0x2, 0x2, 0x294, 0x290, 0x3, 0x2, 
    0x2, 0x2, 0x295, 0x71, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x5, 0xe, 0x8, 
    0x2, 0x297, 0x298, 0x7, 0x7, 0x2, 0x2, 0x298, 0x299, 0x5, 0xe, 0x8, 
    0x2, 0x299, 0x29a, 0x9, 0x10, 0x2, 0x2, 0x29a, 0x29b, 0x7, 0x8, 0x2, 
    0x2, 0x29b, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x5, 0x5e, 0x30, 
    0x2, 0x29d, 0x73, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x9, 0x11, 0x2, 
    0x2, 0x29f, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 0x74, 0x3b, 
    0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x3, 0x2, 0x2, 
    0x2, 0x2a3, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x3, 0x2, 0x2, 
    0x2, 0x2a4, 0x77, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x5, 0x3e, 0x20, 
    0x2, 0x2a6, 0x2a7, 0x5, 0xc4, 0x63, 0x2, 0x2a7, 0x2a9, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2ac, 0x3, 0x2, 0x2, 
    0x2, 0x2aa, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 0x2, 0x2, 
    0x2, 0x2ab, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2aa, 0x3, 0x2, 0x2, 0x2, 
    0x2ad, 0x2ae, 0x9, 0x12, 0x2, 0x2, 0x2ae, 0x2af, 0x9, 0x5, 0x2, 0x2, 
    0x2af, 0x2b0, 0x9, 0x13, 0x2, 0x2, 0x2b0, 0x2b1, 0x9, 0x14, 0x2, 0x2, 
    0x2b1, 0x2b2, 0x9, 0x15, 0x2, 0x2, 0x2b2, 0x2b3, 0x9, 0xf, 0x2, 0x2, 
    0x2b3, 0x2c9, 0x9, 0x16, 0x2, 0x2, 0x2b4, 0x2b5, 0x9, 0x12, 0x2, 0x2, 
    0x2b5, 0x2b6, 0x9, 0x17, 0x2, 0x2, 0x2b6, 0x2b7, 0x9, 0x18, 0x2, 0x2, 
    0x2b7, 0x2b8, 0x9, 0x7, 0x2, 0x2, 0x2b8, 0x2b9, 0x9, 0xb, 0x2, 0x2, 
    0x2b9, 0x2ba, 0x9, 0xf, 0x2, 0x2, 0x2ba, 0x2bb, 0x9, 0x8, 0x2, 0x2, 
    0x2bb, 0x2c9, 0x9, 0x8, 0x2, 0x2, 0x2bc, 0x2bd, 0x9, 0x16, 0x2, 0x2, 
    0x2bd, 0x2be, 0x9, 0xf, 0x2, 0x2, 0x2be, 0x2bf, 0x9, 0x19, 0x2, 0x2, 
    0x2bf, 0x2c0, 0x9, 0xe, 0x2, 0x2, 0x2c0, 0x2c1, 0x9, 0xc, 0x2, 0x2, 
    0x2c1, 0x2c2, 0x9, 0x6, 0x2, 0x2, 0x2c2, 0x2c9, 0x9, 0xf, 0x2, 0x2, 
    0x2c3, 0x2c4, 0x9, 0x1a, 0x2, 0x2, 0x2c4, 0x2c5, 0x9, 0x1b, 0x2, 0x2, 
    0x2c5, 0x2c6, 0x9, 0xd, 0x2, 0x2, 0x2c6, 0x2c9, 0x9, 0x7, 0x2, 0x2, 
    0x2c7, 0x2c9, 0x5, 0x7c, 0x3f, 0x2, 0x2c8, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
    0x2c8, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2bc, 0x3, 0x2, 0x2, 0x2, 
    0x2c8, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c7, 0x3, 0x2, 0x2, 0x2, 
    0x2c9, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2d2, 0x5, 0x76, 0x3c, 0x2, 
    0x2cb, 0x2cc, 0x5, 0xe, 0x8, 0x2, 0x2cc, 0x2cd, 0x7, 0x7, 0x2, 0x2, 
    0x2cd, 0x2ce, 0x5, 0xe, 0x8, 0x2, 0x2ce, 0x2cf, 0x5, 0x7e, 0x40, 0x2, 
    0x2cf, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2cb, 0x3, 0x2, 0x2, 0x2, 
    0x2d1, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d0, 0x3, 0x2, 0x2, 0x2, 
    0x2d2, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2d4, 
    0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x5, 0x76, 0x3c, 0x2, 0x2d6, 
    0x2d7, 0x5, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x7, 0x8, 0x2, 0x2, 0x2d8, 
    0x2db, 0x5, 0x2, 0x2, 0x2, 0x2d9, 0x2dc, 0x5, 0x76, 0x3c, 0x2, 0x2da, 
    0x2dc, 0x5, 0x5c, 0x2f, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 
    0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 
    0x5, 0x8c, 0x47, 0x2, 0x2de, 0x2df, 0x7, 0x6, 0x2, 0x2, 0x2df, 0x2e2, 
    0x5, 0x82, 0x42, 0x2, 0x2e0, 0x2e1, 0x7, 0x11, 0x2, 0x2, 0x2e1, 0x2e3, 
    0x5, 0xba, 0x5e, 0x2, 0x2e2, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e3, 
    0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 
    0x7, 0x12, 0x2, 0x2, 0x2e5, 0x2e7, 0x5, 0xbc, 0x5f, 0x2, 0x2e6, 0x2e4, 
    0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x4, 0x2, 0x2, 0x2e9, 0x2ea, 0x7, 
    0x4, 0x2, 0x2, 0x2ea, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 0x5, 
    0x8e, 0x48, 0x2, 0x2ec, 0x2ed, 0x5, 0xa8, 0x55, 0x2, 0x2ed, 0x2f2, 0x3, 
    0x2, 0x2, 0x2, 0x2ee, 0x2f2, 0x5, 0xaa, 0x56, 0x2, 0x2ef, 0x2f2, 0x5, 
    0xae, 0x58, 0x2, 0x2f0, 0x2f2, 0x5, 0xb0, 0x59, 0x2, 0x2f1, 0x2e8, 0x3, 
    0x2, 0x2, 0x2, 0x2f1, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2ef, 0x3, 
    0x2, 0x2, 0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x2f3, 0x2f6, 0x5, 0x80, 0x41, 0x2, 0x2f4, 0x2f6, 0x5, 0x88, 
    0x45, 0x2, 0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f4, 0x3, 0x2, 
    0x2, 0x2, 0x2f6, 0x85, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x5, 0x8c, 
    0x47, 0x2, 0x2f8, 0x2f9, 0x7, 0x6, 0x2, 0x2, 0x2f9, 0x2fc, 0x5, 0x82, 
    0x42, 0x2, 0x2fa, 0x2fb, 0x7, 0x11, 0x2, 0x2, 0x2fb, 0x2fd, 0x5, 0xba, 
    0x5e, 0x2, 0x2fc, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 
    0x2, 0x2, 0x2fd, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x301, 0x5, 0x8a, 
    0x46, 0x2, 0x2ff, 0x300, 0x7, 0x11, 0x2, 0x2, 0x300, 0x302, 0x5, 0xba, 
    0x5e, 0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x3, 0x2, 
    0x2, 0x2, 0x302, 0x305, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x7, 0x12, 
    0x2, 0x2, 0x304, 0x306, 0x5, 0xbc, 0x5f, 0x2, 0x305, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x305, 0x306, 0x3, 0x2, 0x2, 0x2, 0x306, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x307, 0x308, 0x7, 0x4, 0x2, 0x2, 0x308, 0x309, 0x7, 0x4, 0x2, 
    0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30b, 0x5, 0x8e, 0x48, 
    0x2, 0x30b, 0x30c, 0x5, 0xa8, 0x55, 0x2, 0x30c, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x30d, 0x311, 0x5, 0xaa, 0x56, 0x2, 0x30e, 0x311, 0x5, 0xac, 0x57, 
    0x2, 0x30f, 0x311, 0x5, 0xb0, 0x59, 0x2, 0x310, 0x307, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x310, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x311, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x312, 0x316, 0x7, 0x59, 0x2, 0x2, 0x313, 0x315, 0x9, 0x1c, 0x2, 0x2, 
    0x314, 0x313, 0x3, 0x2, 0x2, 0x2, 0x315, 0x318, 0x3, 0x2, 0x2, 0x2, 
    0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 0x317, 0x3, 0x2, 0x2, 0x2, 
    0x317, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x319, 
    0x31a, 0x5, 0x90, 0x49, 0x2, 0x31a, 0x31b, 0x7, 0x44, 0x2, 0x2, 0x31b, 
    0x31d, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31c, 
    0x31d, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31e, 
    0x321, 0x5, 0x92, 0x4a, 0x2, 0x31f, 0x320, 0x7, 0x6, 0x2, 0x2, 0x320, 
    0x322, 0x5, 0x94, 0x4b, 0x2, 0x321, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x323, 0x328, 
    0x5, 0xc0, 0x61, 0x2, 0x324, 0x328, 0x5, 0xbe, 0x60, 0x2, 0x325, 0x328, 
    0x7, 0x58, 0x2, 0x2, 0x326, 0x328, 0x7, 0x6, 0x2, 0x2, 0x327, 0x323, 
    0x3, 0x2, 0x2, 0x2, 0x327, 0x324, 0x3, 0x2, 0x2, 0x2, 0x327, 0x325, 
    0x3, 0x2, 0x2, 0x2, 0x327, 0x326, 0x3, 0x2, 0x2, 0x2, 0x328, 0x32b, 
    0x3, 0x2, 0x2, 0x2, 0x329, 0x327, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 
    0x3, 0x2, 0x2, 0x2, 0x32a, 0x91, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x329, 0x3, 
    0x2, 0x2, 0x2, 0x32c, 0x330, 0x5, 0x96, 0x4c, 0x2, 0x32d, 0x330, 0x5, 
    0xa0, 0x51, 0x2, 0x32e, 0x330, 0x5, 0xa4, 0x53, 0x2, 0x32f, 0x32c, 0x3, 
    0x2, 0x2, 0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x32e, 0x3, 
    0x2, 0x2, 0x2, 0x330, 0x93, 0x3, 0x2, 0x2, 0x2, 0x331, 0x333, 0x7, 0x5e, 
    0x2, 0x2, 0x332, 0x331, 0x3, 0x2, 0x2, 0x2, 0x333, 0x336, 0x3, 0x2, 
    0x2, 0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x3, 0x2, 
    0x2, 0x2, 0x335, 0x95, 0x3, 0x2, 0x2, 0x2, 0x336, 0x334, 0x3, 0x2, 0x2, 
    0x2, 0x337, 0x33a, 0x7, 0x45, 0x2, 0x2, 0x338, 0x33b, 0x5, 0x9a, 0x4e, 
    0x2, 0x339, 0x33b, 0x5, 0x98, 0x4d, 0x2, 0x33a, 0x338, 0x3, 0x2, 0x2, 
    0x2, 0x33a, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x3, 0x2, 0x2, 
    0x2, 0x33c, 0x33d, 0x7, 0x46, 0x2, 0x2, 0x33d, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x33e, 0x340, 0x9, 0x1d, 0x2, 0x2, 0x33f, 0x341, 0x5, 0xc6, 0x64, 
    0x2, 0x340, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x3, 0x2, 0x2, 
    0x2, 0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x3, 0x2, 0x2, 
    0x2, 0x343, 0x344, 0x3, 0x2, 0x2, 0x2, 0x344, 0x348, 0x7, 0x5, 0x2, 
    0x2, 0x345, 0x349, 0x5, 0xc0, 0x61, 0x2, 0x346, 0x349, 0x7, 0x58, 0x2, 
    0x2, 0x347, 0x349, 0x7, 0x6, 0x2, 0x2, 0x348, 0x345, 0x3, 0x2, 0x2, 
    0x2, 0x348, 0x346, 0x3, 0x2, 0x2, 0x2, 0x348, 0x347, 0x3, 0x2, 0x2, 
    0x2, 0x349, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x348, 0x3, 0x2, 0x2, 
    0x2, 0x34a, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x34c, 0x34d, 0x5, 0x9c, 0x4f, 0x2, 0x34d, 0x34e, 0x7, 0x6, 0x2, 0x2, 
    0x34e, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 0x5, 0x9c, 0x4f, 0x2, 
    0x350, 0x351, 0x7, 0x6, 0x2, 0x2, 0x351, 0x352, 0x3, 0x2, 0x2, 0x2, 
    0x352, 0x353, 0x5, 0x9c, 0x4f, 0x2, 0x353, 0x354, 0x7, 0x6, 0x2, 0x2, 
    0x354, 0x355, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x5, 0x9c, 0x4f, 0x2, 
    0x356, 0x357, 0x7, 0x6, 0x2, 0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 0x2, 
    0x358, 0x359, 0x5, 0x9c, 0x4f, 0x2, 0x359, 0x35a, 0x7, 0x6, 0x2, 0x2, 
    0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0x5, 0x9c, 0x4f, 0x2, 
    0x35c, 0x35d, 0x7, 0x6, 0x2, 0x2, 0x35d, 0x35e, 0x3, 0x2, 0x2, 0x2, 
    0x35e, 0x35f, 0x5, 0x9e, 0x50, 0x2, 0x35f, 0x483, 0x3, 0x2, 0x2, 0x2, 
    0x360, 0x361, 0x7, 0x6, 0x2, 0x2, 0x361, 0x362, 0x7, 0x6, 0x2, 0x2, 
    0x362, 0x363, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x5, 0x9c, 0x4f, 0x2, 
    0x364, 0x365, 0x7, 0x6, 0x2, 0x2, 0x365, 0x366, 0x3, 0x2, 0x2, 0x2, 
    0x366, 0x367, 0x5, 0x9c, 0x4f, 0x2, 0x367, 0x368, 0x7, 0x6, 0x2, 0x2, 
    0x368, 0x369, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36a, 0x5, 0x9c, 0x4f, 0x2, 
    0x36a, 0x36b, 0x7, 0x6, 0x2, 0x2, 0x36b, 0x36c, 0x3, 0x2, 0x2, 0x2, 
    0x36c, 0x36d, 0x5, 0x9c, 0x4f, 0x2, 0x36d, 0x36e, 0x7, 0x6, 0x2, 0x2, 
    0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 0x5, 0x9c, 0x4f, 0x2, 
    0x370, 0x371, 0x7, 0x6, 0x2, 0x2, 0x371, 0x372, 0x3, 0x2, 0x2, 0x2, 
    0x372, 0x373, 0x5, 0x9e, 0x50, 0x2, 0x373, 0x483, 0x3, 0x2, 0x2, 0x2, 
    0x374, 0x376, 0x5, 0x9c, 0x4f, 0x2, 0x375, 0x374, 0x3, 0x2, 0x2, 0x2, 
    0x375, 0x376, 0x3, 0x2, 0x2, 0x2, 0x376, 0x377, 0x3, 0x2, 0x2, 0x2, 
    0x377, 0x378, 0x7, 0x6, 0x2, 0x2, 0x378, 0x379, 0x7, 0x6, 0x2, 0x2, 
    0x379, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x5, 0x9c, 0x4f, 0x2, 
    0x37b, 0x37c, 0x7, 0x6, 0x2, 0x2, 0x37c, 0x37d, 0x3, 0x2, 0x2, 0x2, 
    0x37d, 0x37e, 0x5, 0x9c, 0x4f, 0x2, 0x37e, 0x37f, 0x7, 0x6, 0x2, 0x2, 
    0x37f, 0x380, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x5, 0x9c, 0x4f, 0x2, 
    0x381, 0x382, 0x7, 0x6, 0x2, 0x2, 0x382, 0x383, 0x3, 0x2, 0x2, 0x2, 
    0x383, 0x384, 0x5, 0x9c, 0x4f, 0x2, 0x384, 0x385, 0x7, 0x6, 0x2, 0x2, 
    0x385, 0x386, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 0x5, 0x9e, 0x50, 0x2, 
    0x387, 0x483, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 0x5, 0x9c, 0x4f, 0x2, 
    0x389, 0x38a, 0x7, 0x6, 0x2, 0x2, 0x38a, 0x38c, 0x3, 0x2, 0x2, 0x2, 
    0x38b, 0x388, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38c, 0x3, 0x2, 0x2, 0x2, 
    0x38c, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38f, 0x5, 0x9c, 0x4f, 0x2, 
    0x38e, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 
    0x38f, 0x390, 0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x7, 0x6, 0x2, 0x2, 
    0x391, 0x392, 0x7, 0x6, 0x2, 0x2, 0x392, 0x393, 0x3, 0x2, 0x2, 0x2, 
    0x393, 0x394, 0x5, 0x9c, 0x4f, 0x2, 0x394, 0x395, 0x7, 0x6, 0x2, 0x2, 
    0x395, 0x396, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x5, 0x9c, 0x4f, 0x2, 
    0x397, 0x398, 0x7, 0x6, 0x2, 0x2, 0x398, 0x399, 0x3, 0x2, 0x2, 0x2, 
    0x399, 0x39a, 0x5, 0x9c, 0x4f, 0x2, 0x39a, 0x39b, 0x7, 0x6, 0x2, 0x2, 
    0x39b, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39d, 0x5, 0x9e, 0x50, 0x2, 
    0x39d, 0x483, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x39f, 0x5, 0x9c, 0x4f, 0x2, 
    0x39f, 0x3a0, 0x7, 0x6, 0x2, 0x2, 0x3a0, 0x3a1, 0x3, 0x2, 0x2, 0x2, 
    0x3a1, 0x3a2, 0x5, 0x9c, 0x4f, 0x2, 0x3a2, 0x3a3, 0x7, 0x6, 0x2, 0x2, 
    0x3a3, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x5, 0x9c, 0x4f, 0x2, 
    0x3a5, 0x3a6, 0x7, 0x6, 0x2, 0x2, 0x3a6, 0x3a8, 0x3, 0x2, 0x2, 0x2, 
    0x3a7, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a8, 0x3, 0x2, 0x2, 0x2, 
    0x3a8, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x39e, 0x3, 0x2, 0x2, 0x2, 
    0x3a9, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 0x2, 0x2, 
    0x3ab, 0x3ad, 0x5, 0x9c, 0x4f, 0x2, 0x3ac, 0x3a9, 0x3, 0x2, 0x2, 0x2, 
    0x3ac, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ae, 0x3, 0x2, 0x2, 0x2, 
    0x3ae, 0x3af, 0x7, 0x6, 0x2, 0x2, 0x3af, 0x3b0, 0x7, 0x6, 0x2, 0x2, 
    0x3b0, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0x5, 0x9c, 0x4f, 0x2, 
    0x3b2, 0x3b3, 0x7, 0x6, 0x2, 0x2, 0x3b3, 0x3b4, 0x3, 0x2, 0x2, 0x2, 
    0x3b4, 0x3b5, 0x5, 0x9c, 0x4f, 0x2, 0x3b5, 0x3b6, 0x7, 0x6, 0x2, 0x2, 
    0x3b6, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b8, 0x5, 0x9e, 0x50, 0x2, 
    0x3b8, 0x483, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x5, 0x9c, 0x4f, 0x2, 
    0x3ba, 0x3bb, 0x7, 0x6, 0x2, 0x2, 0x3bb, 0x3bc, 0x3, 0x2, 0x2, 0x2, 
    0x3bc, 0x3bd, 0x5, 0x9c, 0x4f, 0x2, 0x3bd, 0x3be, 0x7, 0x6, 0x2, 0x2, 
    0x3be, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x5, 0x9c, 0x4f, 0x2, 
    0x3c0, 0x3c1, 0x7, 0x6, 0x2, 0x2, 0x3c1, 0x3ce, 0x3, 0x2, 0x2, 0x2, 
    0x3c2, 0x3c3, 0x5, 0x9c, 0x4f, 0x2, 0x3c3, 0x3c4, 0x7, 0x6, 0x2, 0x2, 
    0x3c4, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x5, 0x9c, 0x4f, 0x2, 
    0x3c6, 0x3c7, 0x7, 0x6, 0x2, 0x2, 0x3c7, 0x3ce, 0x3, 0x2, 0x2, 0x2, 
    0x3c8, 0x3c9, 0x5, 0x9c, 0x4f, 0x2, 0x3c9, 0x3ca, 0x7, 0x6, 0x2, 0x2, 
    0x3ca, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3c8, 0x3, 0x2, 0x2, 0x2, 
    0x3cb, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3ce, 0x3, 0x2, 0x2, 0x2, 
    0x3cd, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3c2, 0x3, 0x2, 0x2, 0x2, 
    0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cf, 0x3, 0x2, 0x2, 0x2, 
    0x3cf, 0x3d1, 0x5, 0x9c, 0x4f, 0x2, 0x3d0, 0x3cd, 0x3, 0x2, 0x2, 0x2, 
    0x3d0, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 
    0x3d2, 0x3d3, 0x7, 0x6, 0x2, 0x2, 0x3d3, 0x3d4, 0x7, 0x6, 0x2, 0x2, 
    0x3d4, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x5, 0x9c, 0x4f, 0x2, 
    0x3d6, 0x3d7, 0x7, 0x6, 0x2, 0x2, 0x3d7, 0x3d8, 0x5, 0x9e, 0x50, 0x2, 
    0x3d8, 0x483, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3da, 0x5, 0x9c, 0x4f, 0x2, 
    0x3da, 0x3db, 0x7, 0x6, 0x2, 0x2, 0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 
    0x3dc, 0x3dd, 0x5, 0x9c, 0x4f, 0x2, 0x3dd, 0x3de, 0x7, 0x6, 0x2, 0x2, 
    0x3de, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x5, 0x9c, 0x4f, 0x2, 
    0x3e0, 0x3e1, 0x7, 0x6, 0x2, 0x2, 0x3e1, 0x3e2, 0x3, 0x2, 0x2, 0x2, 
    0x3e2, 0x3e3, 0x5, 0x9c, 0x4f, 0x2, 0x3e3, 0x3e4, 0x7, 0x6, 0x2, 0x2, 
    0x3e4, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x5, 0x9c, 0x4f, 0x2, 
    0x3e6, 0x3e7, 0x7, 0x6, 0x2, 0x2, 0x3e7, 0x3e8, 0x3, 0x2, 0x2, 0x2, 
    0x3e8, 0x3e9, 0x5, 0x9c, 0x4f, 0x2, 0x3e9, 0x3ea, 0x7, 0x6, 0x2, 0x2, 
    0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x5, 0x9c, 0x4f, 0x2, 
    0x3ec, 0x3ed, 0x7, 0x6, 0x2, 0x2, 0x3ed, 0x3fa, 0x3, 0x2, 0x2, 0x2, 
    0x3ee, 0x3ef, 0x5, 0x9c, 0x4f, 0x2, 0x3ef, 0x3f0, 0x7, 0x6, 0x2, 0x2, 
    0x3f0, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0x5, 0x9c, 0x4f, 0x2, 
    0x3f2, 0x3f3, 0x7, 0x6, 0x2, 0x2, 0x3f3, 0x3fa, 0x3, 0x2, 0x2, 0x2, 
    0x3f4, 0x3f5, 0x5, 0x9c, 0x4f, 0x2, 0x3f5, 0x3f6, 0x7, 0x6, 0x2, 0x2, 
    0x3f6, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f4, 0x3, 0x2, 0x2, 0x2, 
    0x3f7, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fa, 0x3, 0x2, 0x2, 0x2, 
    0x3f9, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3e5, 0x3, 0x2, 0x2, 0x2, 
    0x3f9, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3f7, 0x3, 0x2, 0x2, 0x2, 
    0x3fa, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fd, 0x5, 0x9c, 0x4f, 0x2, 
    0x3fc, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x3, 0x2, 0x2, 0x2, 
    0x3fd, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x7, 0x6, 0x2, 0x2, 
    0x3ff, 0x400, 0x7, 0x6, 0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 
    0x401, 0x483, 0x5, 0x9e, 0x50, 0x2, 0x402, 0x403, 0x5, 0x9c, 0x4f, 0x2, 
    0x403, 0x404, 0x7, 0x6, 0x2, 0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 
    0x405, 0x406, 0x5, 0x9c, 0x4f, 0x2, 0x406, 0x407, 0x7, 0x6, 0x2, 0x2, 
    0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 0x5, 0x9c, 0x4f, 0x2, 
    0x409, 0x40a, 0x7, 0x6, 0x2, 0x2, 0x40a, 0x40b, 0x3, 0x2, 0x2, 0x2, 
    0x40b, 0x40c, 0x5, 0x9c, 0x4f, 0x2, 0x40c, 0x40d, 0x7, 0x6, 0x2, 0x2, 
    0x40d, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 0x5, 0x9c, 0x4f, 0x2, 
    0x40f, 0x410, 0x7, 0x6, 0x2, 0x2, 0x410, 0x432, 0x3, 0x2, 0x2, 0x2, 
    0x411, 0x412, 0x5, 0x9c, 0x4f, 0x2, 0x412, 0x413, 0x7, 0x6, 0x2, 0x2, 
    0x413, 0x414, 0x3, 0x2, 0x2, 0x2, 0x414, 0x415, 0x5, 0x9c, 0x4f, 0x2, 
    0x415, 0x416, 0x7, 0x6, 0x2, 0x2, 0x416, 0x417, 0x3, 0x2, 0x2, 0x2, 
    0x417, 0x418, 0x5, 0x9c, 0x4f, 0x2, 0x418, 0x419, 0x7, 0x6, 0x2, 0x2, 
    0x419, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x5, 0x9c, 0x4f, 0x2, 
    0x41b, 0x41c, 0x7, 0x6, 0x2, 0x2, 0x41c, 0x432, 0x3, 0x2, 0x2, 0x2, 
    0x41d, 0x41e, 0x5, 0x9c, 0x4f, 0x2, 0x41e, 0x41f, 0x7, 0x6, 0x2, 0x2, 
    0x41f, 0x420, 0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x5, 0x9c, 0x4f, 0x2, 
    0x421, 0x422, 0x7, 0x6, 0x2, 0x2, 0x422, 0x423, 0x3, 0x2, 0x2, 0x2, 
    0x423, 0x424, 0x5, 0x9c, 0x4f, 0x2, 0x424, 0x425, 0x7, 0x6, 0x2, 0x2, 
    0x425, 0x432, 0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x5, 0x9c, 0x4f, 0x2, 
    0x427, 0x428, 0x7, 0x6, 0x2, 0x2, 0x428, 0x429, 0x3, 0x2, 0x2, 0x2, 
    0x429, 0x42a, 0x5, 0x9c, 0x4f, 0x2, 0x42a, 0x42b, 0x7, 0x6, 0x2, 0x2, 
    0x42b, 0x432, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x5, 0x9c, 0x4f, 0x2, 
    0x42d, 0x42e, 0x7, 0x6, 0x2, 0x2, 0x42e, 0x430, 0x3, 0x2, 0x2, 0x2, 
    0x42f, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 0x3, 0x2, 0x2, 0x2, 
    0x430, 0x432, 0x3, 0x2, 0x2, 0x2, 0x431, 0x402, 0x3, 0x2, 0x2, 0x2, 
    0x431, 0x411, 0x3, 0x2, 0x2, 0x2, 0x431, 0x41d, 0x3, 0x2, 0x2, 0x2, 
    0x431, 0x426, 0x3, 0x2, 0x2, 0x2, 0x431, 0x42f, 0x3, 0x2, 0x2, 0x2, 
    0x432, 0x433, 0x3, 0x2, 0x2, 0x2, 0x433, 0x435, 0x5, 0x9c, 0x4f, 0x2, 
    0x434, 0x431, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x3, 0x2, 0x2, 0x2, 
    0x435, 0x436, 0x3, 0x2, 0x2, 0x2, 0x436, 0x437, 0x7, 0x6, 0x2, 0x2, 
    0x437, 0x438, 0x7, 0x6, 0x2, 0x2, 0x438, 0x439, 0x3, 0x2, 0x2, 0x2, 
    0x439, 0x483, 0x5, 0x9c, 0x4f, 0x2, 0x43a, 0x43b, 0x5, 0x9c, 0x4f, 0x2, 
    0x43b, 0x43c, 0x7, 0x6, 0x2, 0x2, 0x43c, 0x43d, 0x3, 0x2, 0x2, 0x2, 
    0x43d, 0x43e, 0x5, 0x9c, 0x4f, 0x2, 0x43e, 0x43f, 0x7, 0x6, 0x2, 0x2, 
    0x43f, 0x440, 0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 0x5, 0x9c, 0x4f, 0x2, 
    0x441, 0x442, 0x7, 0x6, 0x2, 0x2, 0x442, 0x443, 0x3, 0x2, 0x2, 0x2, 
    0x443, 0x444, 0x5, 0x9c, 0x4f, 0x2, 0x444, 0x445, 0x7, 0x6, 0x2, 0x2, 
    0x445, 0x446, 0x3, 0x2, 0x2, 0x2, 0x446, 0x447, 0x5, 0x9c, 0x4f, 0x2, 
    0x447, 0x448, 0x7, 0x6, 0x2, 0x2, 0x448, 0x449, 0x3, 0x2, 0x2, 0x2, 
    0x449, 0x44a, 0x5, 0x9c, 0x4f, 0x2, 0x44a, 0x44b, 0x7, 0x6, 0x2, 0x2, 
    0x44b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44d, 0x5, 0x9c, 0x4f, 0x2, 
    0x44d, 0x44e, 0x7, 0x6, 0x2, 0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 
    0x44f, 0x450, 0x5, 0x9c, 0x4f, 0x2, 0x450, 0x451, 0x7, 0x6, 0x2, 0x2, 
    0x451, 0x452, 0x3, 0x2, 0x2, 0x2, 0x452, 0x453, 0x5, 0x9c, 0x4f, 0x2, 
    0x453, 0x454, 0x7, 0x6, 0x2, 0x2, 0x454, 0x455, 0x3, 0x2, 0x2, 0x2, 
    0x455, 0x456, 0x5, 0x9c, 0x4f, 0x2, 0x456, 0x457, 0x7, 0x6, 0x2, 0x2, 
    0x457, 0x458, 0x3, 0x2, 0x2, 0x2, 0x458, 0x459, 0x5, 0x9c, 0x4f, 0x2, 
    0x459, 0x45a, 0x7, 0x6, 0x2, 0x2, 0x45a, 0x47c, 0x3, 0x2, 0x2, 0x2, 
    0x45b, 0x45c, 0x5, 0x9c, 0x4f, 0x2, 0x45c, 0x45d, 0x7, 0x6, 0x2, 0x2, 
    0x45d, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x45f, 0x5, 0x9c, 0x4f, 0x2, 
    0x45f, 0x460, 0x7, 0x6, 0x2, 0x2, 0x460, 0x461, 0x3, 0x2, 0x2, 0x2, 
    0x461, 0x462, 0x5, 0x9c, 0x4f, 0x2, 0x462, 0x463, 0x7, 0x6, 0x2, 0x2, 
    0x463, 0x464, 0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x5, 0x9c, 0x4f, 0x2, 
    0x465, 0x466, 0x7, 0x6, 0x2, 0x2, 0x466, 0x47c, 0x3, 0x2, 0x2, 0x2, 
    0x467, 0x468, 0x5, 0x9c, 0x4f, 0x2, 0x468, 0x469, 0x7, 0x6, 0x2, 0x2, 
    0x469, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x46b, 0x5, 0x9c, 0x4f, 0x2, 
    0x46b, 0x46c, 0x7, 0x6, 0x2, 0x2, 0x46c, 0x46d, 0x3, 0x2, 0x2, 0x2, 
    0x46d, 0x46e, 0x5, 0x9c, 0x4f, 0x2, 0x46e, 0x46f, 0x7, 0x6, 0x2, 0x2, 
    0x46f, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x470, 0x471, 0x5, 0x9c, 0x4f, 0x2, 
    0x471, 0x472, 0x7, 0x6, 0x2, 0x2, 0x472, 0x473, 0x3, 0x2, 0x2, 0x2, 
    0x473, 0x474, 0x5, 0x9c, 0x4f, 0x2, 0x474, 0x475, 0x7, 0x6, 0x2, 0x2, 
    0x475, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x5, 0x9c, 0x4f, 0x2, 
    0x477, 0x478, 0x7, 0x6, 0x2, 0x2, 0x478, 0x47a, 0x3, 0x2, 0x2, 0x2, 
    0x479, 0x476, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47a, 0x3, 0x2, 0x2, 0x2, 
    0x47a, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x43a, 0x3, 0x2, 0x2, 0x2, 
    0x47b, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x45b, 0x3, 0x2, 0x2, 0x2, 
    0x47b, 0x467, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x470, 0x3, 0x2, 0x2, 0x2, 
    0x47b, 0x479, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x47d, 0x3, 0x2, 0x2, 0x2, 
    0x47d, 0x47f, 0x5, 0x9c, 0x4f, 0x2, 0x47e, 0x47b, 0x3, 0x2, 0x2, 0x2, 
    0x47e, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x3, 0x2, 0x2, 0x2, 
    0x480, 0x481, 0x7, 0x6, 0x2, 0x2, 0x481, 0x483, 0x7, 0x6, 0x2, 0x2, 
    0x482, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x482, 0x360, 0x3, 0x2, 0x2, 0x2, 
    0x482, 0x375, 0x3, 0x2, 0x2, 0x2, 0x482, 0x38e, 0x3, 0x2, 0x2, 0x2, 
    0x482, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x482, 0x3d0, 0x3, 0x2, 0x2, 0x2, 
    0x482, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x482, 0x434, 0x3, 0x2, 0x2, 0x2, 
    0x482, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x483, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x484, 
    0x48f, 0x5, 0xc6, 0x64, 0x2, 0x485, 0x486, 0x5, 0xc6, 0x64, 0x2, 0x486, 
    0x487, 0x5, 0xc6, 0x64, 0x2, 0x487, 0x488, 0x5, 0xc6, 0x64, 0x2, 0x488, 
    0x490, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0x5, 0xc6, 0x64, 0x2, 0x48a, 
    0x48b, 0x5, 0xc6, 0x64, 0x2, 0x48b, 0x490, 0x3, 0x2, 0x2, 0x2, 0x48c, 
    0x48e, 0x5, 0xc6, 0x64, 0x2, 0x48d, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48d, 
    0x48e, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x490, 0x3, 0x2, 0x2, 0x2, 0x48f, 
    0x485, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x489, 0x3, 0x2, 0x2, 0x2, 0x48f, 
    0x48d, 0x3, 0x2, 0x2, 0x2, 0x490, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x491, 0x492, 
    0x5, 0x9c, 0x4f, 0x2, 0x492, 0x493, 0x7, 0x6, 0x2, 0x2, 0x493, 0x494, 
    0x5, 0x9c, 0x4f, 0x2, 0x494, 0x497, 0x3, 0x2, 0x2, 0x2, 0x495, 0x497, 
    0x5, 0xa0, 0x51, 0x2, 0x496, 0x491, 0x3, 0x2, 0x2, 0x2, 0x496, 0x495, 
    0x3, 0x2, 0x2, 0x2, 0x497, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 0x5, 
    0xa2, 0x52, 0x2, 0x499, 0x49a, 0x7, 0x5, 0x2, 0x2, 0x49a, 0x49b, 0x5, 
    0xa2, 0x52, 0x2, 0x49b, 0x49c, 0x7, 0x5, 0x2, 0x2, 0x49c, 0x49d, 0x5, 
    0xa2, 0x52, 0x2, 0x49d, 0x49e, 0x7, 0x5, 0x2, 0x2, 0x49e, 0x49f, 0x5, 
    0xa2, 0x52, 0x2, 0x49f, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x4ae, 0x7, 
    0x5e, 0x2, 0x2, 0x4a1, 0x4a2, 0x7, 0x54, 0x2, 0x2, 0x4a2, 0x4ae, 0x7, 
    0x5e, 0x2, 0x2, 0x4a3, 0x4a4, 0x7, 0x18, 0x2, 0x2, 0x4a4, 0x4a5, 0x7, 
    0x5e, 0x2, 0x2, 0x4a5, 0x4ae, 0x7, 0x5e, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 
    0x49, 0x2, 0x2, 0x4a7, 0x4a8, 0x7, 0x55, 0x2, 0x2, 0x4a8, 0x4ae, 0x7, 
    0x5e, 0x2, 0x2, 0x4a9, 0x4aa, 0x7, 0x49, 0x2, 0x2, 0x4aa, 0x4ab, 0x7, 
    0x4a, 0x2, 0x2, 0x4ab, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ae, 0x7, 
    0x56, 0x2, 0x2, 0x4ad, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4a1, 0x3, 
    0x2, 0x2, 0x2, 0x4ad, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4a6, 0x3, 
    0x2, 0x2, 0x2, 0x4ad, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0x4af, 0x4b3, 0x5, 0xc0, 0x61, 0x2, 0x4b0, 0x4b3, 0x5, 0xbe, 
    0x60, 0x2, 0x4b1, 0x4b3, 0x7, 0x58, 0x2, 0x2, 0x4b2, 0x4af, 0x3, 0x2, 
    0x2, 0x2, 0x4b2, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b1, 0x3, 0x2, 
    0x2, 0x2, 0x4b3, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b2, 0x3, 0x2, 
    0x2, 0x2, 0x4b4, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0x4b6, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4bd, 0x5, 0xa8, 0x55, 
    0x2, 0x4b8, 0x4bd, 0x5, 0xaa, 0x56, 0x2, 0x4b9, 0x4bd, 0x5, 0xac, 0x57, 
    0x2, 0x4ba, 0x4bd, 0x5, 0xae, 0x58, 0x2, 0x4bb, 0x4bd, 0x5, 0xb0, 0x59, 
    0x2, 0x4bc, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4b8, 0x3, 0x2, 0x2, 
    0x2, 0x4bc, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4ba, 0x3, 0x2, 0x2, 
    0x2, 0x4bc, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0x4be, 0x4bf, 0x7, 0x4, 0x2, 0x2, 0x4bf, 0x4c1, 0x5, 0xb2, 0x5a, 0x2, 
    0x4c0, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c4, 0x3, 0x2, 0x2, 0x2, 
    0x4c2, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x3, 0x2, 0x2, 0x2, 
    0x4c3, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
    0x4ce, 0x7, 0x4, 0x2, 0x2, 0x4c6, 0x4cb, 0x5, 0xb4, 0x5b, 0x2, 0x4c7, 
    0x4c8, 0x7, 0x4, 0x2, 0x2, 0x4c8, 0x4ca, 0x5, 0xb2, 0x5a, 0x2, 0x4c9, 
    0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cb, 
    0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
    0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4ce, 
    0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d5, 0x5, 0xb6, 0x5c, 0x2, 0x4d1, 
    0x4d2, 0x7, 0x4, 0x2, 0x2, 0x4d2, 0x4d4, 0x5, 0xb2, 0x5a, 0x2, 0x4d3, 
    0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d5, 
    0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d6, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4dd, 
    0x5, 0xb4, 0x5b, 0x2, 0x4d9, 0x4da, 0x7, 0x4, 0x2, 0x2, 0x4da, 0x4dc, 
    0x5, 0xb2, 0x5a, 0x2, 0x4db, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4df, 
    0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4de, 
    0x3, 0x2, 0x2, 0x2, 0x4de, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4dd, 0x3, 
    0x2, 0x2, 0x2, 0x4e0, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0x4e2, 0x4e4, 0x5, 0xb8, 0x5d, 0x2, 0x4e3, 0x4e2, 0x3, 0x2, 
    0x2, 0x2, 0x4e4, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e3, 0x3, 0x2, 
    0x2, 0x2, 0x4e5, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0x4e7, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4ea, 0x5, 0xb8, 0x5d, 
    0x2, 0x4e9, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 0x3, 0x2, 0x2, 
    0x2, 0x4eb, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ec, 0x3, 0x2, 0x2, 
    0x2, 0x4ec, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4f2, 0x5, 0xc0, 0x61, 
    0x2, 0x4ee, 0x4f2, 0x5, 0xbe, 0x60, 0x2, 0x4ef, 0x4f2, 0x7, 0x58, 0x2, 
    0x2, 0x4f0, 0x4f2, 0x7, 0x44, 0x2, 0x2, 0x4f1, 0x4ed, 0x3, 0x2, 0x2, 
    0x2, 0x4f1, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4ef, 0x3, 0x2, 0x2, 
    0x2, 0x4f1, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f3, 0x3, 0x2, 0x2, 
    0x2, 0x4f3, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f4, 0x3, 0x2, 0x2, 
    0x2, 0x4f4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4fb, 0x5, 0xc0, 0x61, 
    0x2, 0x4f6, 0x4fb, 0x5, 0xbe, 0x60, 0x2, 0x4f7, 0x4fb, 0x7, 0x58, 0x2, 
    0x2, 0x4f8, 0x4fb, 0x7, 0x6, 0x2, 0x2, 0x4f9, 0x4fb, 0x7, 0x44, 0x2, 
    0x2, 0x4fa, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4f6, 0x3, 0x2, 0x2, 
    0x2, 0x4fa, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4f8, 0x3, 0x2, 0x2, 
    0x2, 0x4fa, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0x4fc, 0x500, 0x5, 0xb8, 0x5d, 0x2, 0x4fd, 0x500, 0x7, 0x4, 0x2, 0x2, 
    0x4fe, 0x500, 0x7, 0x11, 0x2, 0x2, 0x4ff, 0x4fc, 0x3, 0x2, 0x2, 0x2, 
    0x4ff, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x4fe, 0x3, 0x2, 0x2, 0x2, 
    0x500, 0x503, 0x3, 0x2, 0x2, 0x2, 0x501, 0x4ff, 0x3, 0x2, 0x2, 0x2, 
    0x501, 0x502, 0x3, 0x2, 0x2, 0x2, 0x502, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x503, 
    0x501, 0x3, 0x2, 0x2, 0x2, 0x504, 0x508, 0x5, 0xb8, 0x5d, 0x2, 0x505, 
    0x508, 0x7, 0x4, 0x2, 0x2, 0x506, 0x508, 0x7, 0x11, 0x2, 0x2, 0x507, 
    0x504, 0x3, 0x2, 0x2, 0x2, 0x507, 0x505, 0x3, 0x2, 0x2, 0x2, 0x507, 
    0x506, 0x3, 0x2, 0x2, 0x2, 0x508, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x509, 
    0x507, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x50a, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x509, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 
    0x7, 0x26, 0x2, 0x2, 0x50d, 0x50e, 0x5, 0xc6, 0x64, 0x2, 0x50e, 0x50f, 
    0x5, 0xc6, 0x64, 0x2, 0x50f, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 
    0x9, 0x1e, 0x2, 0x2, 0x511, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 
    0x9, 0x1f, 0x2, 0x2, 0x513, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 
    0x7, 0x5c, 0x2, 0x2, 0x515, 0x516, 0x7, 0x61, 0x2, 0x2, 0x516, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0x517, 0x51f, 0x7, 0x5e, 0x2, 0x2, 0x518, 0x51f, 
    0x9, 0xc, 0x2, 0x2, 0x519, 0x51f, 0x9, 0x20, 0x2, 0x2, 0x51a, 0x51f, 
    0x9, 0x12, 0x2, 0x2, 0x51b, 0x51f, 0x9, 0x16, 0x2, 0x2, 0x51c, 0x51f, 
    0x9, 0xf, 0x2, 0x2, 0x51d, 0x51f, 0x9, 0x19, 0x2, 0x2, 0x51e, 0x517, 
    0x3, 0x2, 0x2, 0x2, 0x51e, 0x518, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x519, 
    0x3, 0x2, 0x2, 0x2, 0x51e, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51b, 
    0x3, 0x2, 0x2, 0x2, 0x51e, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51d, 
    0x3, 0x2, 0x2, 0x2, 0x51f, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x520, 0x525, 0x5, 
    0xca, 0x66, 0x2, 0x521, 0x522, 0x5, 0xc4, 0x63, 0x2, 0x522, 0x523, 0x5, 
    0xca, 0x66, 0x2, 0x523, 0x525, 0x3, 0x2, 0x2, 0x2, 0x524, 0x520, 0x3, 
    0x2, 0x2, 0x2, 0x524, 0x521, 0x3, 0x2, 0x2, 0x2, 0x525, 0x528, 0x3, 
    0x2, 0x2, 0x2, 0x526, 0x524, 0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x3, 
    0x2, 0x2, 0x2, 0x527, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x528, 0x526, 0x3, 0x2, 
    0x2, 0x2, 0x529, 0x52a, 0x9, 0x2, 0x2, 0x2, 0x52a, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0xd2, 0xdb, 0xdf, 0xe5, 0xed, 0xfc, 0x101, 0x107, 0x10b, 
    0x112, 0x116, 0x119, 0x11f, 0x128, 0x12c, 0x133, 0x13c, 0x140, 0x147, 
    0x150, 0x154, 0x15b, 0x164, 0x16f, 0x171, 0x175, 0x17e, 0x184, 0x18d, 
    0x193, 0x197, 0x19e, 0x1a3, 0x1a8, 0x1b3, 0x1b5, 0x1c2, 0x1c5, 0x1cb, 
    0x1cd, 0x1e4, 0x1e8, 0x1f7, 0x1fb, 0x200, 0x203, 0x20a, 0x213, 0x218, 
    0x21d, 0x222, 0x232, 0x234, 0x241, 0x243, 0x245, 0x24f, 0x251, 0x253, 
    0x255, 0x25a, 0x260, 0x263, 0x268, 0x277, 0x27b, 0x292, 0x294, 0x2a3, 
    0x2aa, 0x2c8, 0x2d2, 0x2db, 0x2e2, 0x2e6, 0x2f1, 0x2f5, 0x2fc, 0x301, 
    0x305, 0x310, 0x316, 0x31c, 0x321, 0x327, 0x329, 0x32f, 0x334, 0x33a, 
    0x342, 0x348, 0x34a, 0x375, 0x38b, 0x38e, 0x3a7, 0x3a9, 0x3ac, 0x3cb, 
    0x3cd, 0x3d0, 0x3f7, 0x3f9, 0x3fc, 0x42f, 0x431, 0x434, 0x479, 0x47b, 
    0x47e, 0x482, 0x48d, 0x48f, 0x496, 0x4ad, 0x4b2, 0x4b4, 0x4bc, 0x4c2, 
    0x4cb, 0x4ce, 0x4d5, 0x4dd, 0x4e5, 0x4eb, 0x4f1, 0x4f3, 0x4fa, 0x4ff, 
    0x501, 0x507, 0x509, 0x51e, 0x524, 0x526, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

httpParser::Initializer httpParser::_init;
