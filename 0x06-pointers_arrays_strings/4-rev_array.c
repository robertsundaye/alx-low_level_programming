#include "main.h"

/**
 * reverse_array - reverse content of an array
 * @@: input 1
 * @n: input 2
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int r;
	int c;
	
	for (r = 0; r < n; r++)
	{
		n--;
		c = a[r];
		a[r] = a[n];
		a[n] = c;
	}
}
