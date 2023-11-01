#include "main.h"

/**
 * _isalpha - check the code
 * @c: takes value from the function
 * Return: returns 1 if true of 0 if false
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
