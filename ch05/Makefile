source = $(wildcard *.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
exes = $(patsubst %.cpp,%,$(source))

CC = g++

CFLAGS = -g -O0

all: $(objects)

%.o: %.cpp
	$(CC) $< $(CFLAGS) -o $@

clean:
	rm -f $(objects) $(exes)
