#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  float number;
  float percents;

  cout  << "Введите число: " << endl;
  cin >> number;
  cout  << "Введите проценты: " << endl;
  cin >> percents;

  cout  << "Результат: " << number * percents / 100 << endl;

  return 0;
}
