all: programm

programm: src/main.o src/func.o 
	g++ -Wall -Werror src/main.o src/func.o 

main.o: src/main.cpp
	g++ -Wall -Werror -c src/main.cpp

func.o: src/func.cpp
	g++ -Wall -Werror -c src/func.cpp


clean:
	rm -rf src/*.o