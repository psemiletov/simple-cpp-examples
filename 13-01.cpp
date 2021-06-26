#include <stdio.h>

int main (int argc, char *argv[])
{
  char a[12] = {"hello\n"};
  char *p = a;

  printf (p);
  
  return 0;
}
