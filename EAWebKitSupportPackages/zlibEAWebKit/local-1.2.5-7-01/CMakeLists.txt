add_library(zlibEAWebKit 
  "install/adler32.c"
  "install/compress.c"
  "install/crc32.c"
  "install/deflate.c"
  "install/infback.c"
  "install/inffast.c"
  "install/inflate.c"
  "install/inftrees.c"
  "install/trees.c"
  "install/uncompr.c"
  "install/zutil.c"
)
target_compile_definitions(zlibEAWebKit PRIVATE
  "EA_SLN_BUILD=1"
  "MY_ZCALLOC"
  "NDEBUG"
)
target_include_directories(zlibEAWebKit PRIVATE
  "include"
  "include/zlib"
)