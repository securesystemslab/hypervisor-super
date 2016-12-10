#!/bin/bash -e
#
# Custom build script for Bareflank Hypervisor Cross Compiler
#
# Uses Secure Systems Labs Multicompiler in place of stock clang
#
# Author: Paul Kirth
# Date: 12/10/2016

pushd /tmp/bareflank/

rm -Rf source_llvm

if [[ -z "$CUSTOM_LLVM_BRANCH" ]]; then
    llvm_branch=$LLVM_RELEASE
else
    llvm_branch=$CUSTOM_LLVM_BRANCH
fi

if [[ -z "$CUSTOM_LLVM_URL" ]]; then
    llvm_url="http://llvm.org/git/llvm"
else
    llvm_url=$CUSTOM_LLVM_URL
fi

if [[ -z "$CUSTOM_CLANG_BRANCH" ]]; then
    clang_branch=$LLVM_RELEASE
else
    clang_branch=$CUSTOM_CLANG_BRANCH
fi

if [[ -z "$CUSTOM_CLANG_URL" ]]; then
    clang_url="http://llvm.org/git/clang.git"
else
    clang_url=$CUSTOM_CLANG_URL
fi


n=0
until [ $n -ge 5 ]
do
    #git clone --depth 1 -b $llvm_branch $llvm_url source_llvm && break
    git clone --depth 1 -b cfar_38 git@github.com:/securesystemslab/multicompiler-priv.git source_llvm && break
    n=$[$n+1]
    sleep 15
done


n=0
until [ $n -ge 5 ]
do
    #git clone --depth 1 -b $clang_branch $clang_url && break
    git clone --depth 1 -b cfar_38 git@github.com:/securesystemslab/multicompiler-clang-priv.git source_llvm/tools/clang && break
    n=$[$n+1]
    sleep 15
done


n=0
until [ $n -ge 5 ]
do
    git clone --depth 1 -b cfar_38 git@github.com:/securesystemslab/multicompiler-compiler-rt-priv.git source_llvm/projects/compiler-rt && break
    n=$[$n+1]
    sleep 15
done


n=0
until [ $n -ge 5 ]
do
    git clone --depth 1 -b cfar_38 git@github.com:/securesystemslab/poolalloc source_llvm/projects/poolalloc && break
    n=$[$n+1]
    sleep 15
done


n=0
until [ $n -ge 5 ]
do
    git clone --depth 1 git@github.com:/rboggild/SVF source_llvm/projects/svf && break
    n=$[$n+1]
    sleep 15
done


popd
