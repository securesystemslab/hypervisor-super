#!/bin/bash

# Usage: ./patch_newlib <path_to_patched_include_files> <path_to_sysroot>
# Example: ./patch_newlib /srv/bfbuild/hypervisor-super/include/ /srv/bfbuild/hypervisor-super/base_build/prefixes/x86_64-test-elf/include/

cp "$1"/bits/* "$2"/bits/
cp "$1"/limits.h "$2"/limits.h
cp "$1"/sys/* "$2"/sys/

