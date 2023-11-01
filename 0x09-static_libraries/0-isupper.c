#include "main.h"

/**
 * _isupper - checks for upper case letters
 * @c: takes an int as import
 * Return: returns 1 if the statement is true and 0 if the statement is false.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
