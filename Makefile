NAME = unit-test

CXX = g++

CXXFLAGS = -Wextra -Wall -Werror

SCRS = $(wildcard : srcs/*.c)

build:
	$(CXX) $(CXXFLAGS) $(SCRS) -o $(NAME)