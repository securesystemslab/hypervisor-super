#!/bin/bash -e
if [ ! -d multicompiler ]; then
    git clone git@github.com:/securesystemslab/multicompiler-automation.git multicompiler
fi


pushd multicompiler
if [ ! -d "llvm" ]; then
    ./fetch_multicompiler.sh

else
    ./git_pull.sh
fi

popd
