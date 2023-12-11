#!/bin/bash

# Create a list of C source files in the current directory
source_files=$(ls *.c 2>/dev/null)

# Check if there are any source files
if [ -z "$source_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each source file into an object file
for file in $source_files; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library using ar
ar rcs liball.a *.o

# Inform about completion
echo "Static library liball.a created successfully."

# Clean up: remove the temporary object files
rm -f *.o
