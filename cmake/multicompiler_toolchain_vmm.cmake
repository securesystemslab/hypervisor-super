# 
# Custom toolchain file used to build the Bareflank hypervisor using the
# UCI Multicompiler.
#

if(CMAKE_INSTALL_PREFIX)
    set(ENV{CMAKE_INSTALL_PREFIX} "${CMAKE_INSTALL_PREFIX}")
else()
    set(CMAKE_INSTALL_PREFIX "$ENV{CMAKE_INSTALL_PREFIX}")
endif()

# This would ideally be set to "Bareflank"
# But then we would requite a Bareflank.cmake file in the
# CMake/Platforms root. Maybe some day.
#set(CMAKE_SYSTEM_NAME "Generic")

set(CMAKE_SYSTEM_NAME "Linux")

if (DEFINED ENV{CLANG_BIN})
    set(CMAKE_C_COMPILER $ENV{CLANG_BIN})
    set(CMAKE_CXX_COMPILER $ENV{CLANG_BIN})
else()
    message(FATAL_ERROR "Unable to find clang")
endif()


if(DEFINED ENV{LD_BIN})
    set(LD_BIN $ENV{LD_BIN})
else()
    set(LD_BIN ${CMAKE_INSTALL_PREFIX}/bin/ld)
endif()

message(STATUS "MULTICOMPILER_CXX_FLAGS ${MULTICOMPILER_CXX_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${MULTICOMPILER_CXX_FLAGS}")

message(STATUS "MULTICOMPILER_LD_FLAGS ${MULTICOMPILER_LD_FLAGS}")
set(LD_FLAGS "{LD_FLAGS} ${MULTICOMPILER_LD_FLAGS}")

message(STATUS "MULTICOMPILER_C_FLAGS ${MULTICOMPILER_C_FLAGS}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${MULTICOMPILER_C_FLAGS}")

if (ENABLE_CODE_LAYOUT_RANDO)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ffunction-sections")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ffunction-sections")
endif()

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)
#set(CMAKE_C_COMPILER_TARGET "x86_64-vmm-bareflank-elf")
#set(CMAKE_CXX_COMPILER_TARGET "x86_64-vmm-bareflank-elf")

set(CMAKE_C_COMPILER_TARGET "x86_64-vmm-elf")
set(CMAKE_CXX_COMPILER_TARGET "x86_64-vmm-elf")

string(CONCAT LD_FLAGS
    "--sysroot=${CMAKE_INSTALL_PREFIX} "
    "-L${CMAKE_INSTALL_PREFIX}/lib "
    "-z max-page-size=4096 "
    "-z common-page-size=4096 "
    "-z relro "
    "-z now "
    "-nostdlib "
)

set(CMAKE_C_ARCHIVE_CREATE
    "ar qc <TARGET> <OBJECTS>"
)

set(CMAKE_CXX_ARCHIVE_CREATE
    "ar qc <TARGET> <OBJECTS>"
)

if(ENABLE_CODE_LAYOUT_RANDO)
    string(APPEND LD_FLAGS " --traplinker-no-libs --traplinker-no-textramp ")
    set(LD_BIN "${CMAKE_INSTALL_PREFIX}/bin/traplinker ${LD_BIN}")
endif()

string(CONCAT LD_FLAGS ${LD_FLAGS} ${MULTICOMPILER_LD_FLAGS})
set(CMAKE_C_LINK_EXECUTABLE
    "${LD_BIN} ${LD_FLAGS} -pie <OBJECTS> -o <TARGET> <LINK_LIBRARIES> "
)

set(CMAKE_CXX_LINK_EXECUTABLE
    "${LD_BIN} ${LD_FLAGS} -pie <OBJECTS> -o <TARGET> <LINK_LIBRARIES>"
)

set(CMAKE_C_CREATE_SHARED_LIBRARY
    "${LD_BIN} ${LD_FLAGS} -shared <OBJECTS> -o <TARGET>"
)

set(CMAKE_CXX_CREATE_SHARED_LIBRARY
    "${LD_BIN} ${LD_FLAGS} -shared <OBJECTS> -o <TARGET>"
)


