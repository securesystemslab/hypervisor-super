#!/bin/bash -e
MC_C_FLAGS="-fvtable-rando"
MC_CXX_FLAGS=${MC_C_FLAGS}
MC_LD_FLAGS="-fvtable-rando"

pushd ..
MULTICOMPILER_C_FLAGS="${MC_C_FLAGS}" MULTICOMPILER_CXX_FLAGS="${MC_CXX_FLAGS}" \
MULTICOMPILER_LD_FLAGS="${MC_LD_FLAGS}" make hypervisor_using_multicompiler
popd
