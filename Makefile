CXX ?= g++
CXXFLAGS ?= -Wall -Werror -pedantic -g --std=c++17 -Wno-sign-compare -Wno-comment

# Run regression test
test: main.exe
	./main.exe < main_test.in > main_test.out
	diff main_test.out main_test.out.correct
	echo PASS

# Compile the main executable
main.exe : main.cpp card.cpp board.cpp
	$(CXX) $(CXXFLAGS) card.cpp board.cpp main.cpp -o main.exe

# Remove automatically generated files
clean :
	rm -rvf *.exe *~ *.out *.dSYM *.stackdump