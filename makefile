.PHONY: clean multicompiler hypervisor

all:

multicompiler:
	$(MAKE) -C multicompiler install


hypervisor: hypervisor/.hypervisor_configured

hypervisor/.hypervisor_configured:
	./configure_hypervisor.sh


hypervisor/.cross_compiler_created:
	./build_cross_compiler.sh


clean_cross_compiler:
	rm hypervisor/.cross_compiler_created

clean_hypervisor_configured:
	rm hypervisor/.hypervisor_configured

hypervisor: hypervisor/.hypervisor_configured  hypervisor/.cross_compiler_created
	$(MAKE) -C hypervisor



