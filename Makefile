CC=gcc
OUT_DIR=out
SRC_DIR=src

ALL_DIRS := $(wildcard $(SRC_DIR)/*)

PROJECTS := $(foreach dir,$(ALL_DIRS),$(if $(wildcard $(dir)/*.c),$(notdir $(dir))))

.PHONY: all $(PROJECTS) clean

all: $(PROJECTS)

$(PROJECTS):
	@echo "Building $@..."
	rm -rf $(OUT_DIR)/$@
	mkdir -p $(OUT_DIR)/$@/{assembly,bin,preprocessed}
	@for file in $(SRC_DIR)/$@/*.c; do \
		base=$$(basename $$file .c); \
		echo "Compilando $$base..."; \
		$(CC) -S $$file -o $(OUT_DIR)/$@/assembly/$$base.s; \
		$(CC) -E $$file -o $(OUT_DIR)/$@/preprocessed/$$base.i; \
		$(CC) $$file -o $(OUT_DIR)/$@/bin/$$base; \
	done


clean:
	rm -rf $(OUT_DIR)