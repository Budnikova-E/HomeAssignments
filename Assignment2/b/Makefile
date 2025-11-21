all: Assignment2b

Assignment2b: main.o calc.o
	clang++-15 main.o calc.o -o Assignment2b

main.o: main.cpp
	clang++-15 -c main.cpp

calc.o: calc.cpp
	clang++-15 -c calc.cpp -std=c++17

clean:
	rm -f main.o calc.o Assignment2b