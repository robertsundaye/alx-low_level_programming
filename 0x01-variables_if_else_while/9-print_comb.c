#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: using the main function
 * This program prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int g;

for (g = 48 ; g <= 57 ; g++)
{
	putchar(g);
	if (g != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
