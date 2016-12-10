.PHONY: clean multicompiler hypervisor cross_compiler


export CUSTOM_FETCH_CLANG=$(realpath scripts/fetch_multicompiler.sh)
export CUSTOM_BUILD_CLANG=$(realpath scripts/build_multicompiler.sh)
export CUSTOM_FETCH_BINUTILS=$(realpath scripts/fetch_gold.sh)
export CUSTOM_FETCH_BINUTILS=$(realpath scripts/fetch_gold.sh)

export CROSS_CXXFLAGS
export CROSS_CCFLAGS
export CROSS_LDFLAGS


all: hypervisor

hypervisor/.hypervisor_configured: hypervisor/.cross_compiler_created
	./configure_hypervisor.sh

cross_compiler: hypervisor/.cross_compiler_created hypervisor/.hypervisor_configured

# separate multicompiler may not be required to correctly diversify 
# Bareflank hypervisor. Temporarily comment out multicompiler target
# and dependecy on multicompiler until this is confirmed.

#multicompiler:
	#$(MAKE) -C multicompiler install

#hypervisor/.cross_compiler_created: multicompiler
hypervisor/.cross_compiler_created:
	./build_cross_compiler.sh


clean_cross_compiler:
	rm hypervisor/.cross_compiler_created

clean_hypervisor_configured:
	rm hypervisor/.hypervisor_configured

hypervisor: cross_compiler
	$(MAKE) -C hypervisor

