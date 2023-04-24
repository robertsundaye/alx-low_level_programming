#include "main.h"
#include <stdio.h>

/**
 * _strchr - search for character in a string
 * @s: adress of the string
 * @c: character to be searched for
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
