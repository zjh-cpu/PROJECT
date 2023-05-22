# Compiler to use
CC=g++

# Compiler flags, -g for debug info and -Wall enables all warnings
CFLAGS=-g -Wall

# Name of the executable
EXECUTABLE=game

# Object files
OBJ = main.o Game.o Board.o Render.o \
      Tetrimino.o S_Tetrimino.o O_Tetrimino.o \
      L_Tetrimino.o T_Tetrimino.o I_Tetrimino.o 

# Default rule
all: $(EXECUTABLE)

# Rule for making the actual target
$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

# Rules for object files
main.o: main.cpp Game.h
	$(CC) $(CFLAGS) -c $<

Game.o: Game.cpp Game.h Render.h Board.h Tetrimino.h \
        S_Tetrimino.h O_Tetrimino.h L_Tetrimino.h T_Tetrimino.h I_Tetrimino.h
	$(CC) $(CFLAGS) -c $<

Board.o: Board.cpp Board.h
	$(CC) $(CFLAGS) -c $<

Render.o: Render.cpp Render.h Board.h Tetrimino.h \
          S_Tetrimino.h O_Tetrimino.h L_Tetrimino.h T_Tetrimino.h I_Tetrimino.h
	$(CC) $(CFLAGS) -c $<

Tetrimino.o: Tetrimino.cpp Tetrimino.h
	$(CC) $(CFLAGS) -c $<

S_Tetrimino.o: S_Tetrimino.cpp S_Tetrimino.h Tetrimino.h
	$(CC) $(CFLAGS) -c $<

O_Tetrimino.o: O_Tetrimino.cpp O_Tetrimino.h Tetrimino.h
	$(CC) $(CFLAGS) -c $<

L_Tetrimino.o: L_Tetrimino.cpp L_Tetrimino.h Tetrimino.h
	$(CC) $(CFLAGS) -c $<

T_Tetrimino.o: T_Tetrimino.cpp T_Tetrimino.h Tetrimino.h
	$(CC) $(CFLAGS) -c $<

I_Tetrimino.o: I_Tetrimino.cpp I_Tetrimino.h Tetrimino.h
	$(CC) $(CFLAGS) -c $<

# Rule for cleaning files
clean:
	rm -f $(EXECUTABLE) $(OBJ)
