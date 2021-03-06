CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=test.c param_helper.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=out
CLEANING_ITEMS=*.o *.exe

# VARIABLES AND COMMENTS DEFINITIONS END.

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(CLEANING_ITEMS)