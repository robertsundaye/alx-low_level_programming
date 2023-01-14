#include "main.h"

/**
 * _memset - fills a block of emeory with values
 * @s: adress to be fill
 * @b: values
 * @n: amount of bytes to be copied
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int r;
	for (r = 0; r < n; r++)
	{
		*(s + r) = b;
	}
	return (s);
}
