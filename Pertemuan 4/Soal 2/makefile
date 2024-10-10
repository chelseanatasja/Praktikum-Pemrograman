# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = test_multiplication
SRC = test_multiplication.cpp
OBJS = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) test_multiplication

clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean