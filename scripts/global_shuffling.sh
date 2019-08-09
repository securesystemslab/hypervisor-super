#!/bin/bash -e

if [ $# != 1 ]; then
	echo "Path to GOLD linker required. Eg: ./script.sh <absolute_path_to_gold>"
	exit
fi

MC_CFLAGS="-mllvm -shuffle-globals -mllvm -reverse-globals -frandom-seed=42"
MC_CXX_FLAGS="${MC_CFLAGS}"
MC_LD_FLAGS="-plugin $1 -plugin-opt=O3 -plugin-opt=mcpu=x86_64 -plugin-opt=--sort-common=random-reverse -plugin-opt=--random-seed=42"



pushd ..
MULTICOMPILER_C_FLAGS="${MC_CFLAGS}" MULTICOMPILER_CXX_FLAGS="${MC_CXX_FLAGS}" \
MULTICOMPILER_LD_FLAGS="${MC_LD_FLAGS}" make hypervisor_using_multicompiler
popd
