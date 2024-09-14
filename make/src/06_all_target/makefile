LDIR:=$(shell pwd)

TARGETS:=xthread xcom xserver
CTARGETS:=$(foreach n, $(TARGETS), $(LDIR)/$(n))

all: $(TARGETS)

$(TARGETS):
	$(MAKE) -C $(LDIR)/$@/ -f $(LDIR)/$@/makefile

clean: $(CTARGETS)

$(CTARGETS):
	$(MAKE) -C $@ -f $@/makefile clean


.PHONY:all clean $(TARGETS) $(CTARGETS)
