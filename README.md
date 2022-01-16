# x264 on dsp

[![pre-commit](https://img.shields.io/badge/pre--commit-enabled-brightgreen?logo=pre-commit&logoColor=white)](https://github.com/pre-commit/pre-commit)
[![Gitmoji](https://img.shields.io/badge/gitmoji-%20%F0%9F%98%9C%20%F0%9F%98%8D-FFDD67.svg?style=flat-square)](https://gitmoji.dev)

<!-- mdformat-toc start --slug=github --no-anchors --maxlevel=6 --minlevel=1 -->

- [x264 on dsp](#x264-on-dsp)
  - [分支](#%E5%88%86%E6%94%AF)
  - [准备](#%E5%87%86%E5%A4%87)
  - [编译](#%E7%BC%96%E8%AF%91)
    - [直接用 make 编译](#%E7%9B%B4%E6%8E%A5%E7%94%A8-make-%E7%BC%96%E8%AF%91)
    - [使用 eclipse 编译](#%E4%BD%BF%E7%94%A8-eclipse-%E7%BC%96%E8%AF%91)
  - [其他](#%E5%85%B6%E4%BB%96)
    - [在 PC 上编译](#%E5%9C%A8-pc-%E4%B8%8A%E7%BC%96%E8%AF%91)
    - [差别](#%E5%B7%AE%E5%88%AB)
    - [变量](#%E5%8F%98%E9%87%8F)
    - [选项](#%E9%80%89%E9%A1%B9)

<!-- mdformat-toc end -->

## 分支

- [dsp-make-project]: Makefile Project
- [dsp-swift-project]: C Project
- [dsp-swift-project-with-config]: C Project

![project](https://user-images.githubusercontent.com/32936898/149669510-ea26781a-cd6f-4167-b802-bc44f3c1c923.png)

代码都一样，只有工程文件不一样。

## 准备

编译此工程必须要有 \<config.h>, \<x264_config.h>。 [dsp-swift-project-with-config]
是一个提供了这些文件的分支。如果是其他分支，需要：

1. 安装 [Msys2](https://www.msys2.org/)
2. 下载
   [local.7z](https://github.com/Freed-Wu/x264/releases/download/v0.0.1/local.7z)
   ，解压缩后替换 `C:\\msys64\\usr\\local`。这个 `local` 只是将
   \<toolchain_8slot/bin> 的所有目录的文件都放在一起，方便一点。
3. 用 `C:\\msys64\\usr\\bin\\bash` 运行 \<tools/configure-on-dsp.sh>，生成
   \<config.mak>, \<config.h>, \<x264_config.h>。

```shell
$ tools/configure-on-dsp.sh
platform:       DSP
byte order:
system:         DSP
cli:            yes
libx264:        internal
shared:         no
static:         no
bashcompletion: no
asm:            no
interlaced:     no
avs:            no
lavf:           no
ffms:           no
mp4:            no
gpl:            yes
thread:         no
opencl:         no
filters:        crop select_every
lto:            no
debug:          yes
gprof:          no
strip:          no
PIC:            no
bit depth:      all
chroma format:  all

You can run 'make' or 'make fprofiled' now.
```

## 编译

**Note**: 因为该国产 DSP 的 llc 存在 4 种 bug ，目前编译会失败。

### 直接用 make 编译

```bash
make -r example
```

**Note**: `-r` 禁用内建规则。

### 使用 eclipse 编译

<!-- markdownlint-disable no-inline-html -->

1. 如果使用 [dsp-make-project] ，需要将 `C:\msys64\usr\bin` 加入 `PATH` 环境变
   量。否则 `eclipse` 无法找到 `make`。 [dsp-swift-project] 不需要 `make` 。
2. 打开 Eclipse， `File -> Open Project From FileSystem` ，打开本目录。
3. [dsp-swift-project] 需要配置好 `TOOLHOME` 。
4. 按 <kbd>Ctrl</kbd>+<kbd>B</kbd> 编译。

<!-- markdownlint-enable no-inline-html -->

## 其他

### 在 PC 上编译

原项目本身即可在个人电脑上编译。考虑到 DSP 编译时禁用了一系列可选选项，以及 DSP
将原先的

```bash
clang -o *.o *.c
```

拆成了

```bash
clang -S -emit-llvm -o *.ll *.c
llc -filetype=obj -o *.o *.ll
```

2 步。为了在不同设备上横向比较，也可以在个人电脑上使用相同的方式编译。

```bash
tools/configure-by-clang.sh
make -r example
```

目前只测试了 Linux 电脑。

### 差别

- 原项目中允许将同样的 `*.c` 通过 `-DHIGH_BIT_DEPTH=0 -DBIT_DEPTH=8` 和
  `-DHIGH_BIT_DEPTH=1 -DBIT_DEPTH=10` 编译得到 `*-8.o` 和 `*-10.o`。改成
  [dsp-swift-project] 后无法这么做，就只选择了 `-DHIGH_BIT_DEPTH=0 -DBIT_DEPTH=8`。
- make 一旦编译报错，就会停止并删除正在编译的文件。这使得每回重新 make 只能看到
  llc 相同的报错。 [dsp-swift-project] 不会这样。

### 变量

- 原项目采用 `SYS_*` 的宏来对不同平台进行条件编译。遵循原项目约定使用了
  `SYS_DSP` 。
- `SIZE_MAX` 应定义为 `__SIZE_MAX__`，即 $2^{64} - 1$。见
  `toolchain_8slot/include/gccmacros_c.h`。

### 选项

x264 在 `./configure --enable-debug` 时默认是 `-O1` 。但注意到对 clang 而言，
`-O1` 会把 llvm IR 的信息优化掉，无法查看 llc 的报错，所以添加了
`--extra-cflags=-O0` 。

[dsp-make-project]: https://github.com/Freed-Wu/x264/tree/dsp-make-project
[dsp-swift-project]: https://github.com/Freed-Wu/x264/tree/dsp-swift-project
[dsp-swift-project-with-config]: https://github.com/Freed-Wu/x264/tree/dsp-swift-project-with-config
