
// Generated from http.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "httpParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by httpParser.
 */
class  httpVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by httpParser.
   */
    virtual antlrcpp::Any visitBws(httpParser::BwsContext *context) = 0;

    virtual antlrcpp::Any visitConnection(httpParser::ConnectionContext *context) = 0;

    virtual antlrcpp::Any visitContent_length(httpParser::Content_lengthContext *context) = 0;

    virtual antlrcpp::Any visitHttp_message(httpParser::Http_messageContext *context) = 0;

    virtual antlrcpp::Any visitHttp_version(httpParser::Http_versionContext *context) = 0;

    virtual antlrcpp::Any visitHost(httpParser::HostContext *context) = 0;

    virtual antlrcpp::Any visitOws(httpParser::OwsContext *context) = 0;

    virtual antlrcpp::Any visitRws(httpParser::RwsContext *context) = 0;

    virtual antlrcpp::Any visitTe(httpParser::TeContext *context) = 0;

    virtual antlrcpp::Any visitTrailer(httpParser::TrailerContext *context) = 0;

    virtual antlrcpp::Any visitTransfer_encoding(httpParser::Transfer_encodingContext *context) = 0;

    virtual antlrcpp::Any visitUpgrade(httpParser::UpgradeContext *context) = 0;

    virtual antlrcpp::Any visitVia(httpParser::ViaContext *context) = 0;

    virtual antlrcpp::Any visitAbsolute_form(httpParser::Absolute_formContext *context) = 0;

    virtual antlrcpp::Any visitAbsolute_path(httpParser::Absolute_pathContext *context) = 0;

    virtual antlrcpp::Any visitAuthority_form(httpParser::Authority_formContext *context) = 0;

    virtual antlrcpp::Any visitChunk(httpParser::ChunkContext *context) = 0;

    virtual antlrcpp::Any visitChunk_data(httpParser::Chunk_dataContext *context) = 0;

    virtual antlrcpp::Any visitChunk_ext(httpParser::Chunk_extContext *context) = 0;

    virtual antlrcpp::Any visitChunk_ext_name(httpParser::Chunk_ext_nameContext *context) = 0;

    virtual antlrcpp::Any visitChunk_ext_val(httpParser::Chunk_ext_valContext *context) = 0;

    virtual antlrcpp::Any visitChunk_size(httpParser::Chunk_sizeContext *context) = 0;

    virtual antlrcpp::Any visitChunked_body(httpParser::Chunked_bodyContext *context) = 0;

    virtual antlrcpp::Any visitComment(httpParser::CommentContext *context) = 0;

    virtual antlrcpp::Any visitConnection_option(httpParser::Connection_optionContext *context) = 0;

    virtual antlrcpp::Any visitCtext(httpParser::CtextContext *context) = 0;

    virtual antlrcpp::Any visitField_content(httpParser::Field_contentContext *context) = 0;

    virtual antlrcpp::Any visitField_name(httpParser::Field_nameContext *context) = 0;

    virtual antlrcpp::Any visitField_value(httpParser::Field_valueContext *context) = 0;

    virtual antlrcpp::Any visitField_vchar(httpParser::Field_vcharContext *context) = 0;

    virtual antlrcpp::Any visitHeader_field(httpParser::Header_fieldContext *context) = 0;

    virtual antlrcpp::Any visitHttp_uri(httpParser::Http_uriContext *context) = 0;

    virtual antlrcpp::Any visitHttps_uri(httpParser::Https_uriContext *context) = 0;

    virtual antlrcpp::Any visitLast_chunk(httpParser::Last_chunkContext *context) = 0;

    virtual antlrcpp::Any visitMessage_body(httpParser::Message_bodyContext *context) = 0;

    virtual antlrcpp::Any visitMethod(httpParser::MethodContext *context) = 0;

    virtual antlrcpp::Any visitObs_fold(httpParser::Obs_foldContext *context) = 0;

    virtual antlrcpp::Any visitOrigin_form(httpParser::Origin_formContext *context) = 0;

    virtual antlrcpp::Any visitPartial_uri(httpParser::Partial_uriContext *context) = 0;

    virtual antlrcpp::Any visitProtocol(httpParser::ProtocolContext *context) = 0;

    virtual antlrcpp::Any visitProtocol_name(httpParser::Protocol_nameContext *context) = 0;

    virtual antlrcpp::Any visitProtocol_version(httpParser::Protocol_versionContext *context) = 0;

    virtual antlrcpp::Any visitPseudonym(httpParser::PseudonymContext *context) = 0;

    virtual antlrcpp::Any visitQdtext(httpParser::QdtextContext *context) = 0;

    virtual antlrcpp::Any visitQuoted_pair(httpParser::Quoted_pairContext *context) = 0;

    virtual antlrcpp::Any visitQuoted_string(httpParser::Quoted_stringContext *context) = 0;

    virtual antlrcpp::Any visitRank(httpParser::RankContext *context) = 0;

    virtual antlrcpp::Any visitReason_phrase(httpParser::Reason_phraseContext *context) = 0;

    virtual antlrcpp::Any visitReceived_by(httpParser::Received_byContext *context) = 0;

    virtual antlrcpp::Any visitReceived_protocol(httpParser::Received_protocolContext *context) = 0;

    virtual antlrcpp::Any visitRequest_line(httpParser::Request_lineContext *context) = 0;

    virtual antlrcpp::Any visitRequest_target(httpParser::Request_targetContext *context) = 0;

    virtual antlrcpp::Any visitStart_line(httpParser::Start_lineContext *context) = 0;

    virtual antlrcpp::Any visitStatus_code(httpParser::Status_codeContext *context) = 0;

    virtual antlrcpp::Any visitStatus_line(httpParser::Status_lineContext *context) = 0;

    virtual antlrcpp::Any visitT_codings(httpParser::T_codingsContext *context) = 0;

    virtual antlrcpp::Any visitT_ranking(httpParser::T_rankingContext *context) = 0;

    virtual antlrcpp::Any visitTchar(httpParser::TcharContext *context) = 0;

    virtual antlrcpp::Any visitToken(httpParser::TokenContext *context) = 0;

    virtual antlrcpp::Any visitTrailer_part(httpParser::Trailer_partContext *context) = 0;

    virtual antlrcpp::Any visitTransfer_coding(httpParser::Transfer_codingContext *context) = 0;

    virtual antlrcpp::Any visitTransfer_extension(httpParser::Transfer_extensionContext *context) = 0;

    virtual antlrcpp::Any visitTransfer_parameter(httpParser::Transfer_parameterContext *context) = 0;

    virtual antlrcpp::Any visitUri(httpParser::UriContext *context) = 0;

    virtual antlrcpp::Any visitHier_part(httpParser::Hier_partContext *context) = 0;

    virtual antlrcpp::Any visitUri_reference(httpParser::Uri_referenceContext *context) = 0;

    virtual antlrcpp::Any visitAbsolute_uri(httpParser::Absolute_uriContext *context) = 0;

    virtual antlrcpp::Any visitRelative_ref(httpParser::Relative_refContext *context) = 0;

    virtual antlrcpp::Any visitRelative_part(httpParser::Relative_partContext *context) = 0;

    virtual antlrcpp::Any visitScheme(httpParser::SchemeContext *context) = 0;

    virtual antlrcpp::Any visitAuthority(httpParser::AuthorityContext *context) = 0;

    virtual antlrcpp::Any visitUserinfo(httpParser::UserinfoContext *context) = 0;

    virtual antlrcpp::Any visitUri_host(httpParser::Uri_hostContext *context) = 0;

    virtual antlrcpp::Any visitPort(httpParser::PortContext *context) = 0;

    virtual antlrcpp::Any visitIp_literal(httpParser::Ip_literalContext *context) = 0;

    virtual antlrcpp::Any visitIpvfuture(httpParser::IpvfutureContext *context) = 0;

    virtual antlrcpp::Any visitIpv6address(httpParser::Ipv6addressContext *context) = 0;

    virtual antlrcpp::Any visitH16(httpParser::H16Context *context) = 0;

    virtual antlrcpp::Any visitLs32(httpParser::Ls32Context *context) = 0;

    virtual antlrcpp::Any visitIpv4address(httpParser::Ipv4addressContext *context) = 0;

    virtual antlrcpp::Any visitDec_octet(httpParser::Dec_octetContext *context) = 0;

    virtual antlrcpp::Any visitReg_name(httpParser::Reg_nameContext *context) = 0;

    virtual antlrcpp::Any visitPath(httpParser::PathContext *context) = 0;

    virtual antlrcpp::Any visitPath_abempty(httpParser::Path_abemptyContext *context) = 0;

    virtual antlrcpp::Any visitPath_absolute(httpParser::Path_absoluteContext *context) = 0;

    virtual antlrcpp::Any visitPath_noscheme(httpParser::Path_noschemeContext *context) = 0;

    virtual antlrcpp::Any visitPath_rootless(httpParser::Path_rootlessContext *context) = 0;

    virtual antlrcpp::Any visitPath_empty(httpParser::Path_emptyContext *context) = 0;

    virtual antlrcpp::Any visitSegment(httpParser::SegmentContext *context) = 0;

    virtual antlrcpp::Any visitSegment_nz(httpParser::Segment_nzContext *context) = 0;

    virtual antlrcpp::Any visitSegment_nz_nc(httpParser::Segment_nz_ncContext *context) = 0;

    virtual antlrcpp::Any visitPchar(httpParser::PcharContext *context) = 0;

    virtual antlrcpp::Any visitQuery(httpParser::QueryContext *context) = 0;

    virtual antlrcpp::Any visitFragment_1(httpParser::Fragment_1Context *context) = 0;

    virtual antlrcpp::Any visitPct_encoded(httpParser::Pct_encodedContext *context) = 0;

    virtual antlrcpp::Any visitUnreserved(httpParser::UnreservedContext *context) = 0;

    virtual antlrcpp::Any visitReserved(httpParser::ReservedContext *context) = 0;

    virtual antlrcpp::Any visitCrlf(httpParser::CrlfContext *context) = 0;

    virtual antlrcpp::Any visitHexdig(httpParser::HexdigContext *context) = 0;

    virtual antlrcpp::Any visitLwsp(httpParser::LwspContext *context) = 0;

    virtual antlrcpp::Any visitWsp(httpParser::WspContext *context) = 0;


};

