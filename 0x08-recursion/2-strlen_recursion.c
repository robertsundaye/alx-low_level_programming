#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a string
 * @s: pointer to a string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
