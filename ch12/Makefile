source = $(wildcard ex*.cpp play*.cpp)
objects = $(patsubst %.cpp,%.o,$(source))
exes = $(patsubst %.cpp,%.exe,$(source))

all: $(exes)

ex01.exe: ex01.o cow.o
	$(CXX) $^ -o $@

ex02.exe: ex02.o string2.o
	$(CXX) $^ -o $@

# ex03.exe: ex03.o vect.o
# 	$(CXX) $^ -o $@
#
# ex04.exe: ex04.o mytime.o
# 	$(CXX) $^ -o $@
#
# ex05.exe: ex05.o stonewt.o
# 	$(CXX) $^ -o $@
#
# ex06.exe: ex06.o stonewt.o
# 	$(CXX) $^ -o $@
#
# ex07.exe: ex07.o complex0.o
# 	$(CXX) $^ -o $@

%.exe: %.o
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $< -c -o $@

clean:
	rm -f *.o *.exe
	rm -rf *.dSYM
