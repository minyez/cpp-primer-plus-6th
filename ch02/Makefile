source = $(wildcard *.cpp)
objects = $(patsubst %.cpp,%.o,$(source))

all: $(objects)

%.o: %.cpp
	$(CXX) $< -o $@

clean:
	rm -f *.o *.exe
