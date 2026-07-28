JAVAC       := javac
JAVA        := java

EXECUTABLE  := Main

all: run
	@find . -name "*.class" -type f -delete

run: $(EXECUTABLE)
	@$(JAVA) $(EXECUTABLE)

$(EXECUTABLE): *.java
	@$(JAVAC) *.java
