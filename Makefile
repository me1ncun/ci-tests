TARGET = tests/test
CXX = g++
CXXFLAGS = -g -O2

SRCS = tests/test.cpp src/func.cpp
OBJS = $(SRCS:.cpp=.o)

PROGRAM = program

all: $(PROGRAM) $(TARGET)

%.o: $.cpp  
	$(CXX) $(CXXFLAGS) -c -o $@ $<
.PHONE: all clean
