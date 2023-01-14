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
	int r = 0;
	while (r < n)
	{
		*(s + r) = b;
		r += 1;
	}
	return (s);
}
