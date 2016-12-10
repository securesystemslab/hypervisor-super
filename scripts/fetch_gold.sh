#!/bin/bash -e
#
# Custom build script for Bareflank Hypervisor Cross Compiler
#
# Uses Secure Systems Labs Multicompiler in place of stock clang
#
# Author: Paul Kirth
# Date: 12/10/2016
#
# Based on Rian Quinns build scripts for Bareflank



pushd /tmp/bareflank/

rm -Rf binutils*/
rm -Rf src_binutils

n=0
until [ $n -ge 5 ]
do
    git clone --depth 1 -b random_commons-2_24 git@github.com:/securesystemslab/binutils.git && break
    n=$[$n+1]
    sleep 15
done

sleep 1
mv binutils*/ src_binutils

popd
