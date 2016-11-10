#!/bin/sh


if [ ! -f hypervisor/.hypervisor_configured  ] ; then
    cd hypervisor
    ./configure --use_llvm_clang --compiler gcc_520
    touch .hypervisor_configured
fi
