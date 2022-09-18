#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: using the main function
 * this program prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
char GG;
for (GG = '0' ; GG <= '9' ; GG++)
{
	putchar(GG);
}
for (GG = 'a' ; GG <= 'f'; GG++)
{
	putchar(GG);
}
putchar('\n');
return (0);
}
