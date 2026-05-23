COMPILER := gcc
SRCS := $(wildcard src/*.c)
OUTPUT := shell


all: $(OUTPUT)


$(OUTPUT): $(SRCS)
	$(COMPILER) $(SRCS) -o $(OUTPUT)

clean:
	rm -f $(OUTPUT)

.PHONY: all clean