# Define the compiler
CXX = g++

# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = test_sum
SRC = test_sum.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET) test_sum

# Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean