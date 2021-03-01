PROJECT_NAME = SongPlayer

INC = -Iinc

SRC = src/func_play.c \
src/func_pause.c \
src/func_stop.c \
src/func_ff.c \
src/func_rewind.c \
main.c

PROJECT_OUTPUT = $(PROJECT_NAME).out

.PHONY = all run clean

all:$(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

run:
	./$(PROJECT_OUTPUT)

clean:
	rm *.out 