main: main.o input.o calculate.o
	gсс main.o input.o calculate.o translation_universal.o -lm -o geometry.exe

main.o: main.c
	gсс -c main.c

input.o: input.c
	gсс -c input.c

calculate.o: calculate.c
	gсс -c calculate.c

translation_universal.o: translation_universal.c
  gcc -c translation_universal.c

clean:
	rm -rf *.o main
