#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  string s;
  int i = 0;

  while (s != "выход")
            {
              cout << "итерация номер "  << ++i << endl;              

              cout << "введите слово: ";
              cin >> s;
              cout << "спасибо!" << endl;

              if (s == "хватит")
                 break;

             if (s == "сначала")
                 continue;

             cout << "достигли конца цикла" << endl;

            }
  
   cout << "вот тут мы вышли из цикла" << endl;


  return 0;
}