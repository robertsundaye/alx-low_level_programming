#include <stdio.h>
#include "main.h"

/**
 * main - displays all arguments it receives
 * @argc: total number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
