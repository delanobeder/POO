CXX         := g++
CXX_FLAGS   := -Wall -Wextra -std=c++17 -ggdb

LIBRARIES   :=
EXECUTABLE  := Construtores

all: run
	@rm -rf $(EXECUTABLE)

run: $(EXECUTABLE)
	@./$(EXECUTABLE)

$(EXECUTABLE): *.cpp
	@$(CXX) $(CXX_FLAGS) -I. $^ -o $@ $(LIBRARIES)
