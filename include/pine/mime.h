#pragma once

#include <string>
#include <string.h>

namespace pine {
const char* file_extension_to_mime(const char* extension)
{
    if (strlen(extension) == 0) return "text/plain";
    if (strcmp(extension, "323") == 0) return "text/h323";
    if (strcmp(extension, "3g2") == 0) return "video/3gpp2";
    if (strcmp(extension, "3gp") == 0) return "video/3gpp";
    if (strcmp(extension, "3gp2") == 0) return "video/3gpp2";
    if (strcmp(extension, "3gpp") == 0) return "video/3gpp";
    if (strcmp(extension, "7z") == 0) return "application/x-7z-compressed";
    if (strcmp(extension, "aa") == 0) return "audio/audible";
    if (strcmp(extension, "aac") == 0) return "audio/aac";
    if (strcmp(extension, "aaf") == 0) return "application/octet-stream";
    if (strcmp(extension, "aax") == 0) return "audio/vnd.audible.aax";
    if (strcmp(extension, "ac3") == 0) return "audio/ac3";
    if (strcmp(extension, "aca") == 0) return "application/octet-stream";
    if (strcmp(extension, "accda") == 0) return "application/msaccess.addin";
    if (strcmp(extension, "accdb") == 0) return "application/msaccess";
    if (strcmp(extension, "accdc") == 0) return "application/msaccess.cab";
    if (strcmp(extension, "accde") == 0) return "application/msaccess";
    if (strcmp(extension, "accdr") == 0) return "application/msaccess.runtime";
    if (strcmp(extension, "accdt") == 0) return "application/msaccess";
    if (strcmp(extension, "accdw") == 0) return "application/msaccess.webapplication";
    if (strcmp(extension, "accft") == 0) return "application/msaccess.ftemplate";
    if (strcmp(extension, "acx") == 0) return "application/internet-property-stream";
    if (strcmp(extension, "addin") == 0) return "text/xml";
    if (strcmp(extension, "ade") == 0) return "application/msaccess";
    if (strcmp(extension, "adobebridge") == 0) return "application/x-bridge-url";
    if (strcmp(extension, "adp") == 0) return "application/msaccess";
    if (strcmp(extension, "adt") == 0) return "audio/vnd.dlna.adts";
    if (strcmp(extension, "adts") == 0) return "audio/aac";
    if (strcmp(extension, "afm") == 0) return "application/octet-stream";
    if (strcmp(extension, "ai") == 0) return "application/postscript";
    if (strcmp(extension, "aif") == 0) return "audio/x-aiff";
    if (strcmp(extension, "aifc") == 0) return "audio/aiff";
    if (strcmp(extension, "aiff") == 0) return "audio/aiff";
    if (strcmp(extension, "air") == 0) return "application/vnd.adobe.air-application-installer-package+zip";
    if (strcmp(extension, "amc") == 0) return "application/x-mpeg";
    if (strcmp(extension, "application") == 0) return "application/x-ms-application";
    if (strcmp(extension, "art") == 0) return "image/x-jg";
    if (strcmp(extension, "asa") == 0) return "application/xml";
    if (strcmp(extension, "asax") == 0) return "application/xml";
    if (strcmp(extension, "ascx") == 0) return "application/xml";
    if (strcmp(extension, "asd") == 0) return "application/octet-stream";
    if (strcmp(extension, "asf") == 0) return "video/x-ms-asf";
    if (strcmp(extension, "ashx") == 0) return "application/xml";
    if (strcmp(extension, "asi") == 0) return "application/octet-stream";
    if (strcmp(extension, "asm") == 0) return "text/plain";
    if (strcmp(extension, "asmx") == 0) return "application/xml";
    if (strcmp(extension, "aspx") == 0) return "application/xml";
    if (strcmp(extension, "asr") == 0) return "video/x-ms-asf";
    if (strcmp(extension, "asx") == 0) return "video/x-ms-asf";
    if (strcmp(extension, "atom") == 0) return "application/atom+xml";
    if (strcmp(extension, "au") == 0) return "audio/basic";
    if (strcmp(extension, "avi") == 0) return "video/x-msvideo";
    if (strcmp(extension, "axs") == 0) return "application/olescript";
    if (strcmp(extension, "bas") == 0) return "text/plain";
    if (strcmp(extension, "bcpio") == 0) return "application/x-bcpio";
    if (strcmp(extension, "bin") == 0) return "application/octet-stream";
    if (strcmp(extension, "bmp") == 0) return "image/bmp";
    if (strcmp(extension, "c") == 0) return "text/plain";
    if (strcmp(extension, "cab") == 0) return "application/octet-stream";
    if (strcmp(extension, "caf") == 0) return "audio/x-caf";
    if (strcmp(extension, "calx") == 0) return "application/vnd.ms-office.calx";
    if (strcmp(extension, "cat") == 0) return "application/vnd.ms-pki.seccat";
    if (strcmp(extension, "cc") == 0) return "text/plain";
    if (strcmp(extension, "cd") == 0) return "text/plain";
    if (strcmp(extension, "cdda") == 0) return "audio/aiff";
    if (strcmp(extension, "cdf") == 0) return "application/x-cdf";
    if (strcmp(extension, "cer") == 0) return "application/x-x509-ca-cert";
    if (strcmp(extension, "chm") == 0) return "application/octet-stream";
    if (strcmp(extension, "class") == 0) return "application/x-java-applet";
    if (strcmp(extension, "clp") == 0) return "application/x-msclip";
    if (strcmp(extension, "cmx") == 0) return "image/x-cmx";
    if (strcmp(extension, "cnf") == 0) return "text/plain";
    if (strcmp(extension, "cod") == 0) return "image/cis-cod";
    if (strcmp(extension, "config") == 0) return "application/xml";
    if (strcmp(extension, "contact") == 0) return "text/x-ms-contact";
    if (strcmp(extension, "coverage") == 0) return "application/xml";
    if (strcmp(extension, "cpio") == 0) return "application/x-cpio";
    if (strcmp(extension, "cpp") == 0) return "text/plain";
    if (strcmp(extension, "crd") == 0) return "application/x-mscardfile";
    if (strcmp(extension, "crl") == 0) return "application/pkix-crl";
    if (strcmp(extension, "crt") == 0) return "application/x-x509-ca-cert";
    if (strcmp(extension, "cs") == 0) return "text/plain";
    if (strcmp(extension, "csdproj") == 0) return "text/plain";
    if (strcmp(extension, "csh") == 0) return "application/x-csh";
    if (strcmp(extension, "csproj") == 0) return "text/plain";
    if (strcmp(extension, "css") == 0) return "text/css";
    if (strcmp(extension, "csv") == 0) return "text/csv";
    if (strcmp(extension, "cur") == 0) return "application/octet-stream";
    if (strcmp(extension, "cxx") == 0) return "text/plain";
    if (strcmp(extension, "dat") == 0) return "application/octet-stream";
    if (strcmp(extension, "datasource") == 0) return "application/xml";
    if (strcmp(extension, "dbproj") == 0) return "text/plain";
    if (strcmp(extension, "dcr") == 0) return "application/x-director";
    if (strcmp(extension, "def") == 0) return "text/plain";
    if (strcmp(extension, "deploy") == 0) return "application/octet-stream";
    if (strcmp(extension, "der") == 0) return "application/x-x509-ca-cert";
    if (strcmp(extension, "dgml") == 0) return "application/xml";
    if (strcmp(extension, "dib") == 0) return "image/bmp";
    if (strcmp(extension, "dif") == 0) return "video/x-dv";
    if (strcmp(extension, "dir") == 0) return "application/x-director";
    if (strcmp(extension, "disco") == 0) return "text/xml";
    if (strcmp(extension, "dll") == 0) return "application/x-msdownload";
    if (strcmp(extension, "dll.config") == 0) return "text/xml";
    if (strcmp(extension, "dlm") == 0) return "text/dlm";
    if (strcmp(extension, "doc") == 0) return "application/msword";
    if (strcmp(extension, "docm") == 0) return "application/vnd.ms-word.document.macroenabled.12";
    if (strcmp(extension, "docx") == 0) return "application/vnd.openxmlformats-officedocument.wordprocessingml.document";
    if (strcmp(extension, "dot") == 0) return "application/msword";
    if (strcmp(extension, "dotm") == 0) return "application/vnd.ms-word.template.macroenabled.12";
    if (strcmp(extension, "dotx") == 0) return "application/vnd.openxmlformats-officedocument.wordprocessingml.template";
    if (strcmp(extension, "dsp") == 0) return "application/octet-stream";
    if (strcmp(extension, "dsw") == 0) return "text/plain";
    if (strcmp(extension, "dtd") == 0) return "text/xml";
    if (strcmp(extension, "dtsconfig") == 0) return "text/xml";
    if (strcmp(extension, "dv") == 0) return "video/x-dv";
    if (strcmp(extension, "dvi") == 0) return "application/x-dvi";
    if (strcmp(extension, "dwf") == 0) return "drawing/x-dwf";
    if (strcmp(extension, "dwp") == 0) return "application/octet-stream";
    if (strcmp(extension, "dxr") == 0) return "application/x-director";
    if (strcmp(extension, "eml") == 0) return "message/rfc822";
    if (strcmp(extension, "emz") == 0) return "application/octet-stream";
    if (strcmp(extension, "eot") == 0) return "application/octet-stream";
    if (strcmp(extension, "eps") == 0) return "application/postscript";
    if (strcmp(extension, "etl") == 0) return "application/etl";
    if (strcmp(extension, "etx") == 0) return "text/x-setext";
    if (strcmp(extension, "evy") == 0) return "application/envoy";
    if (strcmp(extension, "exe") == 0) return "application/octet-stream";
    if (strcmp(extension, "exe.config") == 0) return "text/xml";
    if (strcmp(extension, "fdf") == 0) return "application/vnd.fdf";
    if (strcmp(extension, "fif") == 0) return "application/fractals";
    if (strcmp(extension, "filters") == 0) return "application/xml";
    if (strcmp(extension, "fla") == 0) return "application/octet-stream";
    if (strcmp(extension, "flr") == 0) return "x-world/x-vrml";
    if (strcmp(extension, "flv") == 0) return "video/x-flv";
    if (strcmp(extension, "fsscript") == 0) return "application/fsharp-script";
    if (strcmp(extension, "fsx") == 0) return "application/fsharp-script";
    if (strcmp(extension, "generictest") == 0) return "application/xml";
    if (strcmp(extension, "gif") == 0) return "image/gif";
    if (strcmp(extension, "group") == 0) return "text/x-ms-group";
    if (strcmp(extension, "gsm") == 0) return "audio/x-gsm";
    if (strcmp(extension, "gtar") == 0) return "application/x-gtar";
    if (strcmp(extension, "gz") == 0) return "application/x-gzip";
    if (strcmp(extension, "h") == 0) return "text/plain";
    if (strcmp(extension, "hdf") == 0) return "application/x-hdf";
    if (strcmp(extension, "hdml") == 0) return "text/x-hdml";
    if (strcmp(extension, "hhc") == 0) return "application/x-oleobject";
    if (strcmp(extension, "hhk") == 0) return "application/octet-stream";
    if (strcmp(extension, "hhp") == 0) return "application/octet-stream";
    if (strcmp(extension, "hlp") == 0) return "application/winhlp";
    if (strcmp(extension, "hpp") == 0) return "text/plain";
    if (strcmp(extension, "hqx") == 0) return "application/mac-binhex40";
    if (strcmp(extension, "hta") == 0) return "application/hta";
    if (strcmp(extension, "htc") == 0) return "text/x-component";
    if (strcmp(extension, "htm") == 0) return "text/html";
    if (strcmp(extension, "html") == 0) return "text/html";
    if (strcmp(extension, "htt") == 0) return "text/webviewhtml";
    if (strcmp(extension, "hxa") == 0) return "application/xml";
    if (strcmp(extension, "hxc") == 0) return "application/xml";
    if (strcmp(extension, "hxd") == 0) return "application/octet-stream";
    if (strcmp(extension, "hxe") == 0) return "application/xml";
    if (strcmp(extension, "hxf") == 0) return "application/xml";
    if (strcmp(extension, "hxh") == 0) return "application/octet-stream";
    if (strcmp(extension, "hxi") == 0) return "application/octet-stream";
    if (strcmp(extension, "hxk") == 0) return "application/xml";
    if (strcmp(extension, "hxq") == 0) return "application/octet-stream";
    if (strcmp(extension, "hxr") == 0) return "application/octet-stream";
    if (strcmp(extension, "hxs") == 0) return "application/octet-stream";
    if (strcmp(extension, "hxt") == 0) return "text/html";
    if (strcmp(extension, "hxv") == 0) return "application/xml";
    if (strcmp(extension, "hxw") == 0) return "application/octet-stream";
    if (strcmp(extension, "hxx") == 0) return "text/plain";
    if (strcmp(extension, "i") == 0) return "text/plain";
    if (strcmp(extension, "ico") == 0) return "image/x-icon";
    if (strcmp(extension, "ics") == 0) return "application/octet-stream";
    if (strcmp(extension, "idl") == 0) return "text/plain";
    if (strcmp(extension, "ief") == 0) return "image/ief";
    if (strcmp(extension, "iii") == 0) return "application/x-iphone";
    if (strcmp(extension, "inc") == 0) return "text/plain";
    if (strcmp(extension, "inf") == 0) return "application/octet-stream";
    if (strcmp(extension, "inl") == 0) return "text/plain";
    if (strcmp(extension, "ins") == 0) return "application/x-internet-signup";
    if (strcmp(extension, "ipa") == 0) return "application/x-itunes-ipa";
    if (strcmp(extension, "ipg") == 0) return "application/x-itunes-ipg";
    if (strcmp(extension, "ipproj") == 0) return "text/plain";
    if (strcmp(extension, "ipsw") == 0) return "application/x-itunes-ipsw";
    if (strcmp(extension, "iqy") == 0) return "text/x-ms-iqy";
    if (strcmp(extension, "isp") == 0) return "application/x-internet-signup";
    if (strcmp(extension, "ite") == 0) return "application/x-itunes-ite";
    if (strcmp(extension, "itlp") == 0) return "application/x-itunes-itlp";
    if (strcmp(extension, "itms") == 0) return "application/x-itunes-itms";
    if (strcmp(extension, "itpc") == 0) return "application/x-itunes-itpc";
    if (strcmp(extension, "ivf") == 0) return "video/x-ivf";
    if (strcmp(extension, "jar") == 0) return "application/java-archive";
    if (strcmp(extension, "java") == 0) return "application/octet-stream";
    if (strcmp(extension, "jck") == 0) return "application/liquidmotion";
    if (strcmp(extension, "jcz") == 0) return "application/liquidmotion";
    if (strcmp(extension, "jfif") == 0) return "image/pjpeg";
    if (strcmp(extension, "jnlp") == 0) return "application/x-java-jnlp-file";
    if (strcmp(extension, "jpb") == 0) return "application/octet-stream";
    if (strcmp(extension, "jpe") == 0) return "image/jpeg";
    if (strcmp(extension, "jpeg") == 0) return "image/jpeg";
    if (strcmp(extension, "jpg") == 0) return "image/jpeg";
    if (strcmp(extension, "js") == 0) return "application/x-javascript";
    if (strcmp(extension, "jsx") == 0) return "text/jscript";
    if (strcmp(extension, "jsxbin") == 0) return "text/plain";
    if (strcmp(extension, "latex") == 0) return "application/x-latex";
    if (strcmp(extension, "library-ms") == 0) return "application/windows-library+xml";
    if (strcmp(extension, "lit") == 0) return "application/x-ms-reader";
    if (strcmp(extension, "loadtest") == 0) return "application/xml";
    if (strcmp(extension, "lpk") == 0) return "application/octet-stream";
    if (strcmp(extension, "lsf") == 0) return "video/x-la-asf";
    if (strcmp(extension, "lst") == 0) return "text/plain";
    if (strcmp(extension, "lsx") == 0) return "video/x-la-asf";
    if (strcmp(extension, "lzh") == 0) return "application/octet-stream";
    if (strcmp(extension, "m13") == 0) return "application/x-msmediaview";
    if (strcmp(extension, "m14") == 0) return "application/x-msmediaview";
    if (strcmp(extension, "m1v") == 0) return "video/mpeg";
    if (strcmp(extension, "m2t") == 0) return "video/vnd.dlna.mpeg-tts";
    if (strcmp(extension, "m2ts") == 0) return "video/vnd.dlna.mpeg-tts";
    if (strcmp(extension, "m2v") == 0) return "video/mpeg";
    if (strcmp(extension, "m3u") == 0) return "audio/x-mpegurl";
    if (strcmp(extension, "m3u8") == 0) return "audio/x-mpegurl";
    if (strcmp(extension, "m4a") == 0) return "audio/m4a";
    if (strcmp(extension, "m4b") == 0) return "audio/m4b";
    if (strcmp(extension, "m4p") == 0) return "audio/m4p";
    if (strcmp(extension, "m4r") == 0) return "audio/x-m4r";
    if (strcmp(extension, "m4v") == 0) return "video/x-m4v";
    if (strcmp(extension, "mac") == 0) return "image/x-macpaint";
    if (strcmp(extension, "mak") == 0) return "text/plain";
    if (strcmp(extension, "man") == 0) return "application/x-troff-man";
    if (strcmp(extension, "manifest") == 0) return "application/x-ms-manifest";
    if (strcmp(extension, "map") == 0) return "text/plain";
    if (strcmp(extension, "master") == 0) return "application/xml";
    if (strcmp(extension, "mda") == 0) return "application/msaccess";
    if (strcmp(extension, "mdb") == 0) return "application/x-msaccess";
    if (strcmp(extension, "mde") == 0) return "application/msaccess";
    if (strcmp(extension, "mdp") == 0) return "application/octet-stream";
    if (strcmp(extension, "me") == 0) return "application/x-troff-me";
    if (strcmp(extension, "mfp") == 0) return "application/x-shockwave-flash";
    if (strcmp(extension, "mht") == 0) return "message/rfc822";
    if (strcmp(extension, "mhtml") == 0) return "message/rfc822";
    if (strcmp(extension, "mid") == 0) return "audio/mid";
    if (strcmp(extension, "midi") == 0) return "audio/mid";
    if (strcmp(extension, "mix") == 0) return "application/octet-stream";
    if (strcmp(extension, "mk") == 0) return "text/plain";
    if (strcmp(extension, "mmf") == 0) return "application/x-smaf";
    if (strcmp(extension, "mno") == 0) return "text/xml";
    if (strcmp(extension, "mny") == 0) return "application/x-msmoney";
    if (strcmp(extension, "mod") == 0) return "video/mpeg";
    if (strcmp(extension, "mov") == 0) return "video/quicktime";
    if (strcmp(extension, "movie") == 0) return "video/x-sgi-movie";
    if (strcmp(extension, "mp2") == 0) return "video/mpeg";
    if (strcmp(extension, "mp2v") == 0) return "video/mpeg";
    if (strcmp(extension, "mp3") == 0) return "audio/mpeg";
    if (strcmp(extension, "mp4") == 0) return "video/mp4";
    if (strcmp(extension, "mp4v") == 0) return "video/mp4";
    if (strcmp(extension, "mpa") == 0) return "video/mpeg";
    if (strcmp(extension, "mpe") == 0) return "video/mpeg";
    if (strcmp(extension, "mpeg") == 0) return "video/mpeg";
    if (strcmp(extension, "mpf") == 0) return "application/vnd.ms-mediapackage";
    if (strcmp(extension, "mpg") == 0) return "video/mpeg";
    if (strcmp(extension, "mpp") == 0) return "application/vnd.ms-project";
    if (strcmp(extension, "mpv2") == 0) return "video/mpeg";
    if (strcmp(extension, "mqv") == 0) return "video/quicktime";
    if (strcmp(extension, "ms") == 0) return "application/x-troff-ms";
    if (strcmp(extension, "msi") == 0) return "application/octet-stream";
    if (strcmp(extension, "mso") == 0) return "application/octet-stream";
    if (strcmp(extension, "mts") == 0) return "video/vnd.dlna.mpeg-tts";
    if (strcmp(extension, "mtx") == 0) return "application/xml";
    if (strcmp(extension, "mvb") == 0) return "application/x-msmediaview";
    if (strcmp(extension, "mvc") == 0) return "application/x-miva-compiled";
    if (strcmp(extension, "mxp") == 0) return "application/x-mmxp";
    if (strcmp(extension, "nc") == 0) return "application/x-netcdf";
    if (strcmp(extension, "nsc") == 0) return "video/x-ms-asf";
    if (strcmp(extension, "nws") == 0) return "message/rfc822";
    if (strcmp(extension, "ocx") == 0) return "application/octet-stream";
    if (strcmp(extension, "oda") == 0) return "application/oda";
    if (strcmp(extension, "odc") == 0) return "text/x-ms-odc";
    if (strcmp(extension, "odh") == 0) return "text/plain";
    if (strcmp(extension, "odl") == 0) return "text/plain";
    if (strcmp(extension, "odp") == 0) return "application/vnd.oasis.opendocument.presentation";
    if (strcmp(extension, "ods") == 0) return "application/oleobject";
    if (strcmp(extension, "odt") == 0) return "application/vnd.oasis.opendocument.text";
    if (strcmp(extension, "one") == 0) return "application/onenote";
    if (strcmp(extension, "onea") == 0) return "application/onenote";
    if (strcmp(extension, "onepkg") == 0) return "application/onenote";
    if (strcmp(extension, "onetmp") == 0) return "application/onenote";
    if (strcmp(extension, "onetoc") == 0) return "application/onenote";
    if (strcmp(extension, "onetoc2") == 0) return "application/onenote";
    if (strcmp(extension, "orderedtest") == 0) return "application/xml";
    if (strcmp(extension, "osdx") == 0) return "application/opensearchdescription+xml";
    if (strcmp(extension, "p10") == 0) return "application/pkcs10";
    if (strcmp(extension, "p12") == 0) return "application/x-pkcs12";
    if (strcmp(extension, "p7b") == 0) return "application/x-pkcs7-certificates";
    if (strcmp(extension, "p7c") == 0) return "application/pkcs7-mime";
    if (strcmp(extension, "p7m") == 0) return "application/pkcs7-mime";
    if (strcmp(extension, "p7r") == 0) return "application/x-pkcs7-certreqresp";
    if (strcmp(extension, "p7s") == 0) return "application/pkcs7-signature";
    if (strcmp(extension, "pbm") == 0) return "image/x-portable-bitmap";
    if (strcmp(extension, "pcast") == 0) return "application/x-podcast";
    if (strcmp(extension, "pct") == 0) return "image/pict";
    if (strcmp(extension, "pcx") == 0) return "application/octet-stream";
    if (strcmp(extension, "pcz") == 0) return "application/octet-stream";
    if (strcmp(extension, "pdf") == 0) return "application/pdf";
    if (strcmp(extension, "pfb") == 0) return "application/octet-stream";
    if (strcmp(extension, "pfm") == 0) return "application/octet-stream";
    if (strcmp(extension, "pfx") == 0) return "application/x-pkcs12";
    if (strcmp(extension, "pgm") == 0) return "image/x-portable-graymap";
    if (strcmp(extension, "pic") == 0) return "image/pict";
    if (strcmp(extension, "pict") == 0) return "image/pict";
    if (strcmp(extension, "pkgdef") == 0) return "text/plain";
    if (strcmp(extension, "pkgundef") == 0) return "text/plain";
    if (strcmp(extension, "pko") == 0) return "application/vnd.ms-pki.pko";
    if (strcmp(extension, "pls") == 0) return "audio/scpls";
    if (strcmp(extension, "pma") == 0) return "application/x-perfmon";
    if (strcmp(extension, "pmc") == 0) return "application/x-perfmon";
    if (strcmp(extension, "pml") == 0) return "application/x-perfmon";
    if (strcmp(extension, "pmr") == 0) return "application/x-perfmon";
    if (strcmp(extension, "pmw") == 0) return "application/x-perfmon";
    if (strcmp(extension, "png") == 0) return "image/png";
    if (strcmp(extension, "pnm") == 0) return "image/x-portable-anymap";
    if (strcmp(extension, "pnt") == 0) return "image/x-macpaint";
    if (strcmp(extension, "pntg") == 0) return "image/x-macpaint";
    if (strcmp(extension, "pnz") == 0) return "image/png";
    if (strcmp(extension, "pot") == 0) return "application/vnd.ms-powerpoint";
    if (strcmp(extension, "potm") == 0) return "application/vnd.ms-powerpoint.template.macroenabled.12";
    if (strcmp(extension, "potx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.template";
    if (strcmp(extension, "ppa") == 0) return "application/vnd.ms-powerpoint";
    if (strcmp(extension, "ppam") == 0) return "application/vnd.ms-powerpoint.addin.macroenabled.12";
    if (strcmp(extension, "ppm") == 0) return "image/x-portable-pixmap";
    if (strcmp(extension, "pps") == 0) return "application/vnd.ms-powerpoint";
    if (strcmp(extension, "ppsm") == 0) return "application/vnd.ms-powerpoint.slideshow.macroenabled.12";
    if (strcmp(extension, "ppsx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.slideshow";
    if (strcmp(extension, "ppt") == 0) return "application/vnd.ms-powerpoint";
    if (strcmp(extension, "pptm") == 0) return "application/vnd.ms-powerpoint.presentation.macroenabled.12";
    if (strcmp(extension, "pptx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.presentation";
    if (strcmp(extension, "prf") == 0) return "application/pics-rules";
    if (strcmp(extension, "prm") == 0) return "application/octet-stream";
    if (strcmp(extension, "prx") == 0) return "application/octet-stream";
    if (strcmp(extension, "ps") == 0) return "application/postscript";
    if (strcmp(extension, "psc1") == 0) return "application/powershell";
    if (strcmp(extension, "psd") == 0) return "application/octet-stream";
    if (strcmp(extension, "psess") == 0) return "application/xml";
    if (strcmp(extension, "psm") == 0) return "application/octet-stream";
    if (strcmp(extension, "psp") == 0) return "application/octet-stream";
    if (strcmp(extension, "pub") == 0) return "application/x-mspublisher";
    if (strcmp(extension, "pwz") == 0) return "application/vnd.ms-powerpoint";
    if (strcmp(extension, "qht") == 0) return "text/x-html-insertion";
    if (strcmp(extension, "qhtm") == 0) return "text/x-html-insertion";
    if (strcmp(extension, "qt") == 0) return "video/quicktime";
    if (strcmp(extension, "qti") == 0) return "image/x-quicktime";
    if (strcmp(extension, "qtif") == 0) return "image/x-quicktime";
    if (strcmp(extension, "qtl") == 0) return "application/x-quicktimeplayer";
    if (strcmp(extension, "qxd") == 0) return "application/octet-stream";
    if (strcmp(extension, "ra") == 0) return "audio/x-pn-realaudio";
    if (strcmp(extension, "ram") == 0) return "audio/x-pn-realaudio";
    if (strcmp(extension, "rar") == 0) return "application/octet-stream";
    if (strcmp(extension, "ras") == 0) return "image/x-cmu-raster";
    if (strcmp(extension, "rat") == 0) return "application/rat-file";
    if (strcmp(extension, "rc") == 0) return "text/plain";
    if (strcmp(extension, "rc2") == 0) return "text/plain";
    if (strcmp(extension, "rct") == 0) return "text/plain";
    if (strcmp(extension, "rdlc") == 0) return "application/xml";
    if (strcmp(extension, "resx") == 0) return "application/xml";
    if (strcmp(extension, "rf") == 0) return "image/vnd.rn-realflash";
    if (strcmp(extension, "rgb") == 0) return "image/x-rgb";
    if (strcmp(extension, "rgs") == 0) return "text/plain";
    if (strcmp(extension, "rm") == 0) return "application/vnd.rn-realmedia";
    if (strcmp(extension, "rmi") == 0) return "audio/mid";
    if (strcmp(extension, "rmp") == 0) return "application/vnd.rn-rn_music_package";
    if (strcmp(extension, "roff") == 0) return "application/x-troff";
    if (strcmp(extension, "rpm") == 0) return "audio/x-pn-realaudio-plugin";
    if (strcmp(extension, "rqy") == 0) return "text/x-ms-rqy";
    if (strcmp(extension, "rtf") == 0) return "application/rtf";
    if (strcmp(extension, "rtx") == 0) return "text/richtext";
    if (strcmp(extension, "ruleset") == 0) return "application/xml";
    if (strcmp(extension, "s") == 0) return "text/plain";
    if (strcmp(extension, "safariextz") == 0) return "application/x-safari-safariextz";
    if (strcmp(extension, "scd") == 0) return "application/x-msschedule";
    if (strcmp(extension, "sct") == 0) return "text/scriptlet";
    if (strcmp(extension, "sd2") == 0) return "audio/x-sd2";
    if (strcmp(extension, "sdp") == 0) return "application/sdp";
    if (strcmp(extension, "sea") == 0) return "application/octet-stream";
    if (strcmp(extension, "searchconnector-ms") == 0) return "application/windows-search-connector+xml";
    if (strcmp(extension, "setpay") == 0) return "application/set-payment-initiation";
    if (strcmp(extension, "setreg") == 0) return "application/set-registration-initiation";
    if (strcmp(extension, "settings") == 0) return "application/xml";
    if (strcmp(extension, "sgimb") == 0) return "application/x-sgimb";
    if (strcmp(extension, "sgml") == 0) return "text/sgml";
    if (strcmp(extension, "sh") == 0) return "application/x-sh";
    if (strcmp(extension, "shar") == 0) return "application/x-shar";
    if (strcmp(extension, "shtml") == 0) return "text/html";
    if (strcmp(extension, "sit") == 0) return "application/x-stuffit";
    if (strcmp(extension, "sitemap") == 0) return "application/xml";
    if (strcmp(extension, "skin") == 0) return "application/xml";
    if (strcmp(extension, "sldm") == 0) return "application/vnd.ms-powerpoint.slide.macroenabled.12";
    if (strcmp(extension, "sldx") == 0) return "application/vnd.openxmlformats-officedocument.presentationml.slide";
    if (strcmp(extension, "slk") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "sln") == 0) return "text/plain";
    if (strcmp(extension, "slupkg-ms") == 0) return "application/x-ms-license";
    if (strcmp(extension, "smd") == 0) return "audio/x-smd";
    if (strcmp(extension, "smi") == 0) return "application/octet-stream";
    if (strcmp(extension, "smx") == 0) return "audio/x-smd";
    if (strcmp(extension, "smz") == 0) return "audio/x-smd";
    if (strcmp(extension, "snd") == 0) return "audio/basic";
    if (strcmp(extension, "snippet") == 0) return "application/xml";
    if (strcmp(extension, "snp") == 0) return "application/octet-stream";
    if (strcmp(extension, "sol") == 0) return "text/plain";
    if (strcmp(extension, "sor") == 0) return "text/plain";
    if (strcmp(extension, "spc") == 0) return "application/x-pkcs7-certificates";
    if (strcmp(extension, "spl") == 0) return "application/futuresplash";
    if (strcmp(extension, "src") == 0) return "application/x-wais-source";
    if (strcmp(extension, "srf") == 0) return "text/plain";
    if (strcmp(extension, "ssisdeploymentmanifest") == 0) return "text/xml";
    if (strcmp(extension, "ssm") == 0) return "application/streamingmedia";
    if (strcmp(extension, "sst") == 0) return "application/vnd.ms-pki.certstore";
    if (strcmp(extension, "stl") == 0) return "application/vnd.ms-pki.stl";
    if (strcmp(extension, "sv4cpio") == 0) return "application/x-sv4cpio";
    if (strcmp(extension, "sv4crc") == 0) return "application/x-sv4crc";
    if (strcmp(extension, "svc") == 0) return "application/xml";
    if (strcmp(extension, "swf") == 0) return "application/x-shockwave-flash";
    if (strcmp(extension, "t") == 0) return "application/x-troff";
    if (strcmp(extension, "tar") == 0) return "application/x-tar";
    if (strcmp(extension, "tcl") == 0) return "application/x-tcl";
    if (strcmp(extension, "testrunconfig") == 0) return "application/xml";
    if (strcmp(extension, "testsettings") == 0) return "application/xml";
    if (strcmp(extension, "tex") == 0) return "application/x-tex";
    if (strcmp(extension, "texi") == 0) return "application/x-texinfo";
    if (strcmp(extension, "texinfo") == 0) return "application/x-texinfo";
    if (strcmp(extension, "tgz") == 0) return "application/x-compressed";
    if (strcmp(extension, "thmx") == 0) return "application/vnd.ms-officetheme";
    if (strcmp(extension, "thn") == 0) return "application/octet-stream";
    if (strcmp(extension, "tif") == 0) return "image/tiff";
    if (strcmp(extension, "tiff") == 0) return "image/tiff";
    if (strcmp(extension, "tlh") == 0) return "text/plain";
    if (strcmp(extension, "tli") == 0) return "text/plain";
    if (strcmp(extension, "toc") == 0) return "application/octet-stream";
    if (strcmp(extension, "tr") == 0) return "application/x-troff";
    if (strcmp(extension, "trm") == 0) return "application/x-msterminal";
    if (strcmp(extension, "trx") == 0) return "application/xml";
    if (strcmp(extension, "ts") == 0) return "video/vnd.dlna.mpeg-tts";
    if (strcmp(extension, "tsv") == 0) return "text/tab-separated-values";
    if (strcmp(extension, "ttf") == 0) return "application/octet-stream";
    if (strcmp(extension, "tts") == 0) return "video/vnd.dlna.mpeg-tts";
    if (strcmp(extension, "txt") == 0) return "text/plain";
    if (strcmp(extension, "u32") == 0) return "application/octet-stream";
    if (strcmp(extension, "uls") == 0) return "text/iuls";
    if (strcmp(extension, "user") == 0) return "text/plain";
    if (strcmp(extension, "ustar") == 0) return "application/x-ustar";
    if (strcmp(extension, "vb") == 0) return "text/plain";
    if (strcmp(extension, "vbdproj") == 0) return "text/plain";
    if (strcmp(extension, "vbk") == 0) return "video/mpeg";
    if (strcmp(extension, "vbproj") == 0) return "text/plain";
    if (strcmp(extension, "vbs") == 0) return "text/vbscript";
    if (strcmp(extension, "vcf") == 0) return "text/x-vcard";
    if (strcmp(extension, "vcproj") == 0) return "application/xml";
    if (strcmp(extension, "vcs") == 0) return "text/plain";
    if (strcmp(extension, "vcxproj") == 0) return "application/xml";
    if (strcmp(extension, "vddproj") == 0) return "text/plain";
    if (strcmp(extension, "vdp") == 0) return "text/plain";
    if (strcmp(extension, "vdproj") == 0) return "text/plain";
    if (strcmp(extension, "vdx") == 0) return "application/vnd.ms-visio.viewer";
    if (strcmp(extension, "vml") == 0) return "text/xml";
    if (strcmp(extension, "vscontent") == 0) return "application/xml";
    if (strcmp(extension, "vsct") == 0) return "text/xml";
    if (strcmp(extension, "vsd") == 0) return "application/vnd.visio";
    if (strcmp(extension, "vsi") == 0) return "application/ms-vsi";
    if (strcmp(extension, "vsix") == 0) return "application/vsix";
    if (strcmp(extension, "vsixlangpack") == 0) return "text/xml";
    if (strcmp(extension, "vsixmanifest") == 0) return "text/xml";
    if (strcmp(extension, "vsmdi") == 0) return "application/xml";
    if (strcmp(extension, "vspscc") == 0) return "text/plain";
    if (strcmp(extension, "vss") == 0) return "application/vnd.visio";
    if (strcmp(extension, "vsscc") == 0) return "text/plain";
    if (strcmp(extension, "vssettings") == 0) return "text/xml";
    if (strcmp(extension, "vssscc") == 0) return "text/plain";
    if (strcmp(extension, "vst") == 0) return "application/vnd.visio";
    if (strcmp(extension, "vstemplate") == 0) return "text/xml";
    if (strcmp(extension, "vsto") == 0) return "application/x-ms-vsto";
    if (strcmp(extension, "vsw") == 0) return "application/vnd.visio";
    if (strcmp(extension, "vsx") == 0) return "application/vnd.visio";
    if (strcmp(extension, "vtx") == 0) return "application/vnd.visio";
    if (strcmp(extension, "wav") == 0) return "audio/wav";
    if (strcmp(extension, "wave") == 0) return "audio/wav";
    if (strcmp(extension, "wax") == 0) return "audio/x-ms-wax";
    if (strcmp(extension, "wbk") == 0) return "application/msword";
    if (strcmp(extension, "wbmp") == 0) return "image/vnd.wap.wbmp";
    if (strcmp(extension, "wcm") == 0) return "application/vnd.ms-works";
    if (strcmp(extension, "wdb") == 0) return "application/vnd.ms-works";
    if (strcmp(extension, "wdp") == 0) return "image/vnd.ms-photo";
    if (strcmp(extension, "webarchive") == 0) return "application/x-safari-webarchive";
    if (strcmp(extension, "webtest") == 0) return "application/xml";
    if (strcmp(extension, "wiq") == 0) return "application/xml";
    if (strcmp(extension, "wiz") == 0) return "application/msword";
    if (strcmp(extension, "wks") == 0) return "application/vnd.ms-works";
    if (strcmp(extension, "wlmp") == 0) return "application/wlmoviemaker";
    if (strcmp(extension, "wlpginstall") == 0) return "application/x-wlpg-detect";
    if (strcmp(extension, "wlpginstall3") == 0) return "application/x-wlpg3-detect";
    if (strcmp(extension, "wm") == 0) return "video/x-ms-wm";
    if (strcmp(extension, "wma") == 0) return "audio/x-ms-wma";
    if (strcmp(extension, "wmd") == 0) return "application/x-ms-wmd";
    if (strcmp(extension, "wmf") == 0) return "application/x-msmetafile";
    if (strcmp(extension, "wml") == 0) return "text/vnd.wap.wml";
    if (strcmp(extension, "wmlc") == 0) return "application/vnd.wap.wmlc";
    if (strcmp(extension, "wmls") == 0) return "text/vnd.wap.wmlscript";
    if (strcmp(extension, "wmlsc") == 0) return "application/vnd.wap.wmlscriptc";
    if (strcmp(extension, "wmp") == 0) return "video/x-ms-wmp";
    if (strcmp(extension, "wmv") == 0) return "video/x-ms-wmv";
    if (strcmp(extension, "wmx") == 0) return "video/x-ms-wmx";
    if (strcmp(extension, "wmz") == 0) return "application/x-ms-wmz";
    if (strcmp(extension, "wpl") == 0) return "application/vnd.ms-wpl";
    if (strcmp(extension, "wps") == 0) return "application/vnd.ms-works";
    if (strcmp(extension, "wri") == 0) return "application/x-mswrite";
    if (strcmp(extension, "wrl") == 0) return "x-world/x-vrml";
    if (strcmp(extension, "wrz") == 0) return "x-world/x-vrml";
    if (strcmp(extension, "wsc") == 0) return "text/scriptlet";
    if (strcmp(extension, "wsdl") == 0) return "text/xml";
    if (strcmp(extension, "wvx") == 0) return "video/x-ms-wvx";
    if (strcmp(extension, "x") == 0) return "application/directx";
    if (strcmp(extension, "xaf") == 0) return "x-world/x-vrml";
    if (strcmp(extension, "xaml") == 0) return "application/xaml+xml";
    if (strcmp(extension, "xap") == 0) return "application/x-silverlight-app";
    if (strcmp(extension, "xbap") == 0) return "application/x-ms-xbap";
    if (strcmp(extension, "xbm") == 0) return "image/x-xbitmap";
    if (strcmp(extension, "xdr") == 0) return "text/plain";
    if (strcmp(extension, "xht") == 0) return "application/xhtml+xml";
    if (strcmp(extension, "xhtml") == 0) return "application/xhtml+xml";
    if (strcmp(extension, "xla") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xlam") == 0) return "application/vnd.ms-excel.addin.macroenabled.12";
    if (strcmp(extension, "xlc") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xld") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xlk") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xll") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xlm") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xls") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xlsb") == 0) return "application/vnd.ms-excel.sheet.binary.macroenabled.12";
    if (strcmp(extension, "xlsm") == 0) return "application/vnd.ms-excel.sheet.macroenabled.12";
    if (strcmp(extension, "xlsx") == 0) return "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
    if (strcmp(extension, "xlt") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xltm") == 0) return "application/vnd.ms-excel.template.macroenabled.12";
    if (strcmp(extension, "xltx") == 0) return "application/vnd.openxmlformats-officedocument.spreadsheetml.template";
    if (strcmp(extension, "xlw") == 0) return "application/vnd.ms-excel";
    if (strcmp(extension, "xml") == 0) return "text/xml";
    if (strcmp(extension, "xmta") == 0) return "application/xml";
    if (strcmp(extension, "xof") == 0) return "x-world/x-vrml";
    if (strcmp(extension, "xoml") == 0) return "text/plain";
    if (strcmp(extension, "xpm") == 0) return "image/x-xpixmap";
    if (strcmp(extension, "xps") == 0) return "application/vnd.ms-xpsdocument";
    if (strcmp(extension, "xrm-ms") == 0) return "text/xml";
    if (strcmp(extension, "xsc") == 0) return "application/xml";
    if (strcmp(extension, "xsd") == 0) return "text/xml";
    if (strcmp(extension, "xsf") == 0) return "text/xml";
    if (strcmp(extension, "xsl") == 0) return "text/xml";
    if (strcmp(extension, "xslt") == 0) return "text/xml";
    if (strcmp(extension, "xsn") == 0) return "application/octet-stream";
    if (strcmp(extension, "xss") == 0) return "application/xml";
    if (strcmp(extension, "xtp") == 0) return "application/octet-stream";
    if (strcmp(extension, "xwd") == 0) return "image/x-xwindowdump";
    if (strcmp(extension, "z") == 0) return "application/x-compress";
    if (strcmp(extension, "zip") == 0) return "application/x-zip-compressed";
    return "text/plain";
}

std::string file_extension(const std::string& file_name)
{
    std::string extension;
    for (size_t i = file_name.size() - 1; i != 0; i--) {
        if (file_name[i] == '.')
            break;
        extension = file_name[i] + extension;
    }
    return extension;
}
};