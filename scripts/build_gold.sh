#!/bin/bash -e
#
# Custom build script for Bareflank Hypervisor Cross Compiler
#
# Uses Secure Systems Labs Multicompiler in place of stock Clang
#
# Author: Paul Kirth
# Date: 12/10/2016
#
# Based on Rian Quinn's build scripts for Bareflank

rm -Rf /tmp/bareflank/build_binutils
mkdir -p /tmp/bareflank/build_binutils

pushd /tmp/bareflank/build_binutils

export CXXFLAGS+=-g
export CFLAGS+=-g
../src_binutils/configure --enable-gold --enable-plugins --target=x86_64-elf --prefix="$PREFIX" --disable-nls --disable-werror --with-sysroot
make -j2
make -j2 install

popd
