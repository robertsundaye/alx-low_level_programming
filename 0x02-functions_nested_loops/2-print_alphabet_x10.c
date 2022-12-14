#include "main.h"

/**
 * print_alphabet_x10 - prints a to z
 */
void print_alphabet_x10(void)
{
	int t;
	char r;

	for (t = 1; t <= 10; t++)

	{
		for (r = 'a'; r <= 'z'; r++)

		{
			_putchar(r);
		}
		_putchar('\n');
	}
}
