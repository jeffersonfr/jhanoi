all:
	g++ -o hanoi hanoi.cpp
	g++ -o hanoi-optimized -O2 hanoi-optimized.cpp

clean:
	rm hanoi hanoi-optimized
