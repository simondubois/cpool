SUBDIRS	= $(filter-out 000_ft_putchar/., $(wildcard */.))

.PHONY: force

all: $(SUBDIRS)

$(SUBDIRS): force
	@echo $@
	@$(MAKE) -C $@
