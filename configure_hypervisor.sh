#!/bin/sh

COMPILER_PATH=$HOME/compilers/clang_38/bin

if [ ! -f hypervisor/.hypervisor_configured  ] ; then
    cd hypervisor
    ./configure --compiler $COMPILER_PATH/clang --linker $COMPILER_PATH/x86_64-elf-ld -m hyperkernel/bin/hyperkernel.modules
    touch .hypervisor_configured
fi
