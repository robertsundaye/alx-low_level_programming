#include "main.h"

/**
 * print_alphabet - checks the code and print a-z
 * Return - nothing to return
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
