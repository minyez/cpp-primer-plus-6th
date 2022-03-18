source = $(wildcard ex*.cpp play*.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
exes = $(patsubst %.cpp,%.exe,$(source))

all: $(exes)

ex01.exe: ex01.o bank.o
	$(CXX) $^ -o $@

ex02.exe: ex02.o person.o
	$(CXX) $^ -o $@

ex03.exe: ex03.o golf.o
	$(CXX) $^ -o $@

ex04.exe: ex04.o sales.o
	$(CXX) $^ -o $@

%.exe: %.o
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $< -c -o $@

clean:
	rm -f *.o *.exe
	rm -rf *.dSYM
