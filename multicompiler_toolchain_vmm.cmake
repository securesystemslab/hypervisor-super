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
set(MULTICOMPILER_PATH ${CMAKE_CURRENT_LIST_DIR}/multicompiler/tools/bin)
set(CLANG_BIN ${MULTICOMPILER_PATH}/clang)
set(LD_BIN ${MULTICOMPILER_PATH}/ld)
set(CMAKE_C_COMPILER ${CLANG_BIN})
set(CMAKE_CXX_COMPILER ${CLANG_BIN})

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
        "--whole-archive ${CMAKE_INSTALL_PREFIX}/lib/libbfdso_static.a --no-whole-archive "
    )
endif()

set(CMAKE_C_ARCHIVE_CREATE
    "ar qc <TARGET> <OBJECTS>"
)

set(CMAKE_CXX_ARCHIVE_CREATE
    "ar qc <TARGET> <OBJECTS>"
)

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