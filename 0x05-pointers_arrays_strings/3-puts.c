#include "main.h"

/**
 * _puts - prints a string follow by a new new*
 * @str: inpute string
 */
void _puts(char *str)
{
char index;

while (str[index] != '\0')
{
	_putchar(str[index]);
}
_putchar('\n');
}
