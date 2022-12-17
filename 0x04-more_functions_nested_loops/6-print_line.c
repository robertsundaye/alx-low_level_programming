#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: take an int as import
 */
void print_line(int n)
{
	int r;

	for (r = 1; r <= n; r++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('-');
		}
	}
}

