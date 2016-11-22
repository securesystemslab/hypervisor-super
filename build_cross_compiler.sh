#!/bin/sh

if [ ! -f hypervisor/.cross_compiler_created  ] ; then
    cd hypervisor
    CROSS_COMPILER=gcc_520 ./tools/scripts/create_cross_compiler.sh
    touch .cross_compiler_created
fi
