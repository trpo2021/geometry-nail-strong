main: main.o input.o calculate.o
	gсс main.o input.o calculate.o -o geometry.exe

main.o: main.cpp
	gсс -c main.cpp

input.o: input.cpp
	gсс -c input.cpp

calculate.o: calculate.cpp
	gсс -c calculate.cpp

clean:
	rm -rf *.o main
