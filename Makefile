CC = gcc
CFLAGS = -std=gnu90 -Wall -Wextra #-Werror
SRC = 01-reassign.c 02-mutate.c 03-stackfail.c 04-malloc.c 05-ramdrain.c

OBJ = ${SRC:.c=.o}
BIN = ${SRC:.c=.out}

.PHONY: all
all: $(BIN)

%.out: %.o
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: sweep
sweep:
	rm -f $(OBJ)

.PHONY: clean
clean: sweep
	rm -f $(BIN)
