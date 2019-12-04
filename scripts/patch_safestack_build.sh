#!/bin/bash

pushd "$( dirname "${BASH_SOURCE[0]}" )"/..
SAFESTACK_BUILD_DIR=hypervisor/build
BASE_BUILD_DIR=base_build

rm $SAFESTACK_BUILD_DIR/bfvmm/x86_64-vmm-elf/build/src/memory_manager/libbfvmm_memory_manager.a
rm -rf $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfcrt.a
rm -rf $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfdso.a
rm -rf $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfpthread.a
rm -rf $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfsyscall.a
# rm -rf $SAFESTACK_BUILD_DIR/prefixes/x86_64-vmm-elf/bin/safestackeval
# rm -rf $SAFESTACK_BUILD_DIR/prefixes/x86_64-vmm-elf/bin/vmm

cp $BASE_BUILD_DIR/bfvmm/x86_64-vmm-elf/build/src/memory_manager/libbfvmm_memory_manager.a $SAFESTACK_BUILD_DIR/bfvmm/x86_64-vmm-elf/build/src/memory_manager/libbfvmm_memory_manager.a
cp $BASE_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfcrt.a $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfcrt.a 
cp $BASE_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfdso.a $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfdso.a
cp $BASE_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfpthread.a $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfpthread.a 
cp $BASE_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfsyscall.a $SAFESTACK_BUILD_DIR/bfruntime/x86_64-vmm-elf/build/libbfsyscall.a

