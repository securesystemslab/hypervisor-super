#!/bin/sh

if [ ! -f hypervisor/.hypervisor_configured  ] ; then
    cd hypervisor
    CROSS_COMPILER=gcc_520 ./tools/scripts/create_cross_compiler.sh
    touch .cross_compiler_created
fi
