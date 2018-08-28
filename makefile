export CROSS_CXXFLAGS
export CROSS_CCFLAGS:=${CROSS_CXXFLAGS}
export CROSS_LDFLAGS:=${CROSS_CXXFLAGS}

COMPILER_PATH = $(shell pwd)/multicompiler/tools/bin

.PHONY: all
all: hypervisor

.PHONY: multicompiler
multicompiler:
	$(MAKE) -C multicompiler install

.PHONY: hypervisor_using_multicompiler
hypervisor_using_multicompiler:
	mkdir -p build_using_multicompiler && \
	cd build_using_multicompiler && \
	cmake ../hypervisor -DCLANG_BIN=$(COMPILER_PATH)/clang -DLD_BIN=$(COMPILER_PATH)/ld -G Ninja && \
	ninja

.PHONY: hypervisor
hypervisor:
	mkdir -p build && \
	cd build && \
	cmake ../hypervisor -G Ninja && \
	ninja

.PHONY: test
test:
	$(MAKE) -C hypervisor test

.PHONY: clean
clean:
	rm -rf build

