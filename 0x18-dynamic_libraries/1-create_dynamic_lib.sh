#!/bin/bash

# Compile all .c files into position-independent object files
for source_file in *.c; do
    if [[ -f "$source_file" ]]; then
        object_file="${source_file%.c}.o"
        gcc -c -fPIC "$source_file" -o "$object_file"
    fi
done

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up intermediate object files
rm -f *.o
