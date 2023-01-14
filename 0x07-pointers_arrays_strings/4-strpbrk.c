#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for a set of values
 * @s: adress of string to searched
 * @accept: adress of bytes to accept
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				j = 1;
			}
			i++;
		}
		i = 0;
		if (j == 1)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
