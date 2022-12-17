#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: take an int as import
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(n);
	}
	_putchar('\n');
}
