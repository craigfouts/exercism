CC := cc
FLG := -std=c23 -Wall -Wextra -pedantic
SRC := $(wildcard *.c) $(wildcard **/*.c)
OBJ := $(SRC:%.c=%.o)
OUT := out
CLN := $(OBJ) $(OUT)

default: all

.PHONY: all
all: $(OUT)

.PHONY: clean
clean:
	@rm -f $(CLN)

$(OUT): $(OBJ)
	@$(CC) -o $@ $^ $(FLG)

%.o: %.c*
	@$(CC) -o $@ -c $< $(FLG)
