# Makefile for compiling my_program

CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

SRC = Admission_Process.cpp
OUT = Admission_Process

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

run: $(OUT)
	./$(OUT)
	
clean:
	rm -f $(OUT)
