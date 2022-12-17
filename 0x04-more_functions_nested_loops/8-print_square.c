#include "main.h"

/**
 * print_spuare - prints a square on tge terminal
 * @size: size of the spuare
 * Return: no return
 */
void print_square(int size)
{
	int r, g;

	for (r = 1; r <= size; r++)
	{
		for (g = 1; g <= size; g++)
		{
			_putchar('#');
		}
		if (r != size)
			_putchar('\n');
	}
	_putchar('\n');
}
