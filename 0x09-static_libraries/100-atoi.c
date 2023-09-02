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
