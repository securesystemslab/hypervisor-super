ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

.PHONY: all
all: hypervisor

.PHONY: multicompiler
multicompiler:
	./setup.sh

.PHONY: build
hypervisor_using_multicompiler: build
	mkdir -p hypervisor/build && \
	cd hypervisor/build && \
	 export CLANG_BIN=${ROOT_DIR}/multicompiler/tools/bin/clang; \
	 cmake .. -DMULTICOMPILER_C_FLAGS="${MULTICOMPILER_C_FLAGS}" \
	 -DMULTICOMPILER_CXX_FLAGS="${MULTICOMPILER_CXX_FLAGS}" \
	 -DMULTICOMPILER_LD_FLAGS="${MULTICOMPILER_LD_FLAGS}" \
	 ${MULTICOMPILER_CMAKE_FLAGS} \
	 -DCONFIG=$(ROOT_DIR)/cmake/hypervisor_config.cmake -G Ninja && \
	ninja -v

.PHONY: hypervisor
hypervisor:
	mkdir -p hypervisor/build && \
	cd hypervisor/build && \
	cmake .. -G Ninja && \
	ninja

.PHONY: code_layout_rando
code_layout_rando: compiler-rt/build/lib/clang/7.0.0/lib/linux/libclang_rt.code_layout_rando-x86_64.so multicompiler/tools/bin/clang base_build

base_build:
	./scripts/base_build.sh

compiler-rt:
	./setup.sh

compiler-rt/build/lib/clang/7.0.0/lib/linux/libclang_rt.code_layout_rando-x86_64.so: compiler-rt
	mkdir -p compiler-rt/build && \
	cd compiler-rt/build && \
	/snap/cmake/current/bin/cmake .. -DCMAKE_TOOLCHAIN_FILE=$(ROOT_DIR)/cmake/hypervisor_toolchain.cmake -DCOMPILER_RT_BUILD_SANITIZERS=ON \
	 -DCOMPILER_RT_SANITIZERS_TO_BUILD=code_layout_rando -G Ninja && \
	ninja code_layout_rando

.PHONY: test
test:
	cd hypervisor/build && \
	ninja unittest

.PHONY: clean
clean:
	rm -rf hypervisor/build
