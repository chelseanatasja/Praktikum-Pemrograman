# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = fibonacci_test
SRC = fibonacci_test.cpp
OBJS = $(SRC:.cpp=.exe)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) fibonacci_test

# Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean