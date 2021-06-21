#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int *a = new int [12];
  a[0] = 8;
  cout << a[0] << endl;
  delete [] a;

  return 0;
}
