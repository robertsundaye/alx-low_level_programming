#include "main.h"
/**
 * _islower - search for lower case letter
 * @c:  takes tge import
 * Return - returns one if the statement is true
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
