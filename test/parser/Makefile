UNITY_ROOT = ../../../unity
PROJ_DIR = ../../src
C_COMPILER = gcc

SRC_FILES += test_parser.c
SRC_FILES += $(PROJ_DIR)/parser.c
SRC_FILES += $(UNITY_ROOT)/src/unity.c

INC_DIRS += -I$(PROJ_DIR)
INC_DIRS += -I$(UNITY_ROOT)/src

OUTPUT += test_parser

default: build run

build:
	$(C_COMPILER) $(SRC_FILES) $(INC_DIRS) -o $(OUTPUT)

run:
	./$(OUTPUT)
