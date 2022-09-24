#include "main.h"
#include <string.h>

/**
 * _strlen - returns the lenght of a string
 * 
 * @s: inpute string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
int index;

while(s[index] != '\0')
{
	index++;
}
return (index);
}
