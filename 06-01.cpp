#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int x;
  cout << "введите число" << endl;
  
  cin >> x;

  if (x < 100)
     cout << "мало!" << endl;

  if (x > 100)
     cout << "много!" << endl;

  if (x == 100)
     cout << "достаточно!" << endl;

  return 0;
}
