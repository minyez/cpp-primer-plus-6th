source = $(wildcard ex*.cpp play*.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
exes = $(patsubst %.cpp,%.exe,$(source))

CXXFLAGS = -g -O0 -Wall

all: $(exes)

ex01.exe: ex01.o winec.o
	$(CXX) $^ -o $@ $(CXXFLAGS)

ex02.exe: ex02.o winep.o
	$(CXX) $^ -o $@ $(CXXFLAGS)

ex03.exe: ex03.o workermi.o
	$(CXX) $^ -o $@
#
ex04.exe: ex04.o person.o
	$(CXX) $^ -o $@

ex05.exe: ex05.o emp.o
	$(CXX) $^ -o $@

%.exe: %.o
	$(CXX) $^ -o $@ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) $< -c -o $@ $(CXXFLAGS)

clean:
	rm -f *.o *.exe
	rm -rf *.dSYM
