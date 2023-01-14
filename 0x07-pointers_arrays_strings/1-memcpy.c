#include "main.h"

/**
 * _memcpy - copies string from one memory to another
 * @dest: adress to copy string to
 * @src: adress to copy stringfrom
 * @n: about of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		*(dest + r) = *(src + r);
	}
	return (dest);
}
