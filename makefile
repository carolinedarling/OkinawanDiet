####################################
# Program name: makefile
# Author: Merry Caroline Purser
# Date: 09/14/17
# Description: OkinawanDiet makefile
####################################

CFLAGS = -std=c++0x

OkinawanDiet: main.o diet.o
	g++ main.o diet.o -o OkinawanDiet
	
main.o: main.cpp
	g++ -c main.cpp
	
diet.o: diet.cpp diet.hpp
	g++ -c diet.cpp
	
clean:
	rm *.o OkinawanDiet