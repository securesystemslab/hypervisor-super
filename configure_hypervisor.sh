#!/bin/sh


if [ ! -f hypervisor/.hypervisor_configured  ] ; then
    cd hypervisor
    ./configure --compiler clang_38 --local-compilers
    #./configure --use_llvm_clang --compiler gcc_520
    #echo export LOCAL_COMPILER=\"true\"
    touch .hypervisor_configured
fi
