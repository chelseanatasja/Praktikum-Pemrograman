# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = test_Code_pertemuan_5
SRC = test_Code_pertemuan_5.cpp
OBJS = $(SRC:.cpp=.exe)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) test_Code_pertemuan_5

# Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean