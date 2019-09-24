#!/bin/bash -e
MC_CFLAGS="-fsanitize=safe-stack"
MC_CXX_FLAGS=${MC_CFLAGS}
MC_LD_FLAGS="/srv/bfbuild/hypervisor-super/multicompiler/llvm/build-compiler-rt/lib/linux/libclang_rt.safestack-x86_64.a -u __safestack_init"
pushd ..
MULTICOMPILER_C_FLAGS="${MC_CFLAGS}" MULTICOMPILER_CXX_FLAGS="${MC_CXX_FLAGS}" \
MULTICOMPILER_LD_FLAGS="${MC_LD_FLAGS}" make hypervisor_using_multicompiler
popd

