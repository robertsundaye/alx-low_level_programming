#include "main.h"
/**
 * _islower - search for lower case letter
 * @c - takes tge import
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
