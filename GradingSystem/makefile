CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

SRC = Grading_System.cpp
OUT = Grading_System

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

run: $(OUT)
	./$(OUT)
	
clean:
	rm -f $(OUT)
