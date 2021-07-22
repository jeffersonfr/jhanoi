all:
	g++ -O0 -o hanoi-v01 hanoi-v01.cpp
	g++ -O0 -o hanoi-v02 hanoi-v02.cpp
	g++ -O0 -o hanoi-v03 hanoi-v03.cpp
	g++ -O0 -o th-mysterious th-mysterious.cpp

clean:
	rm -rf hanoi-v01 hanoi-v02 hanoi-v03 th-mysterious
