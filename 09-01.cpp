#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  string s;

  while (s != "выход")
            {
              cout << "введите слово: ";
              cin >> s;
              cout << "спасибо!" << endl;
            }
  
  return 0;
}