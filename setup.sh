#!/bin/sh


if [ ! -f .setup.done  ] ; then
    cd multicompiler/llvm/tools
    ln -s ../../clang .
    cd ../projects
    ln -s ../../compiler-rt .
    ln -s ../../poolalloc .
    ln -s ../../svf .
    touch .setup.done
fi
