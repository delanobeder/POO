MCS       := mcs
MONO      := mono

EXECUTABLE  := Program

all: run
	@rm -rf $(EXECUTABLE)

run: $(EXECUTABLE)
	@$(MONO) $(EXECUTABLE)

$(EXECUTABLE): *.cs
	@$(MCS) -out:$(EXECUTABLE) *.cs