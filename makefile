.PHONY: clean multicompiler hypervisor cross_compiler test


export CUSTOM_FETCH_CLANG=$(realpath scripts/fetch_multicompiler.sh)
export CUSTOM_BUILD_CLANG=$(realpath scripts/build_multicompiler.sh)
export CUSTOM_FETCH_BINUTILS=$(realpath scripts/fetch_gold.sh)
export CUSTOM_BUILD_BINUTILS=$(realpath scripts/build_gold.sh)

export CROSS_CXXFLAGS
export CROSS_CCFLAGS:=${CROSS_CXXFLAGS}
export CROSS_LDFLAGS:=${CROSS_CXXFLAGS}


all: hypervisor

hypervisor/.hypervisor_configured: hypervisor/.cross_compiler_created
	./configure_hypervisor.sh

cross_compiler: hypervisor/.cross_compiler_created hypervisor/.hypervisor_configured


multicompiler:
	$(MAKE) -C multicompiler install

hypervisor/.cross_compiler_created: multicompiler
	./build_cross_compiler.sh


hypervisor: cross_compiler
	$(MAKE) -C hypervisor


test:
	$(MAKE) -C hypervisor test


# Clean targets

clean_cross_compiler:
	rm hypervisor/.cross_compiler_created


clean_hypervisor_configured:
	rm hypervisor/.hypervisor_configured


clean:
	$(MAKE) -C hypervisor clean

