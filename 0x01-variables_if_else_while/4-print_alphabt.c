#include <stdio.h>

/**
 * main -  program that prints the alphabet in lowercase
 *
 * Description: using the main function
 * This program  program that prints the alphabet in lowercase,
 * Return: 0
 */
int main(void)
{
char R;
for (R = 'a' ; R <= 'z' ; R++)
{
if (R != 'e' && R != 'q')
{
	putchar(R);
}
}
putchar('\n');
return (0);
}
