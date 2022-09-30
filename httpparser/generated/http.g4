grammar http;


bws : ows;
connection : ( ',' ows )* connection_option ( ows ',' ( ows connection_option )? )*;

content_length : DIGIT+;

http_message : start_line ( header_field crlf )* crlf message_body;
HTTP_NAME : ('\u0048' '\u0054' '\u0054' '\u0050'); // HTTP
http_version : HTTP_NAME '/' DIGIT '.' DIGIT;
host : uri_host ( ':' port )?;

ows : ( SP | HTAB )*;
rws : ( SP | HTAB )+;

te : ( ( ',' | t_codings ) ( ows ',' ( ows t_codings )? )* )?;
trailer : ( ',' ows )* field_name ( ows ',' ( ows field_name )? )*;
transfer_encoding : ( ',' ows )* transfer_coding ( ows ',' ( ows transfer_coding )? )*;

upgrade : ( ',' ows )* protocol ( ows ',' ( ows protocol )? )*;

via : ( ',' ows )* ( received_protocol rws received_by ( rws comment )? ) ( ows ',' ( ows ( received_protocol rws received_by ( rws comment )? ) )? )*;

absolute_form : absolute_uri;
absolute_path : ( '/' segment )+;
ASTERISK_FORM : '*';
authority_form : authority;

chunk : chunk_size ( chunk_ext )? crlf chunk_data crlf;
chunk_data : OCTET+;
chunk_ext : ( ';' chunk_ext_name ( '=' chunk_ext_val )? )*;
chunk_ext_name : token;
chunk_ext_val : token | quoted_string;
chunk_size : hexdig+;
chunked_body : chunk* last_chunk trailer_part crlf;
comment : '(' ( ctext | quoted_pair | comment )* ')';
connection_option : token;
FROM_EX_TO_APO
	: '\u0021'..'\u0027';
FROM_DASH_TO_LSQBR
	: '\u002A'..'\u005B';
FROM_RSQBR_TO_TYLDE
	: '\u005D'..'\u007E';
ctext : HTAB | SP | FROM_EX_TO_APO // '!'-'''
    | FROM_DASH_TO_LSQBR // '*'-'['
    | FROM_RSQBR_TO_TYLDE // ']'-'~'
    | OBS_TEXT;

field_content : field_vchar ( ( SP | HTAB )+ field_vchar )?;
field_name : token;
field_value : ( field_content | obs_fold )*;
field_vchar : VCHAR | OBS_TEXT;

header_field : field_name ':' ows field_value ows;
http_uri : (('H' | 'h') ('T' | 't') ('T' | 't') ('P' | 'p') ':' '/' '/') authority path_abempty ( '?' query )? ( '#'
    fragment_1 )?;
https_uri : (('H' | 'h') ('T' | 't') ('T' | 't') ('P' | 'p') ('S' | 's') ':' '/' '/') authority path_abempty ( '?' query )? ( '#'
    fragment_1 )?;

last_chunk : '0'+ ( chunk_ext )? crlf;

message_body : OCTET*;
method : token;

obs_fold : crlf ( SP | HTAB )+;
OBS_TEXT : '\u0080'..'\u00FF';
origin_form : absolute_path ( '?' query )?;

partial_uri : relative_part ( '?' query )?;
protocol : protocol_name ( '/' protocol_version )?;
protocol_name : token;
protocol_version : token;
pseudonym : token;

FROM_HASH_TO_LSQBR
	: '\u0023'..'\u005B';
qdtext : HTAB | SP | '!' | FROM_HASH_TO_LSQBR // '#'-'['
    | FROM_RSQBR_TO_TYLDE // ']'-'~'
    | OBS_TEXT;
quoted_pair : '\\' ( HTAB | SP | VCHAR | OBS_TEXT );

quoted_string : DQUOTE ( qdtext | quoted_pair )* DQUOTE;

rank : ( '0' ( '.' (((DIGIT DIGIT DIGIT) | (DIGIT DIGIT) | DIGIT?)) )? ) | ( '1' ( '.' ((('0' '0' '0') | ('0' '0') | '0'?)) )? );
reason_phrase : ( HTAB | SP | VCHAR | OBS_TEXT )*;
received_by : ( uri_host ( ':' port )? ) | pseudonym;
received_protocol : ( protocol_name '/' )? protocol_version;
request_line : method SP request_target SP http_version crlf;
request_target : origin_form | absolute_form | authority_form |
    ASTERISK_FORM;

start_line : request_line | status_line;
status_code : (DIGIT DIGIT DIGIT);
status_line : http_version SP status_code SP reason_phrase crlf;

t_codings : (('T' | 't') ('R' | 'r') ('A' | 'a') ('I' | 'i') ('L' | 'l') ('E' | 'e') ('R' | 'r') ('S' | 's')) | ( transfer_coding ( t_ranking )? );
t_ranking : ows ';' ows (('Q' | 'q') '=') rank;
tchar : '!' | '#' | '$' | '%' | '&' | '\'' | '*' | '+' | '-' | '.' |
    '^' | '_' | '`' | '|' | '~' | DIGIT | ALPHA;
token : tchar+;
trailer_part : ( header_field crlf )*;
transfer_coding : (('C' | 'c') ('H' | 'h') ('U' | 'u') ('N' | 'n') ('K' | 'k') ('E' | 'e') ('D' | 'd')) | (('C' | 'c') ('O' | 'o') ('M' | 'm') ('P' | 'p') ('R' | 'r') ('E' | 'e') ('S' | 's') ('S' | 's')) | (('D' | 'd') ('E' | 'e') ('F' | 'f') ('L' | 'l') ('A' | 'a') ('T' | 't') ('E' | 'e')) | (('G' | 'g') ('Z' | 'z') ('I' | 'i') ('P' | 'p')) |
    transfer_extension;
transfer_extension : token ( ows ';' ows transfer_parameter )*;
transfer_parameter : token bws '=' bws ( token | quoted_string );

// RFC3986
uri           : scheme ':' hier_part ( '?' query )? ( '#' fragment_1 )?;

hier_part     : (('/' '/') authority path_abempty)
                 | path_absolute
                 | path_rootless
                 | path_empty;

uri_reference : uri | relative_ref;

absolute_uri  : scheme ':' hier_part ( '?' query )?;

relative_ref  : relative_part ( '?' query )? ( '#' fragment_1 )?;

relative_part : (('/' '/') authority path_abempty)
                 | path_absolute
                 | path_noscheme
                 | path_empty;

scheme        : ALPHA ( ALPHA | DIGIT | '+' | '-' | '.' )*;

authority     : ( userinfo '@' )? uri_host ( ':' port )?;
userinfo      : ( unreserved | pct_encoded | SUB_DELIMS | ':' )*;
uri_host          : ip_literal | ipv4address | reg_name;
port          : DIGIT*;

ip_literal    : '[' ( ipv6address | ipvfuture  ) ']';

ipvfuture     : ('V' | 'v') hexdig+ '.' ( unreserved | SUB_DELIMS | ':' )+;

ipv6address   :                            ((( h16 ':' ) (h16 ':') (h16 ':') (h16 ':') (h16 ':') (h16 ':')) ls32)
                 |                       ((':' ':') (( h16 ':' ) (h16 ':') (h16 ':') (h16 ':') (h16 ':')) ls32)
                 | ((               h16 )? (':' ':') (( h16 ':' ) (h16 ':') (h16 ':') (h16 ':')) ls32)
                 | (( ( h16 ':' )? h16 )? (':' ':') (( h16 ':' ) (h16 ':') (h16 ':')) ls32)
                 | (( (((( h16 ':' ) (h16 ':')) | (h16 ':')?)) h16 )? (':' ':') (( h16 ':' ) (h16 ':')) ls32)
                 | (( (((( h16 ':' ) (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':')) | (h16 ':')?)) h16 )? (':' ':')    h16 ':'   ls32)
                 | (( (((( h16 ':' ) (h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':')) | (h16 ':')?)) h16 )? (':' ':')              ls32)
                 | (( (((( h16 ':' ) (h16 ':') (h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':')) | (h16 ':')?)) h16 )? (':' ':')              h16)
                 | (( (((( h16 ':' ) (h16 ':') (h16 ':') (h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':') (h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':') (h16 ':')) | ((h16 ':') (h16 ':')) | (h16 ':')?)) h16 )? (':' ':'));

h16           : (hexdig ((hexdig hexdig hexdig) | (hexdig hexdig) | hexdig?));
ls32          : ( h16 ':' h16 ) | ipv4address;
ipv4address   : dec_octet '.' dec_octet '.' dec_octet '.' dec_octet;


ONE_TO_NINE
	: '\u0031'..'\u0039';
ZERO_TO_FOUR
	: '\u0030'..'\u0034';
ZERO_TO_FIVE
	: '\u0030'..'\u0035';
dec_octet     : DIGIT                 // 0-9
                 | (ONE_TO_NINE DIGIT)         // 10-99
                 | ('1' (DIGIT DIGIT))            // 100-199
                 | ('2' ZERO_TO_FOUR DIGIT)     // 200-249
                 | (('2' '5') ZERO_TO_FIVE);          // 250-255

reg_name      : ( unreserved | pct_encoded | SUB_DELIMS )*;

path          : path_abempty    // begins with "/" or is empty
                 | path_absolute   // begins with "/" but not "//"
                 | path_noscheme   // begins with a non-colon segment
                 | path_rootless   // begins with a segment
                 | path_empty;      // zero characters

path_abempty  : ( '/' segment )*;
path_absolute : '/' ( segment_nz ( '/' segment )* )?;
path_noscheme : segment_nz_nc ( '/' segment )*;
path_rootless : segment_nz ( '/' segment )*;
path_empty    : ;

segment       : pchar*;
segment_nz    : pchar+;
segment_nz_nc : ( unreserved | pct_encoded | SUB_DELIMS | '@' )+;
                 // non-zero-length segment without any colon ":"

pchar         : unreserved | pct_encoded | SUB_DELIMS | ':' | '@';

query         : ( pchar | '/' | '?' )*;

fragment_1      : ( pchar | '/' | '?' )*;

pct_encoded   : '%' hexdig hexdig;

unreserved    : ALPHA | DIGIT | '-' | '.' | '_' | '~';
reserved      : GEN_DELIMS | SUB_DELIMS;
GEN_DELIMS    : ':' | '/' | '?' | '#' | '[' | ']' | '@';
SUB_DELIMS    : '!' | '$' | '&' | '\'' | '(' | ')'
                 | '*' | '+' | ',' | ';' | '=';


//RFC 5234
ALPHA          :  '\u0041'..'\u005A' | '\u0061'..'\u007A';   // A-Z / a-z

BIT            :  '0' | '1';

CHAR_1           :  '\u0001'..'\u007F';
                  // any 7-bit US-ASCII character,
                  //  excluding NUL

CR             :  '\u000D';
                  // carriage return

crlf           :  CR LF;
                  // Internet standard newline

CTL            :  '\u0000'..'\u001F' | '\u007F';
                  // controls

DIGIT          :  '\u0030'..'\u0039';
                  // 0-9

DQUOTE         :  '\u0022';
                  // " (Double Quote)

hexdig         :  DIGIT | ('A' | 'a') | ('B' | 'b') | ('C' | 'c') | ('D' | 'd') | ('E' | 'e') | ('F' | 'f');
HTAB           :  '\u0009';
                  // horizontal tab

LF             :  '\u000A';
                  // linefeed

lwsp           :  (wsp | (crlf wsp))*;
                  // Use of this linear-white-space rule
                  //  permits lines containing only white
                  //  space that are no longer legal in
                  //  mail headers and have caused
                  //  interoperability problems in other
                  //  contexts.
                  // Do not use when defining mail
                  //  headers and use with caution in
                  //  other contexts.

OCTET          :  '\u0000'..'\u00FF';
                  // 8 bits of data

SP             :  '\u0020';

VCHAR          :  '\u0021'..'\u007E';
                  // visible (printing) characters

wsp            :  SP | HTAB;
                  // white space
