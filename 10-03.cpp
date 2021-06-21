#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  string блокнот [] = {"один", "два", "три"};

  for (int счетчик = 0; счетчик < 3; счетчик++)
       cout << блокнот[счетчик] << endl;

  return 0;
}
