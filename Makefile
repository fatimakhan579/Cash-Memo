cashmain.exe: cashmain.o cashmemo.o Date.o Particular.o
	g++ -o cashmain.exe cashmain.o cashmemo.o Date.o Particular.o

cashmain.o: cashmain.cpp cashmemo.h
	g++ -c cashmain.cpp

cashmemo.o: cashmemo.cpp cashmemo.h
	g++ -c cashmemo.cpp

Date.o: Date.cpp Date.h
	g++ -c Date.cpp

Particular.o: Particular.cpp Particular.h
	g++ -c Particular.cpp

all: cashmain.exe
