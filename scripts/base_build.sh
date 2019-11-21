#!/bin/bash -e
MC_CFLAGS=" -v "
MC_CXX_FLAGS=" -v "
MC_LD_FLAGS=""

# TODO: support symlinks
pushd "$( dirname "${BASH_SOURCE[0]}" )"/..
MULTICOMPILER_C_FLAGS="${MC_CFLAGS}" MULTICOMPILER_CXX_FLAGS="${MC_CXX_FLAGS}" \
MULTICOMPILER_LD_FLAGS="${MC_LD_FLAGS}" make hypervisor_using_multicompiler
popd
