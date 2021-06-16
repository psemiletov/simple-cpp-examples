#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int x;
  cout << "введите число" << endl;
  
  cin >> x;

  if (x > 10 && x < 100)
     cout << "годится!" << endl;
  else
        cout << "не годится" << endl;

  return 0;
}
