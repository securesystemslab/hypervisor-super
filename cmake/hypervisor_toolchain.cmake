# hypervisor_toolchain.cmake
#
# Used to cross compile compiler-rt for the Bareflank hypervisor
#
# Specify LLVM_BUILD_PATH on command line using: cmake <source_dir>
# -DLLVM_BUILD_PATH=<LLVM_BUILD>

include(${CMAKE_CURRENT_LIST_DIR}/multicompiler_toolchain_vmm.cmake)


set(LLVM_BUILD_PATH ${CMAKE_CURRENT_LIST_DIR}/../multicompiler/tools)

set(LD_BIN ${LLVM_BUILD_PATH}/bin/clang)
set(CMAKE_C_COMPILER ${LLVM_BUILD_PATH}/bin/clang)
set(CMAKE_CXX_COMPILER ${LLVM_BUILD_PATH}/bin/clang++)
set(CMAKE_CXX_COMPILER_WORKS TRUE)
set(CMAKE_C_COMPILER_WORKS TRUE)

# This would ideally be set to "Bareflank"
# But then we would requite a Bareflank.cmake file in the
# CMake/Platforms root. Maybe some day.
set(CMAKE_SYSTEM_NAME "Generic")

# Instead, let's do what Android does.
set(BAREFLANK TRUE)

set(COMPILER_RT_BUILD_BUILTINS OFF)
set(COMPILER_RT_BUILD_XRAY OFF)
set(COMPILER_RT_BUILD_LIBFUZZER OFF)
set(COMPILER_RT_BUILD_PROFILE OFF)
set(COMPILER_RT_HAS_FNO_RTTI_FLAG OFF)
set(COMPILER_RT_HAS_STD_CXX11_FLAG OFF)

set(CMAKE_C_COMPILER_TARGET x86_64-vmm-bareflank-elf)
set(CMAKE_ASM_COMPILER_TARGET x86_64-vmm-bareflank-elf)
set(LLVM_CONFIG_PATH ${LLVM_BUILD_PATH}/bin/llvm-config)


set(SANITIZER_COMMON_CFLAGS ${CMAKE_CXX_FLAGS})

