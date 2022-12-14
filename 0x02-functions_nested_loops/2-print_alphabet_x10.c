#include "main.h"

/**
 * print_alphabet - chevks the code.
 *
 * Return - nothing to return
 */
void print_alphabet_x10(void)
{
	int rs = 1;
	char t;
	while (rs <= 10)
	{
		char t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
		_putchar('\n');
		rs++;
	}
}
