# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = rata2_test
SRC = rata2_test.cpp
OBJS = $(SRC:.cpp=.exe)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) rata2_test

# Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean