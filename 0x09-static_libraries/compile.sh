#!/bin/bash

# Create obj directory if it doesn't exist
mkdir -p obj

# List of C source files
source_files=(
    0-isupper.c 1-memcpy.c 2-strlen.c 3-strcmp.c 5-strstr.c _putchar.c
    0-memset.c 1-strncat.c 2-strncpy.c 3-strspn.c 6-abs.c
    0-strcat.c 100-atoi.c 3-islower.c 4-isalpha.c 9-strcpy.c
    1-isdigit.c 2-strchr.c 3-puts.c 4-strpbrk.c
)

# Compile each source file and place the object files in obj directory
for file in "${source_files[@]}"; do
    gcc -c "$file" -o obj/"${file%.c}.o"
done

echo "Compilation completed. Object files are in the 'obj' directory."
