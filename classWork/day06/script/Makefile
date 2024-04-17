CC = gcc

OBJ = ./obj
SRC = ./src
INC = ./inc
BIN = ./bin

LDFLAGS = -o
CFLAGS = -c -g

$(BIN)/app: $(OBJ)/main.o $(OBJ)/config.o
	$(CC) $(LDFLAGS) $(BIN)/app $(OBJ)/main.o $(OBJ)/config.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c
	mv main.o $(OBJ)/

$(OBJ)/config.o: $(SRC)/config.c
	$(CC) $(CFLAGS) $(SRC)/config.c
	mv config.o $(OBJ)/

clean:
	rm -f $(BIN)/app
	rm -f $(OBJ)/*.o
	@echo "Cleaning Done!"
