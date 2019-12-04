#!/bin/bash -e
MC_CFLAGS="-fsanitize=safe-stack"
MC_CXX_FLAGS=${MC_CFLAGS}
MC_LD_FLAGS="-u __safestack_init"

pushd "$( dirname "${BASH_SOURCE[0]}" )"/..
MULTICOMPILER_C_FLAGS="${MC_CFLAGS}" MULTICOMPILER_CXX_FLAGS="${MC_CXX_FLAGS}" \
	MULTICOMPILER_LD_FLAGS="${MC_LD_FLAGS}" MULTICOMPILER_CMAKE_FLAGS=" -DSAFESTACK_RUNTIME_LIB=$(pwd)/multicompiler/llvm/projects/compiler-rt/build/lib/linux/libclang_rt.safestack-x86_64.a -DDEFAULT_VMM=safestackeval" make hypervisor_using_multicompiler
popd

