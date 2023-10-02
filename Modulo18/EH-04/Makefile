.PHONY = all clean

CXX         := g++
CXX_FLAGS   := -Wall -Wextra -std=c++17 -ggdb

LIBRARIES   :=
SRCS := $(wildcard *.cpp)
BINS := $(SRCS:%.cpp=%)

all: ${BINS}

%: %.cpp
	$(CXX) $(CXX_FLAGS) -I. $< -o $@ $(LIBRARIES)
	@./$@

clean:
	@rm -rf ${BINS}