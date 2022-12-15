#include "main.h"

/**
 * print_last_digit - checks the code in tge function
 * @g: takes value from the function
 * Return: returns last digit
 */
int print_last_digit(int g)
{
	int last_d;

	last_d = g % 10;
	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}

