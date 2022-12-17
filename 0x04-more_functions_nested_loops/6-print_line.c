#include "main.h"

/**
 * print_line - Draws a straight line
 *
 * @n: take an int as import
 * Return: no result
 */
void print_line(int n)
{
	int r;

	for (r = 1; r <= n; r++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

