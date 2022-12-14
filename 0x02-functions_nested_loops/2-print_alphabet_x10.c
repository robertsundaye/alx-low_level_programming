#include "main.h"

/**
 * print_alphabet - chevks the code.
 *
 * Return - nothing to return
 */
void print_alphabet_x10(void)
{
	int rs;
	char ps;
	for (rs = 1; rs <= 10; rs++)
	{
		for (ps = 'a'; ps <= 'z'; ps++)
		{
			putchar(ps);
		}
		putchar('\n');
	}
}
