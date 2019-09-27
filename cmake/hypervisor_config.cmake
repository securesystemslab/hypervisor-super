# Set release build for x86 architecture
set(BUILD_TYPE Release)
set(BUILD_TARGET_ARCH x86_64)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(BUILD_SHARED_LIBS OFF)
set(BUILD_STATIC_LIBS ON)
set(SAFESTACK_RUNTIME_LIB ${CMAKE_CURRENT_LIST_DIR}/../multicompiler/tools/lib/libclang_rt.safestack-x86_64.a)
set(MULTICOMPILER_LLVM_PATH ${CMAKE_CURRENT_LIST_DIR}/../multicompiler/llvm)
set(ENABLE_BUILD_TEST OFF)

# Uncomment these lines out to only build VMM components
set(ENABLE_BUILD_USERSPACE OFF)


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
