#!/usr/bin/env bash
# Makefile need TOOLHOME
export TOOLHOME=C:\\\\msys64\\\\usr\\\\local
# SIZE_MAX comes from __SIZE_MAX__ in toolchain_8slot/include/gccmacros_c.h
CC="$TOOLHOME/bin/clang.exe" RANLIB= AR="$TOOLHOME/bin/ar.exe" LLC="$TOOLHOME/bin/llc.exe" LD="$TOOLHOME/bin/ld.exe -o " ./configure --disable-asm --disable-avs --disable-bashcompletion --disable-ffms --disable-gpac --disable-opencl --disable-interlaced --disable-lavf --disable-lsmash --disable-swscale --disable-thread --disable-win32thread --enable-debug --extra-cflags="-O0 -I$TOOLHOME/include -U_WIN32 -U_MSC_VER -DSIZE_MAX=0xffffffffffffffffUL" --extra-ldflags="-L$TOOLHOME/lib -Tlink_8slots.x -M=linkMapFile" --host=dsp
