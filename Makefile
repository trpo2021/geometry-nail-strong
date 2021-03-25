main: main.o input.o calculate.o
	gсс main.o input.o calculate.o -o geometry.exe

main.o: main.c
	gсс -c main.c

input.o: input.c
	gсс -c input.c

calculate.o: calculate.c
	gсс -c calculate.c

clean:
	rm -rf *.o main
