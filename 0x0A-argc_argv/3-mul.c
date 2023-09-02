#include <stdio.h>
#include "main.h"

int _atoi(const char *str);

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

/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(const char *str)
{
	int res = 0; // Initialize result 

	// Iterate through all characters of input string and 
	// update result 
	for (int i = 0; str[i] != '\0'; ++i) 
		res = res * 10 + str[i] - '0'; 

	// return result. 
	return (res); 
}
