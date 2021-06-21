#include <iostream>

using namespace std;

int f()
{
  static int x = 1;
  return x++;
}

int main (int argc, char *argv[])
{
  cout << f() << endl;
  cout << f() << endl;
  cout << f() << endl;
  
  return 0;
}
