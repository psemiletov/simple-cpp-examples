#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int a = 13;
  int b = 8;

  int *p;

  p = &a;
  cout << *p << endl;

  p = &b;
  cout << *p << endl;
 
  return 0;
}
