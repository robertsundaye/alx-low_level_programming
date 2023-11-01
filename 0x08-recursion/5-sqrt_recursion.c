#include "main.h"

/**
 * Robert - checks if sprt exist
 * @num: num
 * @psqrt: possible sprt of a num
 *
 * Return: int
 */
int Robert(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
		{
			return (-1);
		}
		else
		{
			return (Robert(num, psqrt + 1));
		}
	}
}
/**
 * _sqrt_recursion - returns the squarroot of a num
 * @n: input num
 *
 * Return: sqrt of n.
 * -1 if n doesn't have natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (Robert(n, 0));
	}
}
