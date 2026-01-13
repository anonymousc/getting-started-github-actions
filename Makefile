NAME = unit-test

CXX = g++

CXXFLAGS = -Wextra -Wall -Werror

SCRS = $(wildcard srcs/*.cpp)

build:
	$(CXX) $(CXXFLAGS) $(SCRS) -o $(NAME)