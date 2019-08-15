
set(VMM_PREFIX_PATH ${CMAKE_CURRENT_LIST_DIR}/../base_build/prefixes/x86_64-vmm-elf)


set(TOOLPATH ${CMAKE_CURRENT_LIST_DIR}/../multicompiler/llvm/build)
set(CMAKE_C_COMPILER ${TOOLPATH}/bin/clang)

set(COMPILER_RT_BUILD_BUILTINS ON)
set(COMPILER_RT_BUILD_SANITIZERS ON)
set(COMPILER_RT_SANITIZERS_TO_BUILD safestack)
set(COMPILER_RT_BUILD_XRAY OFF)
set(COMPILER_RT_BUILD_LIBFUZZER OFF)
set(COMPILER_RT_BUILD_PROFILE OFF)

set(CMAKE_C_COMPILER_TARGET x86_64-vmm-bareflank-elf)
set(CMAKE_ASM_COMPILER_TARGET x86_64-vmm-bareflank-elf)
#set(COMPILER_RT_DEFAULT_TARGET_ONLY ON)
set(LLVM_CONFIG_PATH ${TOOLPATH}/bin/llvm-config)

list(APPEND BF_FLAGS
      -isystem ${VMM_PREFIX_PATH}/include/c++/v1
      -isystem ${VMM_PREFIX_PATH}/include
)

list(APPEND BF_FLAGS
    --target=x86_64-vmm-bareflank-elf
    --sysroot=${VMM_PREFIX_PATH}
    -fpic
    -mno-red-zone
    -mstackrealign
    -fstack-protector-strong
    -DVMM
    -DUNIX
    -DSYSV
    -DGSL_THROW_ON_CONTRACT_VIOLATION
    -DMALLOC_PROVIDED
    -DCLOCK_MONOTONIC
    -D_HAVE_LONG_DOUBLE
    -D_LDBL_EQ_DBL
    -D_POSIX_TIMERS
    -D_POSIX_THREADS
    -D_POSIX_PRIORITY_SCHEDULING
    -D_UNIX98_THREAD_MUTEX_ATTRIBUTES
    -U__STRICT_ANSI__
    -D__SINGLE_THREAD__
    -U__USER_LABEL_PREFIX__
    -D__USER_LABEL_PREFIX__=
    -D__ELF__
    -msse
    -msse2
    -msse3
)

list(APPEND BF_CXX_FLAGS
  -std=c++17
  -x c++
)

list(APPEND BF_C_FLAGS
  -std=c11
)

list(APPEND _C_FLAGS ${BF_FLAGS} ${BF_C_FLAGS})
list(APPEND _CXX_FLAGS ${BF_FLAGS} ${BF_CXX_FLAGS})
string(REPLACE ";" " " _CXX_FLAGS "${_CXX_FLAGS}")
string(REPLACE ";" " " _C_FLAGS "${_C_FLAGS}")
set(CMAKE_C_FLAGS ${_C_FLAGS})
set(CMAKE_CXX_FLAGS ${_CXX_FLAGS})

string(CONCAT LD_FLAGS
  "--sysroot=${CMAKE_INSTALL_PREFIX} "
  "-L${CMAKE_INSTALL_PREFIX}/lib "
  "-z max-page-size=4096 "
  "-z common-page-size=4096 "
  "-z relro "
  "-z now "
  "-nostdlib "
)
