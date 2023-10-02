CXX         := gcc
CXX_FLAGS   := 

LIBRARIES   := -lm
EXECUTABLE  := ContaCorrente-C

all: run
	@rm -f $(EXECUTABLE)

run: $(EXECUTABLE)
	@./$(EXECUTABLE)

$(EXECUTABLE): *.c
	@$(CXX) $(CXX_FLAGS) -I. $^ -o $@ $(LIBRARIES)


