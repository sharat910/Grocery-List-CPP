#Description: This is the makefile for given code

#This target will compile the entire program

All: total

total:	ListMain.o Item.o List.o 
	g++ ListMain.o Item.o List.o -o list

MainDie.o: ListMain.cpp
	g++ -c ListMain.cpp

Die.o: Item.cpp
	g++ -c Item.cpp

LoadedDie.o: List.cpp
	g++ -c List.cpp

clean:
	rm -rf *o total