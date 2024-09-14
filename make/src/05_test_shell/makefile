
LDIR=$(shell pwd)
LDNAME=$(notdir $(shell pwd))
LS=$(shell ls)
TEMP=$(shell echo 111 > 2222)
OUT:=out

#INIT:=$(shell mkdir $(OUT))
INIT:=$(shell if [ ! -d $(OUT) ]; then mkdir $(OUT); fi )

test:
	@echo $(LDIR)
	@echo $(LDNAME)
	@echo $(TEMP)
	@echo -n $(INIT)
	@echo $(LS)

.PHONY: test
