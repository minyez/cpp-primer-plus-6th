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

ex05.exe: ex05.o stack.o
	$(CXX) $^ -o $@

ex06.exe: ex06.o move.o
	$(CXX) $^ -o $@

ex07.exe: ex07.o plorg.o
	$(CXX) $^ -o $@

ex08.exe: ex08.o list.o
	$(CXX) $^ -o $@

%.exe: %.o
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $< -c -o $@

clean:
	rm -f *.o *.exe
	rm -rf *.dSYM
