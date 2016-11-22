#!/bin/sh

if [ ! -f hypervisor/.cross_compiler_created  ] ; then
    cd hypervisor
    ./tools/scripts/setup_ubuntu.sh --use_llvm_clang --compiler gcc_520 --local_compiler
    #CROSS_COMPILER=gcc_520 ./tools/scripts/create_cross_compiler.sh
    touch .cross_compiler_created
fi
