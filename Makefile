main: lab3A.o main.o
	g++ -o lab3A main.o lab3A.o

lab3A.o: lab3A.cpp lab3A.h
	g++ -c lab3A.cpp

main.o: main.cpp lab3A.h
	g++ -c main.cpp

clean:
	rm lab3A.o main.o
