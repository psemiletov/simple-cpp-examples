#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  string блокнот [] = {"один", "два", "три"};

  int счетчик = 0;

  while (счетчик < 3)
            cout << блокнот[счетчик++] << endl;

  return 0;
}
