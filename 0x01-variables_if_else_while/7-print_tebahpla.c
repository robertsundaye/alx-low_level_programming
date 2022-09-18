#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Description: usng the main function
 * This program  prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
char TH;
for (TH = 'z' ; TH >= 'a' ; TH--)
{
	putchar(TH);
}
putchar('\n');
return (0);
}
