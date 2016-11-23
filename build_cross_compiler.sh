#!/bin/sh -e

if [ ! -f hypervisor/.cross_compiler_created  ] ; then
    cd hypervisor
    ./tools/scripts/setup_ubuntu.sh --compiler clang_38 --local_compilers
    #CROSS_COMPILER=gcc_520 ./tools/scripts/create_cross_compiler.sh
    touch .cross_compiler_created
fi
