source = $(wildcard *.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
CC = g++

all: $(objects)

%.o: %.cpp
	$(CC) $< -o $@

clean:
	rm -f *.o *.exe
