.PHONY: clean multicompiler hypervisor cross_compiler

all: hypervisor

multicompiler:
	$(MAKE) -C multicompiler install


hypervisor/.hypervisor_configured:
	./configure_hypervisor.sh

cross_compiler: hypervisor/.cross_compiler_created

hypervisor/.cross_compiler_created: multicompiler
	./build_cross_compiler.sh


clean_cross_compiler:
	rm hypervisor/.cross_compiler_created

clean_hypervisor_configured:
	rm hypervisor/.hypervisor_configured

hypervisor: hypervisor/.hypervisor_configured  hypervisor/.cross_compiler_created
	$(MAKE) -C hypervisor

