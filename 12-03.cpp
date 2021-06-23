#include <iostream>

using namespace std;

int sum (int a, int b)
{
   a = 10;
   return a + b;
}

int main (int argc, char *argv[])
{

  int x = 2;
  int z = 3;
  int f = sum (x, z);

  cout << x << endl;
 
  return 0;
}
