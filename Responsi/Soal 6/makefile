# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = faktorial_test
SRC = faktorial_test.cpp
OBJS = $(SRC:.cpp=.exe)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) faktorial_test

# Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean