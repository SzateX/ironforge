
// Generated from http.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "httpVisitor.h"


/**
 * This class provides an empty implementation of httpVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  httpBaseVisitor : public httpVisitor {
public:

  virtual antlrcpp::Any visitBws(httpParser::BwsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnection(httpParser::ConnectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContent_length(httpParser::Content_lengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHttp_message(httpParser::Http_messageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHttp_version(httpParser::Http_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost(httpParser::HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOws(httpParser::OwsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRws(httpParser::RwsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTe(httpParser::TeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailer(httpParser::TrailerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransfer_encoding(httpParser::Transfer_encodingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpgrade(httpParser::UpgradeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVia(httpParser::ViaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbsolute_form(httpParser::Absolute_formContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbsolute_path(httpParser::Absolute_pathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthority_form(httpParser::Authority_formContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChunk(httpParser::ChunkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChunk_data(httpParser::Chunk_dataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChunk_ext(httpParser::Chunk_extContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChunk_ext_name(httpParser::Chunk_ext_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChunk_ext_val(httpParser::Chunk_ext_valContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChunk_size(httpParser::Chunk_sizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChunked_body(httpParser::Chunked_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(httpParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnection_option(httpParser::Connection_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCtext(httpParser::CtextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_content(httpParser::Field_contentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_name(httpParser::Field_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_value(httpParser::Field_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_vchar(httpParser::Field_vcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader_field(httpParser::Header_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHttp_uri(httpParser::Http_uriContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHttps_uri(httpParser::Https_uriContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLast_chunk(httpParser::Last_chunkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessage_body(httpParser::Message_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethod(httpParser::MethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObs_fold(httpParser::Obs_foldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrigin_form(httpParser::Origin_formContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartial_uri(httpParser::Partial_uriContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProtocol(httpParser::ProtocolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProtocol_name(httpParser::Protocol_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProtocol_version(httpParser::Protocol_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPseudonym(httpParser::PseudonymContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQdtext(httpParser::QdtextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuoted_pair(httpParser::Quoted_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuoted_string(httpParser::Quoted_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRank(httpParser::RankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReason_phrase(httpParser::Reason_phraseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReceived_by(httpParser::Received_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReceived_protocol(httpParser::Received_protocolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRequest_line(httpParser::Request_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRequest_target(httpParser::Request_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_line(httpParser::Start_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatus_code(httpParser::Status_codeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatus_line(httpParser::Status_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitT_codings(httpParser::T_codingsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitT_ranking(httpParser::T_rankingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTchar(httpParser::TcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToken(httpParser::TokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailer_part(httpParser::Trailer_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransfer_coding(httpParser::Transfer_codingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransfer_extension(httpParser::Transfer_extensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransfer_parameter(httpParser::Transfer_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUri(httpParser::UriContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHier_part(httpParser::Hier_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUri_reference(httpParser::Uri_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbsolute_uri(httpParser::Absolute_uriContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelative_ref(httpParser::Relative_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelative_part(httpParser::Relative_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScheme(httpParser::SchemeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthority(httpParser::AuthorityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserinfo(httpParser::UserinfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUri_host(httpParser::Uri_hostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPort(httpParser::PortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIp_literal(httpParser::Ip_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIpvfuture(httpParser::IpvfutureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIpv6address(httpParser::Ipv6addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitH16(httpParser::H16Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLs32(httpParser::Ls32Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIpv4address(httpParser::Ipv4addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec_octet(httpParser::Dec_octetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReg_name(httpParser::Reg_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath(httpParser::PathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath_abempty(httpParser::Path_abemptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath_absolute(httpParser::Path_absoluteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath_noscheme(httpParser::Path_noschemeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath_rootless(httpParser::Path_rootlessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath_empty(httpParser::Path_emptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSegment(httpParser::SegmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSegment_nz(httpParser::Segment_nzContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSegment_nz_nc(httpParser::Segment_nz_ncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPchar(httpParser::PcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery(httpParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFragment_1(httpParser::Fragment_1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPct_encoded(httpParser::Pct_encodedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnreserved(httpParser::UnreservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReserved(httpParser::ReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCrlf(httpParser::CrlfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexdig(httpParser::HexdigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLwsp(httpParser::LwspContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWsp(httpParser::WspContext *ctx) override {
    return visitChildren(ctx);
  }


};

