#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int *a = new int [12];

  *a = 8;
  cout << *a << endl;

  a++;
  *a = 9;
  cout << *a << endl;

  a--;

  delete [] a;

  return 0;
}
