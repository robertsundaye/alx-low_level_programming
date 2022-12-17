#include <stdio.h>

/**
 * main - prints Fizz or Buzz for each multiples of 3 and 5
 * Return: always 0.
 */
int main(void)
{
	int r = 1;

	printf("%d", r);
	
	for (r = 2; r <= 100; r++)
	{
		if (r % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (r % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((r % 3 == 0) && (r % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else
		{
			ptintf(" %d", r);
		}
	}
	printf("\n");

	return(0);
}


