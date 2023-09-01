#!/bin/bash

# create an array containing all .c files in the current directory
files=($(ls *.c))

# compile all files
for file in "${files[@]}"
do
	gcc -c -o "${file%.*}.o" "$file"
done

# create static library
ar rcs liball.a *.o
