#include "main.h"

/**
 * _length - check the length of the string
 * @s: string
 *
 * Return: length
 */
int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _length(s + 1));
	}
}

/**
 * Robert - checks if the string is a palindrome
 * @i: index
 * @lg: lenght
 * @s: string
 *
 * Return: 1 if palindrome or 0 if not
 */
int Robert(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (Robert(i + 1, lg - 1, s));
		}
		else if (*(s + i) != *(s + lg))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to the string
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	return (Robert(0, _length(s) - 1, s));
}
