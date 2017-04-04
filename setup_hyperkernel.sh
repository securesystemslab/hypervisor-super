#!/bin/bash -e

#git clone git@github.com:/securesystemslab/hypervisor.git
git clone https://github.com/Bareflank/hypervisor.git 

pushd hypervisor

git clone https://github.com/Bareflank/extended_apis.git 
git clone https://github.com/Bareflank/hyperkernel.git

popd
