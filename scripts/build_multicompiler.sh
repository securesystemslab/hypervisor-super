#!/bin/bash -e
#
# Custom build script for Bareflank Hypervisor Cross Compiler
#
# Uses Secure Systems Labs Multicompiler in place of stock clang
#
# Author: Paul Kirth
# Date: 12/10/2016
#
# Based on Rian Quinns build scripts for Bareflank

rm -Rf /tmp/bareflank/build_clang
mkdir -p /tmp/bareflank/build_clang

pushd /tmp/bareflank/build_clang

cmake -DCMAKE_BUILD_TYPE=Debug -DLLVM_TARGETS_TO_BUILD="X86" -DCMAKE_INSTALL_PREFIX=$PREFIX -DLLVM_BINUTILS_INCDIR=../src_binutils/include ../source_llvm/

make -j2
make install


mv $PREFIX/bin/x86_64-elf-ld $PREFIX/bin/x86_64-elf-ld.old
ln -s x86_64-elf-ld.gold $PREFIX/bin/x86_64-elf-ld


mkdir -p $PREFIX/lib/bfd-plugins
ln -s ../LLVMgold.so $PREFIX/lib/bfd-plugins

popd
