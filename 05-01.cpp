#include <iostream>

using namespace std;

int sum (int a, int b) 
{
  return a + b;
}

int main (int argc, char *argv[])
{
  int x = sum (3, 4);
  cout << "Значение X равно: " << x << endl;

  return 0;
}
