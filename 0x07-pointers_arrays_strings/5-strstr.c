#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: adress of string to be scanned
 * @needle: adress of refference string
 *
 *Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
