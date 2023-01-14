#include "main.h"

/**
 * _strchr - search for character in a string
 * @s: adress of the string
 * @c: character to be searched for
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char *r = NULL;

	if (s != '\0')
	{
		do
		{
			if (*s == c)
			{
				r = s;
				break;
			}
		}
		while (*s++);
	}
	return (r);
}
