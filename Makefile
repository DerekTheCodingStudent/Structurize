FLAGS = -Wall -Werror -g

main.bin: main.o extractFunctions.o
	g++ $(FLAGS) main.o extractFunctions.o -o main.bin

main.o: main.cpp extractFunctions.h
	g++ $(FLAGS) -c main.cpp 

extractFunctions.o: extractFunctions.cpp extractFunctions.h utils.h
	g++ $(FLAGS) -c extractFunctions.cpp

utils.o: utils.cpp utils.h
	g++ $(FLAGS) -c utils.cpp

dataStructures.o : dataStructures.cpp dataStructures.h
	g++ $(FLAGS) -c dataStructures.cpp

clean:
	rm -f *.o *.bin