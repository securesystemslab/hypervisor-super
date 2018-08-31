# Turn on unittests
set(ENABLE_BUILD_TEST ON)

# Set release build for x86 architecture
set(BUILD_TYPE Release)
set(BUILD_TARGET_ARCH x86_64)

# Set flags to use C++14 because UCI Multicompiler is currently based
# on a clang version that does not support C++17.
unset(BFFLAGS_VMM_CXX)
unset(BFFLAGS_TEST_CXX)
unset(BFFLAGS_USERSPACE_CXX)

list(APPEND BFFLAGS_VMM_CXX
    -x c++
    -std=c++14
)

list(APPEND BFFLAGS_TEST_CXX
    -std=c++14
    -fvisibility-inlines-hidden
)

list(APPEND BFFLAGS_USERSPACE_CXX
    -std=c++14
    -fvisibility-inlines-hidden
)


