.PHONY: all
all: hypervisor

.PHONY: multicompiler
multicompiler:
	$(MAKE) -C multicompiler install

.PHONY: build
hypervisor_using_multicompiler: build
	mkdir -p hypervisor/build && \
	cd hypervisor/build && \
	cmake .. -DMULTICOMPILER_C_FLAGS="${MULTICOMPILER_C_FLAGS}" -DMULTICOMPILER_CXX_FLAGS="${MULTICOMPILER_CXX_FLAGS}" -DMULTICOMPILER_LD_FLAGS="${MULTICOMPILER_LD_FLAGS}" ${MULTICOMPILER_CMAKE_FLAGS} -DVMM_TOOLCHAIN_PATH=../../cmake/multicompiler_toolchain_vmm.cmake -DCONFIG=../../cmake/hypervisor_config.cmake -G Ninja && \
	ninja -v

.PHONY: hypervisor
hypervisor:
	mkdir -p hypervisor/build && \
	cd hypervisor/build && \
	cmake .. -G Ninja && \
	ninja

.PHONY: test
test:
	cd hypervisor/build && \
	ninja unittest

.PHONY: clean
clean:
	rm -rf hypervisor/build

