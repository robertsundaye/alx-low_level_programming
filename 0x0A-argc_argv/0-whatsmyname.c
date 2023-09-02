#include <stdio.h>
#include <string.h>
#include <unistd.h>

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
