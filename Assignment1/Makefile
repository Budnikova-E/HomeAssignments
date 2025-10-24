all: Assignment1

Assignment1: main.o hello.o
	clang++-15 main.o hello.o -o Assignment1

main.o: main.cpp
	clang++-15 -c main.cpp

hello.o: hello.cpp
	clang++-15 -c hello.cpp

clean:
	rm -f main.o hello.o Assignment1