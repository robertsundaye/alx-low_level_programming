#include "main.h"

/**
 * _memset - fills a block of emeory with values
 * @s: adress tobe fill
 * @b: values
 * @n: amount of bytes to be copied
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int r = 0;

	for (; n > 0; r++)
	{
		*(s + r) = b;
		n--;
	}
	return (s);
}
