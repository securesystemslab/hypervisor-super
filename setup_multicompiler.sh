#!/bin/bash -e

git clone git@github.com:/securesystemslab/multicompiler-automation.git multicompiler
 
pushd multicompiler

./fetch_multicompiler.sh

popd
