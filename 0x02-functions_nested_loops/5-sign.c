#include "main.h"

/**
 * print_sign - checks the code
 * @n: take the value from the function
 * Return: 1 if true, 0 if true for the second statement, -1 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	        _putchar('-');
		return (-1);
	}
	
}
