all: bin/programm

bin/programm: build/main.o build/func.o 
	g++ -Wall -Werror build/main.o build/func.o 

build/main.o: src/main.cpp
	g++ -Wall -Werror -c src/main.cpp -o build/main.o

build/pars.o: src/func.cpp
	g++ -Wall -Werror -c src/func.cpp -o build/func.o

	
clean:
	rm -rf build/*.o