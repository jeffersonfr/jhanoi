all:
	g++ -o hanoi -g -ggdb hanoi.cpp
	g++ -o hanoi-optimized -O2 -g -ggdb hanoi-optimized.cpp

clean:
	rm hanoi hanoi-optimized
