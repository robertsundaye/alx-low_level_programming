#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		a++;
		str++;
	}
	str -= (a / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
