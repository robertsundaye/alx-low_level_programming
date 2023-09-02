#include <stdio.h>
#include "main.h"

/**
 * main - display the number of arguments passed to the program
 * @argc: total number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
