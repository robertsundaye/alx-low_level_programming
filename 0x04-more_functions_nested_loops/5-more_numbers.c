#include "main.h"

/**
 * more_numbers - ptints 1 to 14 ten ten times
 * Return: void
 */
void more_numbers(void)
{
	int r;
	int b;

	for (r = '1'; r <= '10'; r++)
	{
		for (b = '1'; b <= '14'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
