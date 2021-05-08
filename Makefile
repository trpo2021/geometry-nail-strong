LIB = src/libgeometry/
GEOM = src/geometry/
TEST = src/test/
FL1 = -I src -c
FL2 = -lm -o
CC = gcc

all: prog.exe test

main: prog.exe
test: ar_t
	$(CC) tmain.o test.o input.o $(FL2) test.exe

ar_t: tmain.o test.o input.o
	ar rc test.a tmain.o test.o input.o

prog.exe: ar_p
	$(CC) prog.a $(FL2) geometry.exe

ar_p: main.o calculate.o geometry.o input.o
	ar rc prog.a main.o calculate.o geometry.o input.o

tmain.o:
	$(CC) $(FL1) $(TEST)tmain.c

test.o:
	$(CC) $(FL1) $(TEST)test.c

input.o:
	$(CC) $(FL1) $(LIB)input.c

geometry.o:
	$(CC) $(FL1) $(LIB)geometry.c

calculate.o:
	$(CC) $(FL1) $(LIB)calculate.c

main.o:
	$(CC) $(FL1) $(GEOM)main.c

clean:
	rm *.o
	rm *.a
	rm *.exe
