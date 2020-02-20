#!/bin/bash -e
MC_CFLAGS="-fsanitize=code-layout-rando"
MC_CXX_FLAGS=${MC_CFLAGS}
MC_LD_FLAGS="--gc-sections"

pushd "$( dirname "${BASH_SOURCE[0]}" )"/..
MULTICOMPILER_C_FLAGS="${MC_CFLAGS}" MULTICOMPILER_CXX_FLAGS="${MC_CXX_FLAGS}" \
	MULTICOMPILER_LD_FLAGS="${MC_LD_FLAGS}" MULTICOMPILER_CMAKE_FLAGS=" -DMC_RUNTIME_LIB=$(pwd)/multicompiler/llvm/projects/compiler-rt/build/lib/linux/libclang_rt.code_layout_rando-x86_64.so" make hypervisor_using_multicompiler
popd

