#include "main.h"

/**
 * _pow_recursion - return the value of x raised to y
 * @x: number
 * @y: power
 *
 * Return: x to the power y.
 * -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
