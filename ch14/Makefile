source = $(wildcard ex*.cpp play*.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
exes = $(patsubst %.cpp,%.exe,$(source))

CXXFLAGS = -g -O0 -Wall

all: $(exes)

# ex01.exe: ex01.o cd1.o
# 	$(CXX) $^ -o $@ $(CXXFLAGS)
#
# ex02.exe: ex02.o cd2.o
# 	$(CXX) $^ -o $@ $(CXXFLAGS)
#
# ex03.exe: ex03.o dma.o
# 	$(CXX) $^ -o $@
#
# ex04.exe: ex04.o port.o
# 	$(CXX) $^ -o $@

%.exe: %.o
	$(CXX) $^ -o $@ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) $< -c -o $@ $(CXXFLAGS)

clean:
	rm -f *.o *.exe
	rm -rf *.dSYM
