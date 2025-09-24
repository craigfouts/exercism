CC = gcc
CFLAGS = -g -Wall -Wextra -pedantic -std=c11
SRC = $(wildcard *.c) $(wildcard **/*.c)
OBJ = $(SRC:%.c=%.o)
LIB = $(addprefix -l,)
EXE = out

$(EXE): $(OBJ)
	$(CC) -o $@ $^ $(LIB)

%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(EXE)
