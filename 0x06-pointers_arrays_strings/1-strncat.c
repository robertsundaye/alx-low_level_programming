#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: join to
 * @src: join from
 * @n: number of char tobe joined
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (dest[a] = 0; dest[a] != '\0'; a++)
	
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
