#include <iostream>

using namespace std;

int sum (int a, int b) 
{
   int result = a + b;
   return result;
}

int main (int argc, char *argv[])
{
  cout  << "Значение X равно: " << sum (3, 4) << endl;

  return 0;
}
