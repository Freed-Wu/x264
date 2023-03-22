# x264

- [TI C6000 toolchain > 8.0.0](https://www.ti.com/tool/C6000-CGT) has supported
  C99, so I try to transplant x264 to it.
- For TI C6000 toolchain < 8.0.0, see <https://github.com/Freed-Wu/x264-dsp>.

## Build

```sh
export C6X_C_DIR=/opt/ccstudio/ccs/tools/compiler/ti-cgt-c6000_8.3.12/include;
/opt/ccstudio/ccs/tools/compiler/ti-cgt-c6000_8.3.12/lib
export PATH=PATH:/opt/ccstudio/ccs/tools/compiler/ti-cgt-c6000_8.3.12/bin
./configure --disable-cli --enable-static --disable-bashcompletion --disable-opencl --disable-thread --disable-interlaced --bit-depth=8 --chroma-format=420 --enable-debug --disable-avs --disable-swscale --disable-lavf --disable-ffms --disable-gpac --disable-lsmash --host=tic6x-ti-none
make -j$(nproc) example
```

## Refer

- [TMS320C6000 Assembly Language Tools](https://www.ti.com/lit/ug/sprui03e/sprui03e.pdf)
- [TMS320C6000 Optimizing C/C++ Compile](https://www.ti.com/lit/ug/sprui04e/sprui04e.pdf)
