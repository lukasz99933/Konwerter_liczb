CC=g++
CFLAGS=-pedantic -Wall
SOURCES= main.cpp konwerter.cpp

all:
	$(CC) $(CFLAGS) $(SOURCES)
