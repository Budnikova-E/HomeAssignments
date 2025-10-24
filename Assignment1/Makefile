all: Assignment1

Assignment1: main.o hello.o
	g++ main.o hello.o -o Assignment1

main.o: main.cpp
	g++ -c main.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

clean:
	rm -f main.o hello.o Assignment1