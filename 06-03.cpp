#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int x;
  cout << "введите число" << endl;
  
  cin >> x;

  if (x == 100 || x == 200)
     cout << "годится!" << endl;
  else
        cout << "не годится" << endl;

  return 0;
}
