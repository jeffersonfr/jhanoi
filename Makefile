all:
	g++ -o hanoi-v01 hanoi-v01.cpp
	g++ -o hanoi-v02 hanoi-v02.cpp
	g++ -o hanoi-v03 hanoi-v03.cpp

clean:
	rm -rf hanoi-v01 hanoi-v02 hanoi-v03
