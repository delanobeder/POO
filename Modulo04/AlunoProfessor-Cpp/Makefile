CXX         := g++
CXX_FLAGS   := -Wall -Wextra -std=c++17 -ggdb

LIBRARIES   :=
EXECUTABLE  := Heranca

estatica: main1 $(EXECUTABLE)
	@rm -f $(EXECUTABLE) main.cpp

dinamica: main2 $(EXECUTABLE)
	@rm -f $(EXECUTABLE) main.cpp

main1: main.cpp.1
	@cp main.cpp.1 main.cpp

main2: main.cpp.2
	@cp main.cpp.2 main.cpp

$(EXECUTABLE): *.cpp
	@$(CXX) $(CXX_FLAGS) -I. $^ main.cpp -o $@ $(LIBRARIES)
	@./$(EXECUTABLE)

	
