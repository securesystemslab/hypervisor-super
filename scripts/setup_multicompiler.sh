#!/bin/bash -e
if [ ! -d multicompiler ]; then
    git clone git@github.com:/securesystemslab/multicompiler-automation.git multicompiler
fi


pushd multicompiler
./build.sh
popd
