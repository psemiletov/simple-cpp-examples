#include <stdio.h>

int main (int argc, char *argv[])
{
  char a[12] = {"hello\n"};
  char b[12] = {"world\n"};

  char *p;

  p = a;
  printf (p);

  p = b;
  printf (p);

  return 0;
}
