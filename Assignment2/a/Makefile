all: Assignment2a

Assignment2a: main.o reverse.o
	g++ main.o reverse.o -o Assignment2a

main.o: main.cpp
	g++ -c main.cpp

reverse.o: reverse.cpp
	g++ -c reverse.cpp -std=c++17

clean:
	rm -f main.o reverse.o Assignment2a