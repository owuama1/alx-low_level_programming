#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up: Remove the object files
rm -f *.o

echo "Static library liball.a has been created."
