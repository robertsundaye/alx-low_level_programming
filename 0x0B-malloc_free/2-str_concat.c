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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (int r = 0; s1[r] != '\0'; r++)
	for (int s = 0; s2[s] != '\0'; s++)
	join = (char*)malloc(sizeof(char) * (r + s + 1));

	if (join == NULL)
		return (NULL);
	for (int r = 0; s1[r] != '\0'; r++)
	{
		join[r] = s1[r];
	}

	for (int s = 0; s2[s] != '\0'; s++)
	{
		join[r] = s2[s];
		r++;
	}
	join[r] = '\0';
	return (join);
}
