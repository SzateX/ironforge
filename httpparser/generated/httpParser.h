
// Generated from http.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  httpParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    HTTP_NAME = 75, ASTERISK_FORM = 76, FROM_EX_TO_APO = 77, FROM_DASH_TO_LSQBR = 78, 
    FROM_RSQBR_TO_TYLDE = 79, OBS_TEXT = 80, FROM_HASH_TO_LSQBR = 81, ONE_TO_NINE = 82, 
    ZERO_TO_FOUR = 83, ZERO_TO_FIVE = 84, GEN_DELIMS = 85, SUB_DELIMS = 86, 
    ALPHA = 87, BIT = 88, CHAR_1 = 89, CR = 90, CTL = 91, DIGIT = 92, DQUOTE = 93, 
    HTAB = 94, LF = 95, OCTET = 96, SP = 97, VCHAR = 98
  };

  enum {
    RuleBws = 0, RuleConnection = 1, RuleContent_length = 2, RuleHttp_message = 3, 
    RuleHttp_version = 4, RuleHost = 5, RuleOws = 6, RuleRws = 7, RuleTe = 8, 
    RuleTrailer = 9, RuleTransfer_encoding = 10, RuleUpgrade = 11, RuleVia = 12, 
    RuleAbsolute_form = 13, RuleAbsolute_path = 14, RuleAuthority_form = 15, 
    RuleChunk = 16, RuleChunk_data = 17, RuleChunk_ext = 18, RuleChunk_ext_name = 19, 
    RuleChunk_ext_val = 20, RuleChunk_size = 21, RuleChunked_body = 22, 
    RuleComment = 23, RuleConnection_option = 24, RuleCtext = 25, RuleField_content = 26, 
    RuleField_name = 27, RuleField_value = 28, RuleField_vchar = 29, RuleHeader_field = 30, 
    RuleHttp_uri = 31, RuleHttps_uri = 32, RuleLast_chunk = 33, RuleMessage_body = 34, 
    RuleMethod = 35, RuleObs_fold = 36, RuleOrigin_form = 37, RulePartial_uri = 38, 
    RuleProtocol = 39, RuleProtocol_name = 40, RuleProtocol_version = 41, 
    RulePseudonym = 42, RuleQdtext = 43, RuleQuoted_pair = 44, RuleQuoted_string = 45, 
    RuleRank = 46, RuleReason_phrase = 47, RuleReceived_by = 48, RuleReceived_protocol = 49, 
    RuleRequest_line = 50, RuleRequest_target = 51, RuleStart_line = 52, 
    RuleStatus_code = 53, RuleStatus_line = 54, RuleT_codings = 55, RuleT_ranking = 56, 
    RuleTchar = 57, RuleToken = 58, RuleTrailer_part = 59, RuleTransfer_coding = 60, 
    RuleTransfer_extension = 61, RuleTransfer_parameter = 62, RuleUri = 63, 
    RuleHier_part = 64, RuleUri_reference = 65, RuleAbsolute_uri = 66, RuleRelative_ref = 67, 
    RuleRelative_part = 68, RuleScheme = 69, RuleAuthority = 70, RuleUserinfo = 71, 
    RuleUri_host = 72, RulePort = 73, RuleIp_literal = 74, RuleIpvfuture = 75, 
    RuleIpv6address = 76, RuleH16 = 77, RuleLs32 = 78, RuleIpv4address = 79, 
    RuleDec_octet = 80, RuleReg_name = 81, RulePath = 82, RulePath_abempty = 83, 
    RulePath_absolute = 84, RulePath_noscheme = 85, RulePath_rootless = 86, 
    RulePath_empty = 87, RuleSegment = 88, RuleSegment_nz = 89, RuleSegment_nz_nc = 90, 
    RulePchar = 91, RuleQuery = 92, RuleFragment_1 = 93, RulePct_encoded = 94, 
    RuleUnreserved = 95, RuleReserved = 96, RuleCrlf = 97, RuleHexdig = 98, 
    RuleLwsp = 99, RuleWsp = 100
  };

  explicit httpParser(antlr4::TokenStream *input);
  ~httpParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class BwsContext;
  class ConnectionContext;
  class Content_lengthContext;
  class Http_messageContext;
  class Http_versionContext;
  class HostContext;
  class OwsContext;
  class RwsContext;
  class TeContext;
  class TrailerContext;
  class Transfer_encodingContext;
  class UpgradeContext;
  class ViaContext;
  class Absolute_formContext;
  class Absolute_pathContext;
  class Authority_formContext;
  class ChunkContext;
  class Chunk_dataContext;
  class Chunk_extContext;
  class Chunk_ext_nameContext;
  class Chunk_ext_valContext;
  class Chunk_sizeContext;
  class Chunked_bodyContext;
  class CommentContext;
  class Connection_optionContext;
  class CtextContext;
  class Field_contentContext;
  class Field_nameContext;
  class Field_valueContext;
  class Field_vcharContext;
  class Header_fieldContext;
  class Http_uriContext;
  class Https_uriContext;
  class Last_chunkContext;
  class Message_bodyContext;
  class MethodContext;
  class Obs_foldContext;
  class Origin_formContext;
  class Partial_uriContext;
  class ProtocolContext;
  class Protocol_nameContext;
  class Protocol_versionContext;
  class PseudonymContext;
  class QdtextContext;
  class Quoted_pairContext;
  class Quoted_stringContext;
  class RankContext;
  class Reason_phraseContext;
  class Received_byContext;
  class Received_protocolContext;
  class Request_lineContext;
  class Request_targetContext;
  class Start_lineContext;
  class Status_codeContext;
  class Status_lineContext;
  class T_codingsContext;
  class T_rankingContext;
  class TcharContext;
  class TokenContext;
  class Trailer_partContext;
  class Transfer_codingContext;
  class Transfer_extensionContext;
  class Transfer_parameterContext;
  class UriContext;
  class Hier_partContext;
  class Uri_referenceContext;
  class Absolute_uriContext;
  class Relative_refContext;
  class Relative_partContext;
  class SchemeContext;
  class AuthorityContext;
  class UserinfoContext;
  class Uri_hostContext;
  class PortContext;
  class Ip_literalContext;
  class IpvfutureContext;
  class Ipv6addressContext;
  class H16Context;
  class Ls32Context;
  class Ipv4addressContext;
  class Dec_octetContext;
  class Reg_nameContext;
  class PathContext;
  class Path_abemptyContext;
  class Path_absoluteContext;
  class Path_noschemeContext;
  class Path_rootlessContext;
  class Path_emptyContext;
  class SegmentContext;
  class Segment_nzContext;
  class Segment_nz_ncContext;
  class PcharContext;
  class QueryContext;
  class Fragment_1Context;
  class Pct_encodedContext;
  class UnreservedContext;
  class ReservedContext;
  class CrlfContext;
  class HexdigContext;
  class LwspContext;
  class WspContext; 

  class  BwsContext : public antlr4::ParserRuleContext {
  public:
    BwsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OwsContext *ows();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BwsContext* bws();

  class  ConnectionContext : public antlr4::ParserRuleContext {
  public:
    ConnectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Connection_optionContext *> connection_option();
    Connection_optionContext* connection_option(size_t i);
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectionContext* connection();

  class  Content_lengthContext : public antlr4::ParserRuleContext {
  public:
    Content_lengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Content_lengthContext* content_length();

  class  Http_messageContext : public antlr4::ParserRuleContext {
  public:
    Http_messageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Start_lineContext *start_line();
    std::vector<CrlfContext *> crlf();
    CrlfContext* crlf(size_t i);
    Message_bodyContext *message_body();
    std::vector<Header_fieldContext *> header_field();
    Header_fieldContext* header_field(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Http_messageContext* http_message();

  class  Http_versionContext : public antlr4::ParserRuleContext {
  public:
    Http_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HTTP_NAME();
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Http_versionContext* http_version();

  class  HostContext : public antlr4::ParserRuleContext {
  public:
    HostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Uri_hostContext *uri_host();
    PortContext *port();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HostContext* host();

  class  OwsContext : public antlr4::ParserRuleContext {
  public:
    OwsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HTAB();
    antlr4::tree::TerminalNode* HTAB(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OwsContext* ows();

  class  RwsContext : public antlr4::ParserRuleContext {
  public:
    RwsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HTAB();
    antlr4::tree::TerminalNode* HTAB(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RwsContext* rws();

  class  TeContext : public antlr4::ParserRuleContext {
  public:
    TeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<T_codingsContext *> t_codings();
    T_codingsContext* t_codings(size_t i);
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TeContext* te();

  class  TrailerContext : public antlr4::ParserRuleContext {
  public:
    TrailerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_nameContext *> field_name();
    Field_nameContext* field_name(size_t i);
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailerContext* trailer();

  class  Transfer_encodingContext : public antlr4::ParserRuleContext {
  public:
    Transfer_encodingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Transfer_codingContext *> transfer_coding();
    Transfer_codingContext* transfer_coding(size_t i);
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transfer_encodingContext* transfer_encoding();

  class  UpgradeContext : public antlr4::ParserRuleContext {
  public:
    UpgradeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProtocolContext *> protocol();
    ProtocolContext* protocol(size_t i);
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpgradeContext* upgrade();

  class  ViaContext : public antlr4::ParserRuleContext {
  public:
    ViaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Received_protocolContext *> received_protocol();
    Received_protocolContext* received_protocol(size_t i);
    std::vector<RwsContext *> rws();
    RwsContext* rws(size_t i);
    std::vector<Received_byContext *> received_by();
    Received_byContext* received_by(size_t i);
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViaContext* via();

  class  Absolute_formContext : public antlr4::ParserRuleContext {
  public:
    Absolute_formContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Absolute_uriContext *absolute_uri();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Absolute_formContext* absolute_form();

  class  Absolute_pathContext : public antlr4::ParserRuleContext {
  public:
    Absolute_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SegmentContext *> segment();
    SegmentContext* segment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Absolute_pathContext* absolute_path();

  class  Authority_formContext : public antlr4::ParserRuleContext {
  public:
    Authority_formContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AuthorityContext *authority();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Authority_formContext* authority_form();

  class  ChunkContext : public antlr4::ParserRuleContext {
  public:
    ChunkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Chunk_sizeContext *chunk_size();
    std::vector<CrlfContext *> crlf();
    CrlfContext* crlf(size_t i);
    Chunk_dataContext *chunk_data();
    Chunk_extContext *chunk_ext();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChunkContext* chunk();

  class  Chunk_dataContext : public antlr4::ParserRuleContext {
  public:
    Chunk_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OCTET();
    antlr4::tree::TerminalNode* OCTET(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chunk_dataContext* chunk_data();

  class  Chunk_extContext : public antlr4::ParserRuleContext {
  public:
    Chunk_extContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Chunk_ext_nameContext *> chunk_ext_name();
    Chunk_ext_nameContext* chunk_ext_name(size_t i);
    std::vector<Chunk_ext_valContext *> chunk_ext_val();
    Chunk_ext_valContext* chunk_ext_val(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chunk_extContext* chunk_ext();

  class  Chunk_ext_nameContext : public antlr4::ParserRuleContext {
  public:
    Chunk_ext_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chunk_ext_nameContext* chunk_ext_name();

  class  Chunk_ext_valContext : public antlr4::ParserRuleContext {
  public:
    Chunk_ext_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();
    Quoted_stringContext *quoted_string();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chunk_ext_valContext* chunk_ext_val();

  class  Chunk_sizeContext : public antlr4::ParserRuleContext {
  public:
    Chunk_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HexdigContext *> hexdig();
    HexdigContext* hexdig(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chunk_sizeContext* chunk_size();

  class  Chunked_bodyContext : public antlr4::ParserRuleContext {
  public:
    Chunked_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Last_chunkContext *last_chunk();
    Trailer_partContext *trailer_part();
    CrlfContext *crlf();
    std::vector<ChunkContext *> chunk();
    ChunkContext* chunk(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chunked_bodyContext* chunked_body();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CtextContext *> ctext();
    CtextContext* ctext(size_t i);
    std::vector<Quoted_pairContext *> quoted_pair();
    Quoted_pairContext* quoted_pair(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  Connection_optionContext : public antlr4::ParserRuleContext {
  public:
    Connection_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Connection_optionContext* connection_option();

  class  CtextContext : public antlr4::ParserRuleContext {
  public:
    CtextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HTAB();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *FROM_EX_TO_APO();
    antlr4::tree::TerminalNode *FROM_DASH_TO_LSQBR();
    antlr4::tree::TerminalNode *FROM_RSQBR_TO_TYLDE();
    antlr4::tree::TerminalNode *OBS_TEXT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CtextContext* ctext();

  class  Field_contentContext : public antlr4::ParserRuleContext {
  public:
    Field_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_vcharContext *> field_vchar();
    Field_vcharContext* field_vchar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HTAB();
    antlr4::tree::TerminalNode* HTAB(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_contentContext* field_content();

  class  Field_nameContext : public antlr4::ParserRuleContext {
  public:
    Field_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_nameContext* field_name();

  class  Field_valueContext : public antlr4::ParserRuleContext {
  public:
    Field_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_contentContext *> field_content();
    Field_contentContext* field_content(size_t i);
    std::vector<Obs_foldContext *> obs_fold();
    Obs_foldContext* obs_fold(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_valueContext* field_value();

  class  Field_vcharContext : public antlr4::ParserRuleContext {
  public:
    Field_vcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VCHAR();
    antlr4::tree::TerminalNode *OBS_TEXT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_vcharContext* field_vchar();

  class  Header_fieldContext : public antlr4::ParserRuleContext {
  public:
    Header_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Field_nameContext *field_name();
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);
    Field_valueContext *field_value();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Header_fieldContext* header_field();

  class  Http_uriContext : public antlr4::ParserRuleContext {
  public:
    Http_uriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AuthorityContext *authority();
    Path_abemptyContext *path_abempty();
    QueryContext *query();
    Fragment_1Context *fragment_1();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Http_uriContext* http_uri();

  class  Https_uriContext : public antlr4::ParserRuleContext {
  public:
    Https_uriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AuthorityContext *authority();
    Path_abemptyContext *path_abempty();
    QueryContext *query();
    Fragment_1Context *fragment_1();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Https_uriContext* https_uri();

  class  Last_chunkContext : public antlr4::ParserRuleContext {
  public:
    Last_chunkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CrlfContext *crlf();
    Chunk_extContext *chunk_ext();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Last_chunkContext* last_chunk();

  class  Message_bodyContext : public antlr4::ParserRuleContext {
  public:
    Message_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OCTET();
    antlr4::tree::TerminalNode* OCTET(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Message_bodyContext* message_body();

  class  MethodContext : public antlr4::ParserRuleContext {
  public:
    MethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodContext* method();

  class  Obs_foldContext : public antlr4::ParserRuleContext {
  public:
    Obs_foldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CrlfContext *crlf();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HTAB();
    antlr4::tree::TerminalNode* HTAB(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Obs_foldContext* obs_fold();

  class  Origin_formContext : public antlr4::ParserRuleContext {
  public:
    Origin_formContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Absolute_pathContext *absolute_path();
    QueryContext *query();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Origin_formContext* origin_form();

  class  Partial_uriContext : public antlr4::ParserRuleContext {
  public:
    Partial_uriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relative_partContext *relative_part();
    QueryContext *query();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partial_uriContext* partial_uri();

  class  ProtocolContext : public antlr4::ParserRuleContext {
  public:
    ProtocolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Protocol_nameContext *protocol_name();
    Protocol_versionContext *protocol_version();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProtocolContext* protocol();

  class  Protocol_nameContext : public antlr4::ParserRuleContext {
  public:
    Protocol_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Protocol_nameContext* protocol_name();

  class  Protocol_versionContext : public antlr4::ParserRuleContext {
  public:
    Protocol_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Protocol_versionContext* protocol_version();

  class  PseudonymContext : public antlr4::ParserRuleContext {
  public:
    PseudonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudonymContext* pseudonym();

  class  QdtextContext : public antlr4::ParserRuleContext {
  public:
    QdtextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HTAB();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *FROM_HASH_TO_LSQBR();
    antlr4::tree::TerminalNode *FROM_RSQBR_TO_TYLDE();
    antlr4::tree::TerminalNode *OBS_TEXT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QdtextContext* qdtext();

  class  Quoted_pairContext : public antlr4::ParserRuleContext {
  public:
    Quoted_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HTAB();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *VCHAR();
    antlr4::tree::TerminalNode *OBS_TEXT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quoted_pairContext* quoted_pair();

  class  Quoted_stringContext : public antlr4::ParserRuleContext {
  public:
    Quoted_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DQUOTE();
    antlr4::tree::TerminalNode* DQUOTE(size_t i);
    std::vector<QdtextContext *> qdtext();
    QdtextContext* qdtext(size_t i);
    std::vector<Quoted_pairContext *> quoted_pair();
    Quoted_pairContext* quoted_pair(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quoted_stringContext* quoted_string();

  class  RankContext : public antlr4::ParserRuleContext {
  public:
    RankContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RankContext* rank();

  class  Reason_phraseContext : public antlr4::ParserRuleContext {
  public:
    Reason_phraseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> HTAB();
    antlr4::tree::TerminalNode* HTAB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VCHAR();
    antlr4::tree::TerminalNode* VCHAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OBS_TEXT();
    antlr4::tree::TerminalNode* OBS_TEXT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reason_phraseContext* reason_phrase();

  class  Received_byContext : public antlr4::ParserRuleContext {
  public:
    Received_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Uri_hostContext *uri_host();
    PortContext *port();
    PseudonymContext *pseudonym();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Received_byContext* received_by();

  class  Received_protocolContext : public antlr4::ParserRuleContext {
  public:
    Received_protocolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Protocol_versionContext *protocol_version();
    Protocol_nameContext *protocol_name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Received_protocolContext* received_protocol();

  class  Request_lineContext : public antlr4::ParserRuleContext {
  public:
    Request_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodContext *method();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    Request_targetContext *request_target();
    Http_versionContext *http_version();
    CrlfContext *crlf();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Request_lineContext* request_line();

  class  Request_targetContext : public antlr4::ParserRuleContext {
  public:
    Request_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Origin_formContext *origin_form();
    Absolute_formContext *absolute_form();
    Authority_formContext *authority_form();
    antlr4::tree::TerminalNode *ASTERISK_FORM();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Request_targetContext* request_target();

  class  Start_lineContext : public antlr4::ParserRuleContext {
  public:
    Start_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Request_lineContext *request_line();
    Status_lineContext *status_line();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_lineContext* start_line();

  class  Status_codeContext : public antlr4::ParserRuleContext {
  public:
    Status_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Status_codeContext* status_code();

  class  Status_lineContext : public antlr4::ParserRuleContext {
  public:
    Status_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Http_versionContext *http_version();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    Status_codeContext *status_code();
    Reason_phraseContext *reason_phrase();
    CrlfContext *crlf();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Status_lineContext* status_line();

  class  T_codingsContext : public antlr4::ParserRuleContext {
  public:
    T_codingsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Transfer_codingContext *transfer_coding();
    T_rankingContext *t_ranking();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T_codingsContext* t_codings();

  class  T_rankingContext : public antlr4::ParserRuleContext {
  public:
    T_rankingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);
    RankContext *rank();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T_rankingContext* t_ranking();

  class  TcharContext : public antlr4::ParserRuleContext {
  public:
    TcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASTERISK_FORM();
    antlr4::tree::TerminalNode *DIGIT();
    antlr4::tree::TerminalNode *ALPHA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TcharContext* tchar();

  class  TokenContext : public antlr4::ParserRuleContext {
  public:
    TokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TcharContext *> tchar();
    TcharContext* tchar(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokenContext* token();

  class  Trailer_partContext : public antlr4::ParserRuleContext {
  public:
    Trailer_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Header_fieldContext *> header_field();
    Header_fieldContext* header_field(size_t i);
    std::vector<CrlfContext *> crlf();
    CrlfContext* crlf(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trailer_partContext* trailer_part();

  class  Transfer_codingContext : public antlr4::ParserRuleContext {
  public:
    Transfer_codingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Transfer_extensionContext *transfer_extension();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transfer_codingContext* transfer_coding();

  class  Transfer_extensionContext : public antlr4::ParserRuleContext {
  public:
    Transfer_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TokenContext *token();
    std::vector<OwsContext *> ows();
    OwsContext* ows(size_t i);
    std::vector<Transfer_parameterContext *> transfer_parameter();
    Transfer_parameterContext* transfer_parameter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transfer_extensionContext* transfer_extension();

  class  Transfer_parameterContext : public antlr4::ParserRuleContext {
  public:
    Transfer_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TokenContext *> token();
    TokenContext* token(size_t i);
    std::vector<BwsContext *> bws();
    BwsContext* bws(size_t i);
    Quoted_stringContext *quoted_string();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transfer_parameterContext* transfer_parameter();

  class  UriContext : public antlr4::ParserRuleContext {
  public:
    UriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemeContext *scheme();
    Hier_partContext *hier_part();
    QueryContext *query();
    Fragment_1Context *fragment_1();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UriContext* uri();

  class  Hier_partContext : public antlr4::ParserRuleContext {
  public:
    Hier_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AuthorityContext *authority();
    Path_abemptyContext *path_abempty();
    Path_absoluteContext *path_absolute();
    Path_rootlessContext *path_rootless();
    Path_emptyContext *path_empty();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hier_partContext* hier_part();

  class  Uri_referenceContext : public antlr4::ParserRuleContext {
  public:
    Uri_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UriContext *uri();
    Relative_refContext *relative_ref();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uri_referenceContext* uri_reference();

  class  Absolute_uriContext : public antlr4::ParserRuleContext {
  public:
    Absolute_uriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemeContext *scheme();
    Hier_partContext *hier_part();
    QueryContext *query();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Absolute_uriContext* absolute_uri();

  class  Relative_refContext : public antlr4::ParserRuleContext {
  public:
    Relative_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relative_partContext *relative_part();
    QueryContext *query();
    Fragment_1Context *fragment_1();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relative_refContext* relative_ref();

  class  Relative_partContext : public antlr4::ParserRuleContext {
  public:
    Relative_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AuthorityContext *authority();
    Path_abemptyContext *path_abempty();
    Path_absoluteContext *path_absolute();
    Path_noschemeContext *path_noscheme();
    Path_emptyContext *path_empty();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relative_partContext* relative_part();

  class  SchemeContext : public antlr4::ParserRuleContext {
  public:
    SchemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALPHA();
    antlr4::tree::TerminalNode* ALPHA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemeContext* scheme();

  class  AuthorityContext : public antlr4::ParserRuleContext {
  public:
    AuthorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Uri_hostContext *uri_host();
    UserinfoContext *userinfo();
    PortContext *port();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AuthorityContext* authority();

  class  UserinfoContext : public antlr4::ParserRuleContext {
  public:
    UserinfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnreservedContext *> unreserved();
    UnreservedContext* unreserved(size_t i);
    std::vector<Pct_encodedContext *> pct_encoded();
    Pct_encodedContext* pct_encoded(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUB_DELIMS();
    antlr4::tree::TerminalNode* SUB_DELIMS(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserinfoContext* userinfo();

  class  Uri_hostContext : public antlr4::ParserRuleContext {
  public:
    Uri_hostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ip_literalContext *ip_literal();
    Ipv4addressContext *ipv4address();
    Reg_nameContext *reg_name();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uri_hostContext* uri_host();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class  Ip_literalContext : public antlr4::ParserRuleContext {
  public:
    Ip_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ipv6addressContext *ipv6address();
    IpvfutureContext *ipvfuture();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ip_literalContext* ip_literal();

  class  IpvfutureContext : public antlr4::ParserRuleContext {
  public:
    IpvfutureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HexdigContext *> hexdig();
    HexdigContext* hexdig(size_t i);
    std::vector<UnreservedContext *> unreserved();
    UnreservedContext* unreserved(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUB_DELIMS();
    antlr4::tree::TerminalNode* SUB_DELIMS(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IpvfutureContext* ipvfuture();

  class  Ipv6addressContext : public antlr4::ParserRuleContext {
  public:
    Ipv6addressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ls32Context *ls32();
    std::vector<H16Context *> h16();
    H16Context* h16(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ipv6addressContext* ipv6address();

  class  H16Context : public antlr4::ParserRuleContext {
  public:
    H16Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HexdigContext *> hexdig();
    HexdigContext* hexdig(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  H16Context* h16();

  class  Ls32Context : public antlr4::ParserRuleContext {
  public:
    Ls32Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<H16Context *> h16();
    H16Context* h16(size_t i);
    Ipv4addressContext *ipv4address();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ls32Context* ls32();

  class  Ipv4addressContext : public antlr4::ParserRuleContext {
  public:
    Ipv4addressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dec_octetContext *> dec_octet();
    Dec_octetContext* dec_octet(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ipv4addressContext* ipv4address();

  class  Dec_octetContext : public antlr4::ParserRuleContext {
  public:
    Dec_octetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);
    antlr4::tree::TerminalNode *ONE_TO_NINE();
    antlr4::tree::TerminalNode *ZERO_TO_FOUR();
    antlr4::tree::TerminalNode *ZERO_TO_FIVE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dec_octetContext* dec_octet();

  class  Reg_nameContext : public antlr4::ParserRuleContext {
  public:
    Reg_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnreservedContext *> unreserved();
    UnreservedContext* unreserved(size_t i);
    std::vector<Pct_encodedContext *> pct_encoded();
    Pct_encodedContext* pct_encoded(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUB_DELIMS();
    antlr4::tree::TerminalNode* SUB_DELIMS(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reg_nameContext* reg_name();

  class  PathContext : public antlr4::ParserRuleContext {
  public:
    PathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_abemptyContext *path_abempty();
    Path_absoluteContext *path_absolute();
    Path_noschemeContext *path_noscheme();
    Path_rootlessContext *path_rootless();
    Path_emptyContext *path_empty();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PathContext* path();

  class  Path_abemptyContext : public antlr4::ParserRuleContext {
  public:
    Path_abemptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SegmentContext *> segment();
    SegmentContext* segment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_abemptyContext* path_abempty();

  class  Path_absoluteContext : public antlr4::ParserRuleContext {
  public:
    Path_absoluteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Segment_nzContext *segment_nz();
    std::vector<SegmentContext *> segment();
    SegmentContext* segment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_absoluteContext* path_absolute();

  class  Path_noschemeContext : public antlr4::ParserRuleContext {
  public:
    Path_noschemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Segment_nz_ncContext *segment_nz_nc();
    std::vector<SegmentContext *> segment();
    SegmentContext* segment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_noschemeContext* path_noscheme();

  class  Path_rootlessContext : public antlr4::ParserRuleContext {
  public:
    Path_rootlessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Segment_nzContext *segment_nz();
    std::vector<SegmentContext *> segment();
    SegmentContext* segment(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_rootlessContext* path_rootless();

  class  Path_emptyContext : public antlr4::ParserRuleContext {
  public:
    Path_emptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_emptyContext* path_empty();

  class  SegmentContext : public antlr4::ParserRuleContext {
  public:
    SegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PcharContext *> pchar();
    PcharContext* pchar(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SegmentContext* segment();

  class  Segment_nzContext : public antlr4::ParserRuleContext {
  public:
    Segment_nzContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PcharContext *> pchar();
    PcharContext* pchar(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Segment_nzContext* segment_nz();

  class  Segment_nz_ncContext : public antlr4::ParserRuleContext {
  public:
    Segment_nz_ncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnreservedContext *> unreserved();
    UnreservedContext* unreserved(size_t i);
    std::vector<Pct_encodedContext *> pct_encoded();
    Pct_encodedContext* pct_encoded(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUB_DELIMS();
    antlr4::tree::TerminalNode* SUB_DELIMS(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Segment_nz_ncContext* segment_nz_nc();

  class  PcharContext : public antlr4::ParserRuleContext {
  public:
    PcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnreservedContext *unreserved();
    Pct_encodedContext *pct_encoded();
    antlr4::tree::TerminalNode *SUB_DELIMS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PcharContext* pchar();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PcharContext *> pchar();
    PcharContext* pchar(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  Fragment_1Context : public antlr4::ParserRuleContext {
  public:
    Fragment_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PcharContext *> pchar();
    PcharContext* pchar(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fragment_1Context* fragment_1();

  class  Pct_encodedContext : public antlr4::ParserRuleContext {
  public:
    Pct_encodedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HexdigContext *> hexdig();
    HexdigContext* hexdig(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pct_encodedContext* pct_encoded();

  class  UnreservedContext : public antlr4::ParserRuleContext {
  public:
    UnreservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALPHA();
    antlr4::tree::TerminalNode *DIGIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnreservedContext* unreserved();

  class  ReservedContext : public antlr4::ParserRuleContext {
  public:
    ReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GEN_DELIMS();
    antlr4::tree::TerminalNode *SUB_DELIMS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReservedContext* reserved();

  class  CrlfContext : public antlr4::ParserRuleContext {
  public:
    CrlfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CR();
    antlr4::tree::TerminalNode *LF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CrlfContext* crlf();

  class  HexdigContext : public antlr4::ParserRuleContext {
  public:
    HexdigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexdigContext* hexdig();

  class  LwspContext : public antlr4::ParserRuleContext {
  public:
    LwspContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WspContext *> wsp();
    WspContext* wsp(size_t i);
    std::vector<CrlfContext *> crlf();
    CrlfContext* crlf(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LwspContext* lwsp();

  class  WspContext : public antlr4::ParserRuleContext {
  public:
    WspContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *HTAB();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WspContext* wsp();


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

