#!/bin/bash -e

pushd hypervisor
 git pull
  pushd hyperkernel
   git pull
  popd
  pushd extended_apis
   git pull
 popd
popd


pushd multicompiler
 ./git_pull.sh
popd

