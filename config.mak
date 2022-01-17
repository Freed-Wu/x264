SRCPATH=.
prefix=/usr/local
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
libdir=${exec_prefix}/lib
includedir=${prefix}/include
SYS_ARCH=DSP
SYS=DSP
CC=C:\\msys64\\usr\\local/bin/clang.exe
CFLAGS=-Wno-maybe-uninitialized -Wshadow -O1 -g  -Wall -I. -I$(SRCPATH) -O0 -IC:\\msys64\\usr\\local/include -U_WIN32 -U_MSC_VER -DSIZE_MAX=0xffffffffffffffffUL -std=gnu99 -D_GNU_SOURCE -fno-tree-vectorize -fvisibility=hidden
CFLAGSSO=
CFLAGSCLI=
COMPILER=GNU
COMPILER_STYLE=GNU
DEPMM=-MM -g0
DEPMT=-MT
LD=C:\\msys64\\usr\\local/bin/ld.exe -o 
LDFLAGS= -LC:\\msys64\\usr\\local/lib -Tlink_8slots.x -M=linkMapFile 
LDFLAGSCLI=
LIBX264=libx264.a
CLI_LIBX264=$(LIBX264)
AR=C:\\msys64\\usr\\local/bin/ar.exe rc 
RANLIB=
STRIP=strip
INSTALL=install
AS=
ASFLAGS= -I. -I$(SRCPATH) -DSTACK_ALIGNMENT=4
RC=
RCFLAGS= -DDEBUG
EXE=
HAVE_GETOPT_LONG=1
DEVNULL=/dev/null
PROF_GEN_CC=-fprofile-generate
PROF_GEN_LD=-fprofile-generate
PROF_USE_CC=-fprofile-use
PROF_USE_LD=-fprofile-use
HAVE_OPENCL=no
EMIT_LLVM=-emit-llvm -gdwarf-2 -target dsp
LLC=C:\\msys64\\usr\\local/bin/llc.exe
LLCFLAGS=-filetype=obj -relocation-model=static -march=dsp -mcpu=dspse
CC_O=-o $@
default: cli
install: install-cli
