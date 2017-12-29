CC=g++
CFLAGS=-pedantic -Wall -std=c++11
SOURCES= main.cpp konwerter.cpp konwrzym.cpp

all:
	$(CC) $(CFLAGS) $(SOURCES)
