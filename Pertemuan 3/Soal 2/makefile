# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Code_soal_2
SRC = Code_soal_2.cpp
OBJS = $(SRC:.cpp=.exe)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET) Code_soal_2

# Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean
