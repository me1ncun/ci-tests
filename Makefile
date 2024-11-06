CXX = g++
CXXFLAGS = -Wall -g
SOURCES = main.cpp func.cpp
HEADERS = func.h
EXECUTABLE = program

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES) $(HEADERS)
		$(CXX) $(CXXFLAGS) -o $@ $^


clean:
	rm -f $(EXECUTABLE) *.o
