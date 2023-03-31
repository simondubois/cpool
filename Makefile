#
# For self
#

SUBDIRS	= $(filter-out 00_ft_putchar/., $(wildcard */.))

.PHONY: force

all: $(SUBDIRS)

$(SUBDIRS): force
	@echo $@
	@$(MAKE) -C $@
