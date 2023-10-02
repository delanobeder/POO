JAVAC       := javac
JAVA        := java

EXECUTABLE  := Main

all: run
	@rm -rf *.class

run: $(EXECUTABLE)
	@$(JAVA) $(EXECUTABLE)

$(EXECUTABLE): *.java
	@$(JAVAC) br/ufscar/dc/package1/*.java br/ufscar/dc/package2/*.java *.java 