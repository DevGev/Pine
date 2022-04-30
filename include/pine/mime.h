#pragma once

#include <string>
#include <string.h>

namespace pine {
const char* file_extension_to_mime(const char* extension)
{
    if (strlen(extension) == 0) return "text/plain";
    if (extension[0] == '3') {
        if (strcmp(extension + 1, "23") == 0) return "text/h323";
        if (strcmp(extension + 1, "g2") == 0) return "video/3gpp2";
        if (strcmp(extension + 1, "gp") == 0) return "video/3gpp";
        if (strcmp(extension + 1, "gp2") == 0) return "video/3gpp2";
        if (strcmp(extension + 1, "gpp") == 0) return "video/3gpp";
    }
    else if (extension[0] == 'a') {
        if (strcmp(extension + 1, "a") == 0) return "audio/audible";
        if (strcmp(extension + 1, "ac") == 0) return "audio/aac";
        if (strcmp(extension + 1, "af") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ax") == 0) return "audio/vnd.audible.aax";
        if (strcmp(extension + 1, "c3") == 0) return "audio/ac3";
        if (strcmp(extension + 1, "ca") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ccda") == 0) return "application/msaccess.addin";
        if (strcmp(extension + 1, "ccdb") == 0) return "application/msaccess";
        if (strcmp(extension + 1, "ccdc") == 0) return "application/msaccess.cab";
        if (strcmp(extension + 1, "ccde") == 0) return "application/msaccess";
        if (strcmp(extension + 1, "ccdr") == 0) return "application/msaccess.runtime";
        if (strcmp(extension + 1, "ccdt") == 0) return "application/msaccess";
        if (strcmp(extension + 1, "ccdw") == 0) return "application/msaccess.webapplication";
        if (strcmp(extension + 1, "ccft") == 0) return "application/msaccess.ftemplate";
        if (strcmp(extension + 1, "cx") == 0) return "application/internet-property-stream";
        if (strcmp(extension + 1, "ddin") == 0) return "text/xml";
        if (strcmp(extension + 1, "de") == 0) return "application/msaccess";
        if (strcmp(extension + 1, "dobebridge") == 0) return "application/x-bridge-url";
        if (strcmp(extension + 1, "dp") == 0) return "application/msaccess";
        if (strcmp(extension + 1, "dt") == 0) return "audio/vnd.dlna.adts";
        if (strcmp(extension + 1, "dts") == 0) return "audio/aac";
        if (strcmp(extension + 1, "fm") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "i") == 0) return "application/postscript";
        if (strcmp(extension + 1, "if") == 0) return "audio/x-aiff";
        if (strcmp(extension + 1, "ifc") == 0) return "audio/aiff";
        if (strcmp(extension + 1, "iff") == 0) return "audio/aiff";
        if (strcmp(extension + 1, "ir") == 0) return "application/vnd.adobe.air-application-installer-package+zip";
        if (strcmp(extension + 1, "mc") == 0) return "application/x-mpeg";
        if (strcmp(extension + 1, "pplication") == 0) return "application/x-ms-application";
        if (strcmp(extension + 1, "rt") == 0) return "image/x-jg";
        if (strcmp(extension + 1, "sa") == 0) return "application/xml";
        if (strcmp(extension + 1, "sax") == 0) return "application/xml";
        if (strcmp(extension + 1, "scx") == 0) return "application/xml";
        if (strcmp(extension + 1, "sd") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "sf") == 0) return "video/x-ms-asf";
        if (strcmp(extension + 1, "shx") == 0) return "application/xml";
        if (strcmp(extension + 1, "si") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "smx") == 0) return "application/xml";
        if (strcmp(extension + 1, "spx") == 0) return "application/xml";
        if (strcmp(extension + 1, "sr") == 0) return "video/x-ms-asf";
        if (strcmp(extension + 1, "sx") == 0) return "video/x-ms-asf";
        if (strcmp(extension + 1, "tom") == 0) return "application/atom+xml";
        if (strcmp(extension + 1, "u") == 0) return "audio/basic";
        if (strcmp(extension + 1, "vi") == 0) return "video/x-msvideo";
        if (strcmp(extension + 1, "xs") == 0) return "application/olescript";
    }
    else if (extension[0] == 'b') {
        if (strcmp(extension + 1, "cpio") == 0) return "application/x-bcpio";
        if (strcmp(extension + 1, "in") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "mp") == 0) return "image/bmp";
    }
    else if (extension[0] == 'c') {
        if (strcmp(extension + 1, "ab") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "af") == 0) return "audio/x-caf";
        if (strcmp(extension + 1, "alx") == 0) return "application/vnd.ms-office.calx";
        if (strcmp(extension + 1, "at") == 0) return "application/vnd.ms-pki.seccat";
        if (strcmp(extension + 1, "dda") == 0) return "audio/aiff";
        if (strcmp(extension + 1, "df") == 0) return "application/x-cdf";
        if (strcmp(extension + 1, "er") == 0) return "application/x-x509-ca-cert";
        if (strcmp(extension + 1, "hm") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "lass") == 0) return "application/x-java-applet";
        if (strcmp(extension + 1, "lp") == 0) return "application/x-msclip";
        if (strcmp(extension + 1, "mx") == 0) return "image/x-cmx";
        if (strcmp(extension + 1, "od") == 0) return "image/cis-cod";
        if (strcmp(extension + 1, "onfig") == 0) return "application/xml";
        if (strcmp(extension + 1, "ontact") == 0) return "text/x-ms-contact";
        if (strcmp(extension + 1, "overage") == 0) return "application/xml";
        if (strcmp(extension + 1, "pio") == 0) return "application/x-cpio";
        if (strcmp(extension + 1, "rd") == 0) return "application/x-mscardfile";
        if (strcmp(extension + 1, "rl") == 0) return "application/pkix-crl";
        if (strcmp(extension + 1, "rt") == 0) return "application/x-x509-ca-cert";
        if (strcmp(extension + 1, "sh") == 0) return "application/x-csh";
        if (strcmp(extension + 1, "ss") == 0) return "text/css";
        if (strcmp(extension + 1, "sv") == 0) return "text/csv";
        if (strcmp(extension + 1, "ur") == 0) return "application/octet-stream";
    }
    else if (extension[0] == 'd') {
        if (strcmp(extension + 1, "at") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "atasource") == 0) return "application/xml";
        if (strcmp(extension + 1, "cr") == 0) return "application/x-director";
        if (strcmp(extension + 1, "eploy") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "er") == 0) return "application/x-x509-ca-cert";
        if (strcmp(extension + 1, "gml") == 0) return "application/xml";
        if (strcmp(extension + 1, "ib") == 0) return "image/bmp";
        if (strcmp(extension + 1, "if") == 0) return "video/x-dv";
        if (strcmp(extension + 1, "ir") == 0) return "application/x-director";
        if (strcmp(extension + 1, "isco") == 0) return "text/xml";
        if (strcmp(extension + 1, "ll") == 0) return "application/x-msdownload";
        if (strcmp(extension + 1, "ll.config") == 0) return "text/xml";
        if (strcmp(extension + 1, "lm") == 0) return "text/dlm";
        if (strcmp(extension + 1, "oc") == 0) return "application/msword";
        if (strcmp(extension + 1, "ocm") == 0) return "application/vnd.ms-word.document.macroenabled.12";
        if (strcmp(extension + 1, "ocx") == 0) return "application/vnd.openxmlformats-officedocument.wordprocessingml.document";
        if (strcmp(extension + 1, "ot") == 0) return "application/msword";
        if (strcmp(extension + 1, "otm") == 0) return "application/vnd.ms-word.template.macroenabled.12";
        if (strcmp(extension + 1, "otx") == 0) return "application/vnd.openxmlformats-officedocument.wordprocessingml.template";
        if (strcmp(extension + 1, "sp") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "td") == 0) return "text/xml";
        if (strcmp(extension + 1, "tsconfig") == 0) return "text/xml";
        if (strcmp(extension + 1, "v") == 0) return "video/x-dv";
        if (strcmp(extension + 1, "vi") == 0) return "application/x-dvi";
        if (strcmp(extension + 1, "wf") == 0) return "drawing/x-dwf";
        if (strcmp(extension + 1, "wp") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xr") == 0) return "application/x-director";
    }
    else if (extension[0] == 'e') {
        if (strcmp(extension + 1, "ml") == 0) return "message/rfc822";
        if (strcmp(extension + 1, "mz") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ot") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ps") == 0) return "application/postscript";
        if (strcmp(extension + 1, "tl") == 0) return "application/etl";
        if (strcmp(extension + 1, "tx") == 0) return "text/x-setext";
        if (strcmp(extension + 1, "vy") == 0) return "application/envoy";
        if (strcmp(extension + 1, "xe") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xe.config") == 0) return "text/xml";
    }
    else if (extension[0] == 'f') {
        if (strcmp(extension + 1, "df") == 0) return "application/vnd.fdf";
        if (strcmp(extension + 1, "if") == 0) return "application/fractals";
        if (strcmp(extension + 1, "ilters") == 0) return "application/xml";
        if (strcmp(extension + 1, "la") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "lr") == 0) return "x-world/x-vrml";
        if (strcmp(extension + 1, "lv") == 0) return "video/x-flv";
        if (strcmp(extension + 1, "sscript") == 0) return "application/fsharp-script";
        if (strcmp(extension + 1, "sx") == 0) return "application/fsharp-script";
    }
    else if (extension[0] == 'g') {
        if (strcmp(extension + 1, "enerictest") == 0) return "application/xml";
        if (strcmp(extension + 1, "if") == 0) return "image/gif";
        if (strcmp(extension + 1, "roup") == 0) return "text/x-ms-group";
        if (strcmp(extension + 1, "sm") == 0) return "audio/x-gsm";
        if (strcmp(extension + 1, "tar") == 0) return "application/x-gtar";
        if (strcmp(extension + 1, "z") == 0) return "application/x-gzip";
    }
    else if (extension[0] == 'h') {
        if (strcmp(extension + 1, "df") == 0) return "application/x-hdf";
        if (strcmp(extension + 1, "dml") == 0) return "text/x-hdml";
        if (strcmp(extension + 1, "hc") == 0) return "application/x-oleobject";
        if (strcmp(extension + 1, "hk") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "hp") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "lp") == 0) return "application/winhlp";
        if (strcmp(extension + 1, "qx") == 0) return "application/mac-binhex40";
        if (strcmp(extension + 1, "ta") == 0) return "application/hta";
        if (strcmp(extension + 1, "tc") == 0) return "text/x-component";
        if (strcmp(extension + 1, "tm") == 0) return "text/html";
        if (strcmp(extension + 1, "tml") == 0) return "text/html";
        if (strcmp(extension + 1, "tt") == 0) return "text/webviewhtml";
        if (strcmp(extension + 1, "xa") == 0) return "application/xml";
        if (strcmp(extension + 1, "xc") == 0) return "application/xml";
        if (strcmp(extension + 1, "xd") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xe") == 0) return "application/xml";
        if (strcmp(extension + 1, "xf") == 0) return "application/xml";
        if (strcmp(extension + 1, "xh") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xi") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xk") == 0) return "application/xml";
        if (strcmp(extension + 1, "xq") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xr") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xs") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "xt") == 0) return "text/html";
        if (strcmp(extension + 1, "xv") == 0) return "application/xml";
        if (strcmp(extension + 1, "xw") == 0) return "application/octet-stream";
    }
    else if (extension[0] == 'i') {
        if (strcmp(extension + 1, "co") == 0) return "image/x-icon";
        if (strcmp(extension + 1, "cs") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ef") == 0) return "image/ief";
        if (strcmp(extension + 1, "ii") == 0) return "application/x-iphone";
        if (strcmp(extension + 1, "nf") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ns") == 0) return "application/x-internet-signup";
        if (strcmp(extension + 1, "pa") == 0) return "application/x-itunes-ipa";
        if (strcmp(extension + 1, "pg") == 0) return "application/x-itunes-ipg";
        if (strcmp(extension + 1, "psw") == 0) return "application/x-itunes-ipsw";
        if (strcmp(extension + 1, "qy") == 0) return "text/x-ms-iqy";
        if (strcmp(extension + 1, "sp") == 0) return "application/x-internet-signup";
        if (strcmp(extension + 1, "te") == 0) return "application/x-itunes-ite";
        if (strcmp(extension + 1, "tlp") == 0) return "application/x-itunes-itlp";
        if (strcmp(extension + 1, "tms") == 0) return "application/x-itunes-itms";
        if (strcmp(extension + 1, "tpc") == 0) return "application/x-itunes-itpc";
        if (strcmp(extension + 1, "vf") == 0) return "video/x-ivf";
    }
    else if (extension[0] == 'j') {
        if (strcmp(extension + 1, "ar") == 0) return "application/java-archive";
        if (strcmp(extension + 1, "ava") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ck") == 0) return "application/liquidmotion";
        if (strcmp(extension + 1, "cz") == 0) return "application/liquidmotion";
        if (strcmp(extension + 1, "fif") == 0) return "image/pjpeg";
        if (strcmp(extension + 1, "nlp") == 0) return "application/x-java-jnlp-file";
        if (strcmp(extension + 1, "pb") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "pe") == 0) return "image/jpeg";
        if (strcmp(extension + 1, "peg") == 0) return "image/jpeg";
        if (strcmp(extension + 1, "pg") == 0) return "image/jpeg";
        if (strcmp(extension + 1, "s") == 0) return "application/x-javascript";
        if (strcmp(extension + 1, "sx") == 0) return "text/jscript";
    }
    else if (extension[0] == 'l') {
        if (strcmp(extension + 1, "atex") == 0) return "application/x-latex";
        if (strcmp(extension + 1, "ibrary-ms") == 0) return "application/windows-library+xml";
        if (strcmp(extension + 1, "it") == 0) return "application/x-ms-reader";
        if (strcmp(extension + 1, "oadtest") == 0) return "application/xml";
        if (strcmp(extension + 1, "pk") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "sf") == 0) return "video/x-la-asf";
        if (strcmp(extension + 1, "sx") == 0) return "video/x-la-asf";
        if (strcmp(extension + 1, "zh") == 0) return "application/octet-stream";
    }
    else if (extension[0] == 'm') {
        if (strcmp(extension + 1, "13") == 0) return "application/x-msmediaview";
        if (strcmp(extension + 1, "14") == 0) return "application/x-msmediaview";
        if (strcmp(extension + 1, "1v") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "2t") == 0) return "video/vnd.dlna.mpeg-tts";
        if (strcmp(extension + 1, "2ts") == 0) return "video/vnd.dlna.mpeg-tts";
        if (strcmp(extension + 1, "2v") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "3u") == 0) return "audio/x-mpegurl";
        if (strcmp(extension + 1, "3u8") == 0) return "audio/x-mpegurl";
        if (strcmp(extension + 1, "4a") == 0) return "audio/m4a";
        if (strcmp(extension + 1, "4b") == 0) return "audio/m4b";
        if (strcmp(extension + 1, "4p") == 0) return "audio/m4p";
        if (strcmp(extension + 1, "4r") == 0) return "audio/x-m4r";
        if (strcmp(extension + 1, "4v") == 0) return "video/x-m4v";
        if (strcmp(extension + 1, "ac") == 0) return "image/x-macpaint";
        if (strcmp(extension + 1, "an") == 0) return "application/x-troff-man";
        if (strcmp(extension + 1, "anifest") == 0) return "application/x-ms-manifest";
        if (strcmp(extension + 1, "aster") == 0) return "application/xml";
        if (strcmp(extension + 1, "da") == 0) return "application/msaccess";
        if (strcmp(extension + 1, "db") == 0) return "application/x-msaccess";
        if (strcmp(extension + 1, "de") == 0) return "application/msaccess";
        if (strcmp(extension + 1, "dp") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "e") == 0) return "application/x-troff-me";
        if (strcmp(extension + 1, "fp") == 0) return "application/x-shockwave-flash";
        if (strcmp(extension + 1, "ht") == 0) return "message/rfc822";
        if (strcmp(extension + 1, "html") == 0) return "message/rfc822";
        if (strcmp(extension + 1, "id") == 0) return "audio/mid";
        if (strcmp(extension + 1, "idi") == 0) return "audio/mid";
        if (strcmp(extension + 1, "ix") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "mf") == 0) return "application/x-smaf";
        if (strcmp(extension + 1, "no") == 0) return "text/xml";
        if (strcmp(extension + 1, "ny") == 0) return "application/x-msmoney";
        if (strcmp(extension + 1, "od") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "ov") == 0) return "video/quicktime";
        if (strcmp(extension + 1, "ovie") == 0) return "video/x-sgi-movie";
        if (strcmp(extension + 1, "p2") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "p2v") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "p3") == 0) return "audio/mpeg";
        if (strcmp(extension + 1, "p4") == 0) return "video/mp4";
        if (strcmp(extension + 1, "p4v") == 0) return "video/mp4";
        if (strcmp(extension + 1, "pa") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "pe") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "peg") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "pf") == 0) return "application/vnd.ms-mediapackage";
        if (strcmp(extension + 1, "pg") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "pp") == 0) return "application/vnd.ms-project";
        if (strcmp(extension + 1, "pv2") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "qv") == 0) return "video/quicktime";
        if (strcmp(extension + 1, "s") == 0) return "application/x-troff-ms";
        if (strcmp(extension + 1, "si") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "so") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ts") == 0) return "video/vnd.dlna.mpeg-tts";
        if (strcmp(extension + 1, "tx") == 0) return "application/xml";
        if (strcmp(extension + 1, "vb") == 0) return "application/x-msmediaview";
        if (strcmp(extension + 1, "vc") == 0) return "application/x-miva-compiled";
        if (strcmp(extension + 1, "xp") == 0) return "application/x-mmxp";
    }
    else if (extension[0] == 'n') {
        if (strcmp(extension + 1, "c") == 0) return "application/x-netcdf";
        if (strcmp(extension + 1, "sc") == 0) return "video/x-ms-asf";
        if (strcmp(extension + 1, "ws") == 0) return "message/rfc822";
    }
    else if (extension[0] == 'o') {
        if (strcmp(extension + 1, "cx") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "da") == 0) return "application/oda";
        if (strcmp(extension + 1, "dc") == 0) return "text/x-ms-odc";
        if (strcmp(extension + 1, "dp") == 0) return "application/vnd.oasis.opendocument.presentation";
        if (strcmp(extension + 1, "ds") == 0) return "application/oleobject";
        if (strcmp(extension + 1, "dt") == 0) return "application/vnd.oasis.opendocument.text";
        if (strcmp(extension + 1, "ne") == 0) return "application/onenote";
        if (strcmp(extension + 1, "nea") == 0) return "application/onenote";
        if (strcmp(extension + 1, "nepkg") == 0) return "application/onenote";
        if (strcmp(extension + 1, "netmp") == 0) return "application/onenote";
        if (strcmp(extension + 1, "netoc") == 0) return "application/onenote";
        if (strcmp(extension + 1, "netoc2") == 0) return "application/onenote";
        if (strcmp(extension + 1, "rderedtest") == 0) return "application/xml";
        if (strcmp(extension + 1, "sdx") == 0) return "application/opensearchdescription+xml";
    }
    else if (extension[0] == 'p') {
        if (strcmp(extension + 1, "10") == 0) return "application/pkcs10";
        if (strcmp(extension + 1, "12") == 0) return "application/x-pkcs12";
        if (strcmp(extension + 1, "7b") == 0) return "application/x-pkcs7-certificates";
        if (strcmp(extension + 1, "7c") == 0) return "application/pkcs7-mime";
        if (strcmp(extension + 1, "7m") == 0) return "application/pkcs7-mime";
        if (strcmp(extension + 1, "7r") == 0) return "application/x-pkcs7-certreqresp";
        if (strcmp(extension + 1, "7s") == 0) return "application/pkcs7-signature";
        if (strcmp(extension + 1, "bm") == 0) return "image/x-portable-bitmap";
        if (strcmp(extension + 1, "cast") == 0) return "application/x-podcast";
        if (strcmp(extension + 1, "ct") == 0) return "image/pict";
        if (strcmp(extension + 1, "cx") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "cz") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "df") == 0) return "application/pdf";
        if (strcmp(extension + 1, "fb") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "fm") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "fx") == 0) return "application/x-pkcs12";
        if (strcmp(extension + 1, "gm") == 0) return "image/x-portable-graymap";
        if (strcmp(extension + 1, "ic") == 0) return "image/pict";
        if (strcmp(extension + 1, "ict") == 0) return "image/pict";
        if (strcmp(extension + 1, "ko") == 0) return "application/vnd.ms-pki.pko";
        if (strcmp(extension + 1, "ls") == 0) return "audio/scpls";
        if (strcmp(extension + 1, "ma") == 0) return "application/x-perfmon";
        if (strcmp(extension + 1, "mc") == 0) return "application/x-perfmon";
        if (strcmp(extension + 1, "ml") == 0) return "application/x-perfmon";
        if (strcmp(extension + 1, "mr") == 0) return "application/x-perfmon";
        if (strcmp(extension + 1, "mw") == 0) return "application/x-perfmon";
        if (strcmp(extension + 1, "ng") == 0) return "image/png";
        if (strcmp(extension + 1, "nm") == 0) return "image/x-portable-anymap";
        if (strcmp(extension + 1, "nt") == 0) return "image/x-macpaint";
        if (strcmp(extension + 1, "ntg") == 0) return "image/x-macpaint";
        if (strcmp(extension + 1, "nz") == 0) return "image/png";
        if (strcmp(extension + 1, "ot") == 0) return "application/vnd.ms-powerpoint";
        if (strcmp(extension + 1, "otm") == 0) return "application/vnd.ms-powerpoint.template.macroenabled.12";
        if (strcmp(extension + 1, "otx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.template";
        if (strcmp(extension + 1, "pa") == 0) return "application/vnd.ms-powerpoint";
        if (strcmp(extension + 1, "pam") == 0) return "application/vnd.ms-powerpoint.addin.macroenabled.12";
        if (strcmp(extension + 1, "pm") == 0) return "image/x-portable-pixmap";
        if (strcmp(extension + 1, "ps") == 0) return "application/vnd.ms-powerpoint";
        if (strcmp(extension + 1, "psm") == 0) return "application/vnd.ms-powerpoint.slideshow.macroenabled.12";
        if (strcmp(extension + 1, "psx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.slideshow";
        if (strcmp(extension + 1, "pt") == 0) return "application/vnd.ms-powerpoint";
        if (strcmp(extension + 1, "ptm") == 0) return "application/vnd.ms-powerpoint.presentation.macroenabled.12";
        if (strcmp(extension + 1, "ptx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.presentation";
        if (strcmp(extension + 1, "rf") == 0) return "application/pics-rules";
        if (strcmp(extension + 1, "rm") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "rx") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "s") == 0) return "application/postscript";
        if (strcmp(extension + 1, "sc1") == 0) return "application/powershell";
        if (strcmp(extension + 1, "sd") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "sess") == 0) return "application/xml";
        if (strcmp(extension + 1, "sm") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "sp") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ub") == 0) return "application/x-mspublisher";
        if (strcmp(extension + 1, "wz") == 0) return "application/vnd.ms-powerpoint";
    }
    else if (extension[0] == 'q') {
        if (strcmp(extension + 1, "ht") == 0) return "text/x-html-insertion";
        if (strcmp(extension + 1, "htm") == 0) return "text/x-html-insertion";
        if (strcmp(extension + 1, "t") == 0) return "video/quicktime";
        if (strcmp(extension + 1, "ti") == 0) return "image/x-quicktime";
        if (strcmp(extension + 1, "tif") == 0) return "image/x-quicktime";
        if (strcmp(extension + 1, "tl") == 0) return "application/x-quicktimeplayer";
        if (strcmp(extension + 1, "xd") == 0) return "application/octet-stream";
    }
    else if (extension[0] == 'r') {
        if (strcmp(extension + 1, "a") == 0) return "audio/x-pn-realaudio";
        if (strcmp(extension + 1, "am") == 0) return "audio/x-pn-realaudio";
        if (strcmp(extension + 1, "ar") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "as") == 0) return "image/x-cmu-raster";
        if (strcmp(extension + 1, "at") == 0) return "application/rat-file";
        if (strcmp(extension + 1, "dlc") == 0) return "application/xml";
        if (strcmp(extension + 1, "esx") == 0) return "application/xml";
        if (strcmp(extension + 1, "f") == 0) return "image/vnd.rn-realflash";
        if (strcmp(extension + 1, "gb") == 0) return "image/x-rgb";
        if (strcmp(extension + 1, "m") == 0) return "application/vnd.rn-realmedia";
        if (strcmp(extension + 1, "mi") == 0) return "audio/mid";
        if (strcmp(extension + 1, "mp") == 0) return "application/vnd.rn-rn_music_package";
        if (strcmp(extension + 1, "off") == 0) return "application/x-troff";
        if (strcmp(extension + 1, "pm") == 0) return "audio/x-pn-realaudio-plugin";
        if (strcmp(extension + 1, "qy") == 0) return "text/x-ms-rqy";
        if (strcmp(extension + 1, "tf") == 0) return "application/rtf";
        if (strcmp(extension + 1, "tx") == 0) return "text/richtext";
        if (strcmp(extension + 1, "uleset") == 0) return "application/xml";
    }
    else if (extension[0] == 's') {
        if (strcmp(extension + 1, "afariextz") == 0) return "application/x-safari-safariextz";
        if (strcmp(extension + 1, "cd") == 0) return "application/x-msschedule";
        if (strcmp(extension + 1, "ct") == 0) return "text/scriptlet";
        if (strcmp(extension + 1, "d2") == 0) return "audio/x-sd2";
        if (strcmp(extension + 1, "dp") == 0) return "application/sdp";
        if (strcmp(extension + 1, "ea") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "earchconnector-ms") == 0) return "application/windows-search-connector+xml";
        if (strcmp(extension + 1, "etpay") == 0) return "application/set-payment-initiation";
        if (strcmp(extension + 1, "etreg") == 0) return "application/set-registration-initiation";
        if (strcmp(extension + 1, "ettings") == 0) return "application/xml";
        if (strcmp(extension + 1, "gimb") == 0) return "application/x-sgimb";
        if (strcmp(extension + 1, "gml") == 0) return "text/sgml";
        if (strcmp(extension + 1, "h") == 0) return "application/x-sh";
        if (strcmp(extension + 1, "har") == 0) return "application/x-shar";
        if (strcmp(extension + 1, "html") == 0) return "text/html";
        if (strcmp(extension + 1, "it") == 0) return "application/x-stuffit";
        if (strcmp(extension + 1, "itemap") == 0) return "application/xml";
        if (strcmp(extension + 1, "kin") == 0) return "application/xml";
        if (strcmp(extension + 1, "ldm") == 0) return "application/vnd.ms-powerpoint.slide.macroenabled.12";
        if (strcmp(extension + 1, "ldx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.slide";
        if (strcmp(extension + 1, "lk") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "lupkg-ms") == 0) return "application/x-ms-license";
        if (strcmp(extension + 1, "md") == 0) return "audio/x-smd";
        if (strcmp(extension + 1, "mi") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "mx") == 0) return "audio/x-smd";
        if (strcmp(extension + 1, "mz") == 0) return "audio/x-smd";
        if (strcmp(extension + 1, "nd") == 0) return "audio/basic";
        if (strcmp(extension + 1, "nippet") == 0) return "application/xml";
        if (strcmp(extension + 1, "np") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "pc") == 0) return "application/x-pkcs7-certificates";
        if (strcmp(extension + 1, "pl") == 0) return "application/futuresplash";
        if (strcmp(extension + 1, "rc") == 0) return "application/x-wais-source";
        if (strcmp(extension + 1, "sisdeploymentmanifest") == 0) return "text/xml";
        if (strcmp(extension + 1, "sm") == 0) return "application/streamingmedia";
        if (strcmp(extension + 1, "st") == 0) return "application/vnd.ms-pki.certstore";
        if (strcmp(extension + 1, "tl") == 0) return "application/vnd.ms-pki.stl";
        if (strcmp(extension + 1, "v4cpio") == 0) return "application/x-sv4cpio";
        if (strcmp(extension + 1, "v4crc") == 0) return "application/x-sv4crc";
        if (strcmp(extension + 1, "vc") == 0) return "application/xml";
        if (strcmp(extension + 1, "wf") == 0) return "application/x-shockwave-flash";
    }
    else if (extension[0] == 't') {
        if (strcmp(extension, "t") == 0) return "application/x-troff";
        if (strcmp(extension + 1, "ar") == 0) return "application/x-tar";
        if (strcmp(extension + 1, "cl") == 0) return "application/x-tcl";
        if (strcmp(extension + 1, "estrunconfig") == 0) return "application/xml";
        if (strcmp(extension + 1, "estsettings") == 0) return "application/xml";
        if (strcmp(extension + 1, "ex") == 0) return "application/x-tex";
        if (strcmp(extension + 1, "exi") == 0) return "application/x-texinfo";
        if (strcmp(extension + 1, "exinfo") == 0) return "application/x-texinfo";
        if (strcmp(extension + 1, "gz") == 0) return "application/x-compressed";
        if (strcmp(extension + 1, "hmx") == 0) return "application/vnd.ms-officetheme";
        if (strcmp(extension + 1, "hn") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "if") == 0) return "image/tiff";
        if (strcmp(extension + 1, "iff") == 0) return "image/tiff";
        if (strcmp(extension + 1, "oc") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "r") == 0) return "application/x-troff";
        if (strcmp(extension + 1, "rm") == 0) return "application/x-msterminal";
        if (strcmp(extension + 1, "rx") == 0) return "application/xml";
        if (strcmp(extension + 1, "s") == 0) return "video/vnd.dlna.mpeg-tts";
        if (strcmp(extension + 1, "sv") == 0) return "text/tab-separated-values";
        if (strcmp(extension + 1, "tf") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ts") == 0) return "video/vnd.dlna.mpeg-tts";
    }
    else if (extension[0] == 'u') {
        if (strcmp(extension + 1, "32") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ls") == 0) return "text/iuls";
        if (strcmp(extension + 1, "star") == 0) return "application/x-ustar";
    }
    else if (extension[0] == 'v') {
        if (strcmp(extension + 1, "bk") == 0) return "video/mpeg";
        if (strcmp(extension + 1, "bs") == 0) return "text/vbscript";
        if (strcmp(extension + 1, "cf") == 0) return "text/x-vcard";
        if (strcmp(extension + 1, "cproj") == 0) return "application/xml";
        if (strcmp(extension + 1, "cxproj") == 0) return "application/xml";
        if (strcmp(extension + 1, "dx") == 0) return "application/vnd.ms-visio.viewer";
        if (strcmp(extension + 1, "ml") == 0) return "text/xml";
        if (strcmp(extension + 1, "scontent") == 0) return "application/xml";
        if (strcmp(extension + 1, "sct") == 0) return "text/xml";
        if (strcmp(extension + 1, "sd") == 0) return "application/vnd.visio";
        if (strcmp(extension + 1, "si") == 0) return "application/ms-vsi";
        if (strcmp(extension + 1, "six") == 0) return "application/vsix";
        if (strcmp(extension + 1, "sixlangpack") == 0) return "text/xml";
        if (strcmp(extension + 1, "sixmanifest") == 0) return "text/xml";
        if (strcmp(extension + 1, "smdi") == 0) return "application/xml";
        if (strcmp(extension + 1, "ss") == 0) return "application/vnd.visio";
        if (strcmp(extension + 1, "ssettings") == 0) return "text/xml";
        if (strcmp(extension + 1, "st") == 0) return "application/vnd.visio";
        if (strcmp(extension + 1, "stemplate") == 0) return "text/xml";
        if (strcmp(extension + 1, "sto") == 0) return "application/x-ms-vsto";
        if (strcmp(extension + 1, "sw") == 0) return "application/vnd.visio";
        if (strcmp(extension + 1, "sx") == 0) return "application/vnd.visio";
        if (strcmp(extension + 1, "tx") == 0) return "application/vnd.visio";
    }
    else if (extension[0] == 'w') {
        if (strcmp(extension + 1, "av") == 0) return "audio/wav";
        if (strcmp(extension + 1, "ave") == 0) return "audio/wav";
        if (strcmp(extension + 1, "ax") == 0) return "audio/x-ms-wax";
        if (strcmp(extension + 1, "bk") == 0) return "application/msword";
        if (strcmp(extension + 1, "bmp") == 0) return "image/vnd.wap.wbmp";
        if (strcmp(extension + 1, "cm") == 0) return "application/vnd.ms-works";
        if (strcmp(extension + 1, "db") == 0) return "application/vnd.ms-works";
        if (strcmp(extension + 1, "dp") == 0) return "image/vnd.ms-photo";
        if (strcmp(extension + 1, "ebarchive") == 0) return "application/x-safari-webarchive";
        if (strcmp(extension + 1, "ebtest") == 0) return "application/xml";
        if (strcmp(extension + 1, "iq") == 0) return "application/xml";
        if (strcmp(extension + 1, "iz") == 0) return "application/msword";
        if (strcmp(extension + 1, "ks") == 0) return "application/vnd.ms-works";
        if (strcmp(extension + 1, "lmp") == 0) return "application/wlmoviemaker";
        if (strcmp(extension + 1, "lpginstall") == 0) return "application/x-wlpg-detect";
        if (strcmp(extension + 1, "lpginstall3") == 0) return "application/x-wlpg3-detect";
        if (strcmp(extension + 1, "m") == 0) return "video/x-ms-wm";
        if (strcmp(extension + 1, "ma") == 0) return "audio/x-ms-wma";
        if (strcmp(extension + 1, "md") == 0) return "application/x-ms-wmd";
        if (strcmp(extension + 1, "mf") == 0) return "application/x-msmetafile";
        if (strcmp(extension + 1, "ml") == 0) return "text/vnd.wap.wml";
        if (strcmp(extension + 1, "mlc") == 0) return "application/vnd.wap.wmlc";
        if (strcmp(extension + 1, "mls") == 0) return "text/vnd.wap.wmlscript";
        if (strcmp(extension + 1, "mlsc") == 0) return "application/vnd.wap.wmlscriptc";
        if (strcmp(extension + 1, "mp") == 0) return "video/x-ms-wmp";
        if (strcmp(extension + 1, "mv") == 0) return "video/x-ms-wmv";
        if (strcmp(extension + 1, "mx") == 0) return "video/x-ms-wmx";
        if (strcmp(extension + 1, "mz") == 0) return "application/x-ms-wmz";
        if (strcmp(extension + 1, "pl") == 0) return "application/vnd.ms-wpl";
        if (strcmp(extension + 1, "ps") == 0) return "application/vnd.ms-works";
        if (strcmp(extension + 1, "ri") == 0) return "application/x-mswrite";
        if (strcmp(extension + 1, "rl") == 0) return "x-world/x-vrml";
        if (strcmp(extension + 1, "rz") == 0) return "x-world/x-vrml";
        if (strcmp(extension + 1, "sc") == 0) return "text/scriptlet";
        if (strcmp(extension + 1, "sdl") == 0) return "text/xml";
        if (strcmp(extension + 1, "vx") == 0) return "video/x-ms-wvx";
    }
    else if (extension[0] == 'x') {
        if (strcmp(extension, "x") == 0) return "application/directx";
        if (strcmp(extension + 1, "af") == 0) return "x-world/x-vrml";
        if (strcmp(extension + 1, "aml") == 0) return "application/xaml+xml";
        if (strcmp(extension + 1, "ap") == 0) return "application/x-silverlight-app";
        if (strcmp(extension + 1, "bap") == 0) return "application/x-ms-xbap";
        if (strcmp(extension + 1, "bm") == 0) return "image/x-xbitmap";
        if (strcmp(extension + 1, "ht") == 0) return "application/xhtml+xml";
        if (strcmp(extension + 1, "html") == 0) return "application/xhtml+xml";
        if (strcmp(extension + 1, "la") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "lam") == 0) return "application/vnd.ms-excel.addin.macroenabled.12";
        if (strcmp(extension + 1, "lc") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "ld") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "lk") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "ll") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "lm") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "ls") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "lsb") == 0) return "application/vnd.ms-excel.sheet.binary.macroenabled.12";
        if (strcmp(extension + 1, "lsm") == 0) return "application/vnd.ms-excel.sheet.macroenabled.12";
        if (strcmp(extension + 1, "lsx") == 0) return "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
        if (strcmp(extension + 1, "lt") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "ltm") == 0) return "application/vnd.ms-excel.template.macroenabled.12";
        if (strcmp(extension + 1, "ltx") == 0) return "application/vnd.openxmlformats-officedocument.spreadsheetml.template";
        if (strcmp(extension + 1, "lw") == 0) return "application/vnd.ms-excel";
        if (strcmp(extension + 1, "ml") == 0) return "text/xml";
        if (strcmp(extension + 1, "mta") == 0) return "application/xml";
        if (strcmp(extension + 1, "of") == 0) return "x-world/x-vrml";
        if (strcmp(extension + 1, "pm") == 0) return "image/x-xpixmap";
        if (strcmp(extension + 1, "ps") == 0) return "application/vnd.ms-xpsdocument";
        if (strcmp(extension + 1, "rm-ms") == 0) return "text/xml";
        if (strcmp(extension + 1, "sc") == 0) return "application/xml";
        if (strcmp(extension + 1, "sd") == 0) return "text/xml";
        if (strcmp(extension + 1, "sf") == 0) return "text/xml";
        if (strcmp(extension + 1, "sl") == 0) return "text/xml";
        if (strcmp(extension + 1, "slt") == 0) return "text/xml";
        if (strcmp(extension + 1, "sn") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "ss") == 0) return "application/xml";
        if (strcmp(extension + 1, "tp") == 0) return "application/octet-stream";
        if (strcmp(extension + 1, "wd") == 0) return "image/x-xwindowdump";
    }
    else if (extension[0] == 'z') {
        if (strcmp(extension, "z") == 0) return "application/x-compress";
        if (strcmp(extension + 1, "zip") == 0) return "application/x-zip-compressed";
    }
    if (strcmp(extension, "7z") == 0) return "application/x-7z-compressed";
    return "text/plain";
}

bool file_extension(const char* file_name, char* extension, size_t max)
{
    size_t size = strlen(file_name);
    size_t position = size;

    while (file_name[position - 1] != '.' && position != 0)
        position--;

    size_t length = size - position;
    if (position == 0 || length >= max)
        return false;

    for (size_t i = 0; i < length; i++)
        extension[length - i - 1] = file_name[size - i - 1];
    extension[length] = 0;
    return true;
}
};
