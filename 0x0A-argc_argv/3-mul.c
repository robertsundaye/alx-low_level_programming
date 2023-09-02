#include <stdio.h>
#include "main.h"

int _atoi(char* s);

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on Success), 1 onError
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

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
