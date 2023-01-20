#include "main.h"

/**
 * _put_recursion - prints a string
 * @s: string adress
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion(s + 1);
}
