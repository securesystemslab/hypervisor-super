#!/bin/bash -e
MC_CFLAGS="-mllvm -max-stack-pad-size=20 -frandom-seed=42"
MC_CXX_FLAGS="${MC_CFLAGS}"
MC_LD_FLAGS=""

pushd ..
MULTICOMPILER_C_FLAGS="${MC_CFLAGS}" MULTICOMPILER_CXX_FLAGS="${MC_CXX_FLAGS}" \
MULTICOMPILER_LD_FLAGS="${MC_LD_FLAGS}" make hypervisor_using_multicompiler
popd