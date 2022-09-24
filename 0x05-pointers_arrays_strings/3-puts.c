#include "main.h"

/**
 * _puts - prints a string follow by a new new*
 * @str: inpute string
 */
void _puts(char *str)
{
for (; *str != '\0' ; str++)
{
	_putchar(*str);
}
_putchar('\n');
}
