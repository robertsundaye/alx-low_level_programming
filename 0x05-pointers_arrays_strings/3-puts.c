nclude "main.h"

/**
 * _puts - prints a string follow by a new new*
 * @str: inpute string
 */
void _puts(char *str)
{
int index;
index = 0;

while (str[index] != '\0;)
{
	_putchar(str[index]);
}
_putchar('\n');
}
