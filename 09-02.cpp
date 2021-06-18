#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  string s;

  do
      {
        cout << "введите слово: ";
        cin >> s;
        cout << "спасибо!"  << endl;
       }
  while (s != "выход")
  
  return 0;
}