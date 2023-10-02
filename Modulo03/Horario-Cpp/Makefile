CXX         := g++
CXX_FLAGS   := -Wall -Wextra -std=c++17 -ggdb

LIBRARIES   :=
EXECUTABLE  := Horario

all: run
	@rm -f $(EXECUTABLE)

run: $(EXECUTABLE)
	@./$(EXECUTABLE)

$(EXECUTABLE): *.cpp
	@$(CXX) $(CXX_FLAGS) -I. $^ -o $@ $(LIBRARIES)
