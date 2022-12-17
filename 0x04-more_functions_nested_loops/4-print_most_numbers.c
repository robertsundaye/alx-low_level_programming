#include "main.h"

/**
 * print_most_numbers - checks the code in the function
 * Return: void
 */
void print_most_numbers(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		if (r == '2' || r == '4')
		{
			continue;
		}
		else
		{
			_putchar(r);
		}
	}
	_putchar('\n');
}
