#!/bin/sh -e

COMPILER_PATH=$HOME/compilers/clang_38/bin

if [ ! -f hypervisor/.cross_compiler_created  ] ; then
    cd hypervisor
    #./tools/scripts/setup_ubuntu.sh --compiler $COMPILER_PATH/clang --linker $COMPILER_PATH/x86_64-elf-ld
    #./tools/scripts/setup_linuxmint.sh --compiler clang_38 --local-compilers
    touch .cross_compiler_created
fi
