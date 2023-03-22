# x264

TI C compiler > 8.0.0 has supported C99. So I try to transport x264 to this
compiler.

## Prepare

Download and install TI compiler from <https://www.ti.com/tool/CCSTUDIO> (TI
IDE contains the latest compiler) or by your package manager (for my linux
distribution, it is <https://aur.archlinux.org/packages/ccstudio>).

## Run

```sh
export C6X_C_DIR=/opt/ccstudio/ccs/tools/compiler/ti-cgt-c6000_8.3.12/include;\
/opt/ccstudio/ccs/tools/compiler/ti-cgt-c6000_8.3.12/lib
export PATH=PATH:/opt/ccstudio/ccs/tools/compiler/ti-cgt-c6000_8.3.12/bin
./configure --disable-cli --enable-static --disable-bashcompletion \
--disable-opencl --disable-thread --disable-interlaced --bit-depth=8 \
--chroma-format=420 --disable-asm --enable-debug --disable-avs \
--disable-swscale --disable-lavf --disable-ffms --disable-gpac \
--disable-lsmash --host=tic6x-ti-none
make -j$(nproc) example
```

## Refer

TMS320C6000 Assembly Language Tools: <https://www.ti.com/lit/ug/sprui03e/sprui03e.pdf>

TMS320C6000 Optimizing C/C++ Compile: <https://www.ti.com/lit/ug/sprui04e/sprui04e.pdf>

## Related

- <https://code.videolan.org/videolan/x264/-/merge_requests/128>
- For TI compiler < 8.0.0, see <https://github.com/colin121/x264-dsp>
