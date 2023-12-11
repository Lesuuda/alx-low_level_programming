#!/bin/bash

# Compile each .c file into an object file
for file in *.c; do
    if [ -f "$file" ]; then
        gcc -c -fPIC "$file" -o "${file%.c}.o"
    fi
done

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o

# Clean up the temporary object files
rm *.o

