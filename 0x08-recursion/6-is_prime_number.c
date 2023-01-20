#include "main.h"

/**
 * Hannah - returns 0 or 1
 * @num: number being checked
 * @i: possible factors of the number
 *
 * Return: 0 if not prime, 1 if primw
 */
int Hannah(int num, int i)
{
	if (i < num)
	{
		if ((num % i) == 0)
		{
			return (0);
		}
		else
		{
			return (Hannah(num, i + 1));
		}
	}
	else
	{
		return (i);
	}
}

/**
 * is_prime_number - check if num is a prime number or not
 * @n: input number
 *
 * Return: 1 if number is prime.
 * 0 if number is not prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (Hannah(n, 2));
	}
}
