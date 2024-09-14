TARGETS:=xthread xcom xserver
LDIR:=$(shell pwd)
CTARGETS:=$(foreach n, $(TARGETS), $(LDIR)/$(n))
ITAG=_install
ITARGETS:=$(foreach n, $(TARGETS), $(LDIR)/$(n)$(ITAG))
UITAG=_uninstall
UTARGETS:=$(foreach n, $(TARGETS), $(LDIR)/$(n)$(UITAG))

# 多目标编译
all: $(TARGETS)
$(TARGETS):
	$(MAKE) -C $(LDIR)/$@/ -f $(LDIR)/$@/makefile depend
	$(MAKE) -C $(LDIR)/$@/ -f $(LDIR)/$@/makefile

# 多目标清理
clean: $(CTARGETS)
$(CTARGETS):
	$(MAKE) -C $@ -f $@/makefile clean

# 多目标安装
install:$(ITARGETS)
	@echo $(ITARGETS)
$(ITARGETS):$(TARGETS)
	@echo $@
	$(MAKE) -C $(subst $(ITAG),,$@) -f $(subst $(ITAG),,$@)/makefile install

# 多目标卸载
uninstall:$(UTARGETS)
	@echo $(UTARGETS)
$(UTARGETS):
	@echo $@
	$(MAKE) -C $(subst $(UITAG),,$@) -f $(subst $(UITAG),,$@)/makefile uninstall


list:
	@echo "TARGETS="$(TARGETS)
	@echo "CTARGETS="$(CTARGETS)
	@echo "ITARGETS="$(ITARGETS)
	@echo "UTARGETS="$(UTARGETS)

# 伪目标
.PHONY:all clean list $(TARGETS) $(CTARGETS)
