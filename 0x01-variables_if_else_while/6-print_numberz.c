#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * Description: using the main function
 * This program  prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
int R = 0;
while (R < 10)
{
	putchar(R + 0);
	R++;
}
putchar('\n');
return (0);
}
