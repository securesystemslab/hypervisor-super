#!/bin/bash -e

git clone -b ubuntu18_04 git@github.com:/securesystemslab/multicompiler-automation.git multicompiler
 
pushd multicompiler
./build.sh
popd
