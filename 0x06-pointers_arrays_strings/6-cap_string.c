#include "main.h"

/**
 * cap_string - capitalizes all first words
 * @g: pointer
 * Return: char
 */
char *cap_string(char *g)
{
	int r;

	r = 0;
	while (g[r])
	{
		while (!(g[r] >= 'a' && g[r] <= 'z'))
		{
			r++;
		}
		if (g[r - 1] == ' ' ||
		   g[r - 1] == '\t' ||
		   g[r - 1] == '\n' ||
		   g[r - 1] == ',' ||
		   g[r - 1] == ';' ||
		   g[r - 1] == '.' ||
		   g[r - 1] == '!' ||
		   g[r - 1] == '?' ||
		   g[r - 1] == '"' ||
		   g[r - 1] == '(' ||
		   g[r - 1] == ')' ||
		   g[r - 1] == '{' ||
		   g[r - 1] == '}' ||
		   i == 0)
			g[r] -= 32;
		r++;
	}
	return (g);
}
