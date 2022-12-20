#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	char a = s[0];
	int b = 0;
	int c;

	while (s[b] != '\0')
	{
		b++
	}
	for (c = 0; c < b; c++)
	{
		b--;
		a = s[c];
		s[c] = s[b];
		s[b] = a;
	}
}
