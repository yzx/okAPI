-include _.mk
ALL:
	@echo
	$(MAKE) -f prj.mk YIELD="distclean lib"           build
	$(MAKE) -f prj.mk YIELD="lib" CPU=PSoC  TOOL=keil build
	$(MAKE) -f prj.mk YIELD="lib" CPU=BF548 TOOL=adi  build
	@echo
	@echo "$@ done in $(shell pwd)"

$(MAKECMDGOALS):
	$(MAKE) -f prj.mk CONFIG=Debug $(MAKECMDGOALS)

