source = $(wildcard *.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
exes = $(patsubst %.cpp,%,$(source))

all: $(objects)

%.o: %.cpp
	$(CXX) $< -o $@

clean:
	rm -f $(objects) $(exes)
