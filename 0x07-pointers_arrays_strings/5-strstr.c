#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: adress of string to be scanned
 * @needle: adress of refference string
 *
 *Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; *haystack++)
	{
		char *i = haystack;
		char *j = needle;
		while (*i  == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
