#include <stdio.h>

int _atoi(char* s)
{
	int integer = 0;
	while (*s)
	{
		integer = integer * 10 + (*s - '0');
		s++;
	}
	return (integer);
}
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

#include <stdlib.h>

int atoi(const char *str)
{
	int res = 0; // Initialize result 

	// Iterate through all characters of input string and 
	// update result 
	for (int i = 0; str[i] != '\0'; ++i) 
		res = res * 10 + str[i] - '0'; 

	// return result. 
	return res; 
}

char* strstr(const char* str1, const char* str2) 
{ 
	int i, j; 
	for (i = 0; str1[i] != '\0'; i++) { 
		for (j = 0; str2[j] != '\0'; j++) { 
			if (str1[i + j] != str2[j]) 
				break; 
		} 
		if (str2[j] == '\0') 
			return (char*)str1 + i; 
	} 
	return NULL; 
} 
