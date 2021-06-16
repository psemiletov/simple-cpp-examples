#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int x;
  cout << "введите число" << endl;
  
  cin >> x;

  if (x != 100)
     cout << "не годится!" << endl;
  else
        cout << "годится" << endl;

  return 0;
}
