geometry: main.o input.o calculate.o translation_universal.o
	gcc main.o input.o calculate.o translation_universal.o -lm -o geometry.exe

main.o: main.c
	gcc -c main.c

input.o: input.c
	gcc -c input.c

translation_universal.o: translation_universal.c
	gcc -c translation_universal.c

calculate.o: calculate.c
	gcc -c calculate.c

clean:
	rm -rf *.o geometry
