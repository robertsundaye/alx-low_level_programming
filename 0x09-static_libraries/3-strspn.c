#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: adress of string to be scanned
 * @accept: adress of refference string
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int r, i, l;

	l = 0;

	for (r = 0; *(s + r) != '\0'; r++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (s[r] == accept[i])
			{
				l++;
				break;
			}
		}
		if (s[r] != accept[i])
		{
			return (l);
		}
	}
	return (l);
}
