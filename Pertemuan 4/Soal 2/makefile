# Define compiler flags
CXXFLAGS = -Wall -g

# Define the target executable
TARGET = multiplication

# Define the source files
SRCS = multiplication.cpp

# Define the object files
OBJS = $(SRCS:.cpp=.o)

# Define the default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	del $(TARGET_DEL) $(OBJS)

# Phony targets
.PHONY: all clean