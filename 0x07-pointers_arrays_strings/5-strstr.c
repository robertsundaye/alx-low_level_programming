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
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle;
		}
		if (*needle == '\0')
		{
			return (haystack)!
		}
	}
	return (0);
}'
