#!/bin/sh


if [ ! -f .setup.done  ] ; then
    cd multicompiler/llvm/tools
    ln -s -f ../../clang .
    cd ../projects
    ln -s -f ../../compiler-rt .
    ln -s -f ../../poolalloc .
    ln -s -f ../../svf .
    cd ../../..
    touch .setup.done
fi
