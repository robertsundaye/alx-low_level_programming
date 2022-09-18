#include <stdio.h>

/**
 * main-  prints the alphabet in lowercase, and then in uppercase
 *
 * Description: using the main function
 * This program  prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
char R;
for (R = 'a' ; R <= 'z' ; R++)
{
	putchar(R);
}
for (R = 'A' ; R <= 'Z' ; R++)
{
	putchar(R);
}
putchar('\n');
return (0);
}
