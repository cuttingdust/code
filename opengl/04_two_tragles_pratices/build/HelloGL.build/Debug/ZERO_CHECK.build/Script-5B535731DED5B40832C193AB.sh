#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build
  make -f /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build
  make -f /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build
  make -f /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build
  make -f /Users/handabao/MyFile/code/opengl/04_two_tragles_pratices/build/CMakeScripts/ReRunCMake.make
fi
