#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char a[21] = {"hello"};
  char b[6] = {"world"};

  strcat (a, b);

  printf (a);
  printf ("\n");

  return 0;
}
