#include "main.h"

/**
 * _isdigit - checks the code
 * @c: take value from the function
 * Return: returns 1 if the statement or 0 if false
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
