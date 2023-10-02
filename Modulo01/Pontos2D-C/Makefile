CXX         := gcc
CXX_FLAGS   := 

LIBRARIES   := -lm
EXECUTABLE  := Pontos2D-C

all: run
	@rm -f $(EXECUTABLE)

run: $(EXECUTABLE)
	@./$(EXECUTABLE)

$(EXECUTABLE): *.c
	@s$(CXX) $(CXX_FLAGS) -I. $^ -o $@ $(LIBRARIES)


