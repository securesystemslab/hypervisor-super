# Turn on unittests
set(ENABLE_BUILD_TEST ON)

# Set release build for x86 architecture
set(BUILD_TYPE Release)
set(BUILD_TARGET_ARCH x86_64)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set flags to use C++14 because UCI Multicompiler is currently based
# on a clang version that does not support C++17.
unset(BFFLAGS_VMM_CXX)

list(APPEND BFFLAGS_VMM_CXX
    -x c++
    -std=c++14
)

# Additional flags used for building the VMM components should be set to the
# desired randomization flags.
list (APPEND C_FLAGS_VMM
    ${MULTICOMPILER_C_FLAGS}
)

list (APPEND CXX_FLAGS_VMM
    ${MULTICOMPILER_CXX_FLAGS}
)

list (APPEND LD_FLAGS_VMM
    ${MULTICOMPILER_LD_FLAGS}
)
