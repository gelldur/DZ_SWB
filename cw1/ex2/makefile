# Main makefile
CC=g++
CFLAGS=-c -Wall

BIN=bin
OBJ=obj

src = main.cpp dbgPrint.cpp
headers = main.h dbgPrint.h

obj = $(src:.cpp=.o)
objects = $(addprefix $(OBJ)/, $(obj) )

$(BIN)/main: $(objects) $(headers)
	mkdir -p $(BIN)
	$(CC) -o $@ $^

$(OBJ)/%.o: %.cpp
	mkdir -p $(OBJ)
	$(CC) $(CFLAGS) $< -o $@

.PHONY:clean

clean:
	rm -rf $(OBJ) $(BIN)
