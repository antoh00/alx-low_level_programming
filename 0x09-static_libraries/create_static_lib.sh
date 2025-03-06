#!/bin/bash

# Create a static library called liball.a from all .c files in the current directory

gcc -c *.c  # Compile all .c files into object files
ar rcs liball.a *.o  # Create the static library
rm -f *.o  # Clean up object files
