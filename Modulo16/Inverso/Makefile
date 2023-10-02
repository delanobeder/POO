CXX         := g++
CXX_FLAGS   := -Wall -Wextra -std=c++17 -ggdb

LIBRARIES   :=
EXECUTABLE  := Inverso

all: run
	@rm -f $(EXECUTABLE)
	@cat saida1.txt
	@echo "${\n}"
	@cat saida2.txt
	@echo "${\n}"
#	@rm -f saida*

run: $(EXECUTABLE)
	@./$(EXECUTABLE)

$(EXECUTABLE): *.cpp
	$(CXX) $(CXX_FLAGS) -I. $^ -o $@ $(LIBRARIES)
