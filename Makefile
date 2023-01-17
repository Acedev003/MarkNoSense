CXX:= g++

all: build/main.o build/markov.o
	$(CXX) build/main.o build/markov.o -o bin/marknosense

build/markov.o : src/Markov/markov.cpp src/Markov/markov.hpp
	$(CXX) -c src/Markov/markov.cpp -o build/markov.o

build/main.o : src/main.cpp
	$(CXX) -c src/main.cpp -o build/main.o

clean:
	rm -r build/*.o
	rm -r bin/marknosense