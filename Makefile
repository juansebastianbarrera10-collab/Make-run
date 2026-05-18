CXX = g++
CXXFLAGS = -Wall -Wextra -g
SRC = makerun.cpp
OUT = ejecutable

.PHONY: build run

build: $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: build
	./$(OUT)