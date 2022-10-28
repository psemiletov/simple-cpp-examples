#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  float траты [] = {1.0, 12.5, 44.0, 922.23, 3.14, 324.05, 11342.04};

  int счетчик = 0;

  while (счетчик < 7)
        cout << траты[счетчик++] << endl;

  return 0;
}
