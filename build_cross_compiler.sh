#!/bin/sh -e

if [ ! -f hypervisor/.cross_compiler_created  ] ; then
    cd hypervisor
    #./tools/scripts/setup_ubuntu.sh --compiler clang_38 --local-compilers
    ./tools/scripts/setup_linuxmint.sh --compiler clang_38 --local-compilers
    touch .cross_compiler_created
fi
