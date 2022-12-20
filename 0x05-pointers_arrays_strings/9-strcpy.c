#include "main.h"

/**
 * _strcpy - copies and print
 * @dest: destination
 * @scr: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != '\0')
	{
		*(dest + a) = *(scr + a);
		a++;
	}
	*(dest + a) = '\0';

	return (dest);
}
