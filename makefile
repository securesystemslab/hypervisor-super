.PHONY: all
all: hypervisor

.PHONY: multicompiler
multicompiler:
	$(MAKE) -C multicompiler install

.PHONY: hypervisor_using_multicompiler
hypervisor_using_multicompiler:
	mkdir -p build_using_multicompiler && \
	cd build_using_multicompiler && \
	cmake ../hypervisor -DCONFIG=../hypervisor_config.cmake -G Ninja && \
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

