
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  float number;
  float percents;

  cout  << "Введите число: ";
  cin >> number;
  cout  << endl;
  cout  << "Введите проценты: ";
  cin >> percents;
  cout  << endl;

  cout  << "Результат: " << number * percents / 100 << endl;

  return 0;
}
