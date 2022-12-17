#include "main.h"

/**
 * more_numbers - ptints 0 to 14 ten ten times
 * Return: void
 */
void more_numbers(void)
{
	int r;
	int b;

	for (r = '1'; r <= '10'; r++)
	{
		for (b = '0'; b <= '14'; b++)
		{
			if (b >= 10)
			{
				_putchar('1');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
