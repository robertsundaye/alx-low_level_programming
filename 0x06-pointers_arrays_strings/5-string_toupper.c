#include "main.h"

/**
 * string_toupper - changes lower case to upper case
 * @a: pointer
 * Return: char
 */
char *string_toupper(char *a)
{
	int b;

	b = 0;
	while (a[b] != '\0')
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}

