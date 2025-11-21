all: Assignment2b

Assignment2b: main.o calc.o
	g++ main.o calc.o -o Assignment2b

main.o: main.cpp
	g++ -c main.cpp

calc.o: calc.cpp
	g++ -c calc.cpp -std=c++17

clean:
	rm -f main.o calc.o Assignment2b