# 
# Custom toolchain file used to build the Bareflank hypervisor using the
# UCI Multicompiler.
#

if(CMAKE_INSTALL_PREFIX)
    set(ENV{CMAKE_INSTALL_PREFIX} "${CMAKE_INSTALL_PREFIX}")
else()
    set(CMAKE_INSTALL_PREFIX "$ENV{CMAKE_INSTALL_PREFIX}")
endif()

set(CMAKE_SYSTEM_NAME Linux)
set(TOOLS_PATH ${CMAKE_CURRENT_LIST_DIR}/../multicompiler/tools)
set(MULTICOMPILER_PATH ${TOOLS_PATH}/bin)
set(CLANG_BIN ${MULTICOMPILER_PATH}/clang)
set(LD_BIN ${MULTICOMPILER_PATH}/ld)
set(AR_BIN ${MULTICOMPILER_PATH}/ar)
set(NM_BIN ${MULTICOMPILER_PATH}/nm)
set(AS_BIN ${MULTICOMPILER_PATH}/as)
set(CMAKE_C_COMPILER ${CLANG_BIN})
set(CMAKE_CXX_COMPILER ${CLANG_BIN})

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)
set(CMAKE_C_COMPILER_TARGET "x86_64-vmm-bareflank-elf")
set(CMAKE_CXX_COMPILER_TARGET "x86_64-vmm-bareflank-elf")


string(CONCAT LD_FLAGS
    "--sysroot=${CMAKE_INSTALL_PREFIX} "
    "-L${CMAKE_INSTALL_PREFIX}/lib "
    "-z max-page-size=4096 "
    "-z common-page-size=4096 "
    "-z relro "
    "-z now "
    "-nostdlib "
)

if(EXISTS "${CMAKE_INSTALL_PREFIX}/lib/libbfdso_static.a")
    string(CONCAT LD_FLAGS
        "${LD_FLAGS} --whole-archive ${CMAKE_INSTALL_PREFIX}/lib/libbfdso_static.a --no-whole-archive "
    )
endif()

set(CMAKE_C_ARCHIVE_CREATE
    "${AR_BIN} qc <TARGET> <OBJECTS>"
)

set(CMAKE_CXX_ARCHIVE_CREATE
    "${AR_BIN} qc <TARGET> <OBJECTS>"
)

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


