#!/bin/bash -e
if [ ! -d multicompiler ]; then
    git clone --branch code_layout_rando_70 git@github.com:/securesystemslab/multicompiler-automation.git --depth 1 multicompiler
fi

if [ ! -d compiler-rt ]; then
    git clone -b code_layout_rando_70 git@github.com:securesystemslab/multicompiler-compiler-rt-priv.git --depth 1 compiler-rt 
fi


pushd multicompiler
if [ ! -d "llvm" ]; then
    ./fetch_multicompiler.sh

else
    ./git_pull.sh
fi

popd
