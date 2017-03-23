#!/bin/bash -e

pushd hypervisor
 git pull
  pushd hyperkernel
   git pull
  popd
  pushd extendedapis
   git pull
 popd
popd


pushd multicompiler
 ./git_pull.sh
popd

