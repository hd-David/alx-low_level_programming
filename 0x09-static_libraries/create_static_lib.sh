#!/bin/bash

# Compile all .c files in the current directory
gcc -c *.c

# Create a static library called liball.a
ar rcs liball.a *.o

# Clean up object files
rm -f *.o
