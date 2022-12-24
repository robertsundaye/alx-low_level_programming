#include "main.h"

/**
 * reverse_array - reverse content of an array
 * @@: array
 * @n: number of element
 * Return: rev
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
