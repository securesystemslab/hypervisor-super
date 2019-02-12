#!/bin/bash -e
if [ ! -d multicompiler ]; then
    git clone -b ubuntu18_04 git@github.com:/securesystemslab/multicompiler-automation.git multicompiler
fi


pushd multicompiler
./build.sh
popd
