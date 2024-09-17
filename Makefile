FLAGS = -Wall -Werror -g
main.bin: main.o extractFunctions.o
	g++ $(FLAGS) main.o extractFunctions.o -o main.bin

main.o: main.cpp extractFunctions.h
	g++ $(FLAGS) -c main.cpp 

extractFunctions.o: extractFunctions.cpp extractFunctions.h
	g++ $(FLAGS) -c extractFunctions.cpp

clean:
	rm -f *.o *.bin