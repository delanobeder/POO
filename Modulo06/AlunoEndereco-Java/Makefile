JAVAC       := javac
JAVA        := java

EXECUTABLE  := Main

all: run
	@rm -rf *.class

run: $(EXECUTABLE)
	@$(JAVA) $(EXECUTABLE)

$(EXECUTABLE): *.java
	@$(JAVAC) *.java -Xlint:deprecation
