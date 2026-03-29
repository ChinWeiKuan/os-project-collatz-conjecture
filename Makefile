# Compile the Collatz conjecture program
CC = gcc
# Compiler flags
CFLAGS = -Wall

# Target executable name
TARGET = collatz

all: $(TARGET)

$(TARGET): collatz.c
	$(CC) $(CFLAGS) collatz.c -o $(TARGET)

clean:
	rm -f $(TARGET)