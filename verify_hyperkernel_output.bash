#!/bin/bash -e

pushd hypervisor

make driver_load
make quick

./makefiles/hyperkernel/bfexec/bin/native/bfexec makefiles/hyperkernel/tests/basic_driver/bin/cross/basic_driver makefiles/hyperkernel/tests/basic_c/bin/cross/basic_c
./makefiles/hyperkernel/bfexec/bin/native/bfexec  makefiles/hyperkernel/tests/basic_cxx/bin/cross/basic_cxx

make dump > output.txt

make stop
make unload
make driver_unload

echo Module Build Successfull
echo Verifying Program Output...

HELLO=`grep "hello world" output.txt -c`
FORD=`grep 'Which one was "Ford"? 4 8 15 16 23 42' output.txt -c`

if [[ '1' != $HELLO || '1' != $FORD ]]; then
    echo Failure
    exit -1
else
    echo Hypervisor is Functional
fi

popd
