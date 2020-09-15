source = $(wildcard *.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
exes = $(patsubst %.cpp,%,$(source))

CC = g++

all: $(objects)

%.o: %.cpp
	$(CC) $< -o $@

clean:
	rm -f $(objects) $(exes)
