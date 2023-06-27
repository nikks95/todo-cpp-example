# CXX := g++

# CXXFLAGS := -std=c++11 -Wall -Wextra -pedantic

# INC_DIR := inc

# SRC_DIR := src 

# OBJ_DIR := obj 

# BIN_DIR := bin 

# SRCS := $(wildcard $(SRC_DIR)/*.cpp)
# OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# TARGET := $(BIN_DIR)/project
# .PHONY: all clean
# all: $(TARGET)

# $(TARGET): $(OBJS)
# 	@mkdir -p $(BIN_DIR)
# 	$(CXX) $(CXXFLAGS) -I$(INC_DIR) $^ -o $@
	
# $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
# 	@mkdir -p $(OBJ_DIR)
# 	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

# clean: 
# 	rm -rf $(BIN_DIR) $(OBJ_DIR)


CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra -pedantic
INC_DIR := inc
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

TARGET := $(BIN_DIR)/project

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR)
