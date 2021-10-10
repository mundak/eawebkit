add_library(libpngEAWebKit 
"source/png.c"
"source/pngerror.c"
"source/pngget.c"
"source/pngmem.c"
"source/pngpread.c"
"source/pngread.c"
"source/pngrio.c"
"source/pngrtran.c"
"source/pngrutil.c"
"source/pngset.c"
"source/pngtrans.c"
"source/pngwio.c"
"source/pngwrite.c"
"source/pngwtran.c"
"source/pngwutil.c"
)
target_compile_definitions(libpngEAWebKit PRIVATE
  "EA_SLN_BUILD=1"
  "EA_USE_XCEEDZIP=0"
  "NDEBUG"
  "PNG_IMPEXP="
  "PNG_NO_MMX_CODE"
)
target_include_directories(libpngEAWebKit PRIVATE
  "include"
  "include/libpng"
)