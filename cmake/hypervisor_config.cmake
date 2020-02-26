# Hypervisor CMake variables 
set(BUILD_TYPE Debug)
set(BUILD_TARGET_ARCH x86_64)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(BUILD_SHARED_LIBS OFF)
set(BUILD_STATIC_LIBS ON)
set(ENABLE_BUILD_TEST OFF) 
set(ENABLE_BUILD_USERSPACE OFF)
set(ENABLE_CODE_LAYOUT_RANDO ON)
set(ENABLE_BUILD_BINUTILS ON)

set(CRT_TOOLCHAIN_PATH ${CMAKE_CURRENT_LIST_DIR}/hypervisor_toolchain.cmake)
set(VMM_TOOLCHAIN_PATH ${CMAKE_CURRENT_LIST_DIR}/multicompiler_toolchain_vmm.cmake)
set(MULTICOMPILER_LLVM_PATH ${CMAKE_CURRENT_LIST_DIR}/../multicompiler/llvm CACHE PATH "Location of Multicompiler \"llvm\" directory")

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
