#include "main.h"

/**
 * print_alphabet - chevks the code.
 *
 * Return - nothing to return
 */
void print_alphabet_x10(void)
{
	int rs = 1;
	char ps;
	while (rs <= 10)
	{
		char ps = 'a';
		while (ps <= 'z')
		{
			putchar(ps);
			ps++;
		}
		putchar('\n');
		rs++;
	}
}
