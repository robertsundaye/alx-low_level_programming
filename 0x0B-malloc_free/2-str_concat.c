#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int r, s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	r = s = 0;
	while (s1[r] != '\0')
	{
		r++;
	}
	while (s2[s] != '\0')
	{
		s++;
	}
	join = (char*)malloc(sizeof(char) * (r + s + 1));

	if (join == NULL)
	{
		return (NULL);
	}
	r = s = 0;
	while (s1[r] != '\0')
	{
		join[r] = s1[r];
		r++;
	}

	while (s2[s] != '\0')
	{
		join[r] = s2[s];
		r++, s++;
	}
	join[r] = '\0';
	return (join);
}
