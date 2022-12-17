#include "main.h"

/**
 * print_diagonal - prints a diagonal on the terminal
 * @n: the number time '\' will be printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int r;
	int g;

	for (r = 1; r <= n; r++)
	{
		for (g = 1; g <= r; g++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (r < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
