#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
//объявление массива и инициализация - заполнение - его элементов значениями

  float траты [] = {1.0, 12.5, 44.0, 922.23, 3.14, 324.05, 11342.04};

  for (int счетчик = 0; счетчик < 7; счетчик++)
       cout << траты[счетчик] << endl;

  return 0;
}
