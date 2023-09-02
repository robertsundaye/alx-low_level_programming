#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
  char path[1024];

  // get the path of the program
  if (readlink("/proc/self/exe", path, sizeof(path)) == -1)
	return -1;

  // print the name of the program
  printf("%s\n", strrchr(path, '/') + 1);

  return 0;
}
