#Adam Eide and Ian Elletson makefile

LIBS=-lsfml-graphics -lsfml-window -lsfml-system
CXX := g++

all: main test test.o main.o

%.o: %.cpp
	$(CXX) -c $< -o $@

%.o: %.hpp
	$(CXX) -c $< -o $@

main: main.o
	@echo "** Building main"
	$(CXX) -o main main.o $(LIBS)
	
test: test.o
	@ech "** Building test"
	$(CXX) -o test test.o $(LIBS)

clean:
	@echo "** Removing object files and executable..."
	rm main test *.o