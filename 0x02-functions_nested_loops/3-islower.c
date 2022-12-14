#include "main.h"
/**
 * _islower - search for lower case letter
 * @c:  takes tge import
 * Return - returns 1 if the statement is true or 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
