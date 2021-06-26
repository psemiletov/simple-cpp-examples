#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  
  string name;

  cout << "Введите имя: "; 
  cin >> name;

  string lozung1 = "Голосуй за " + name + "!";
  string lozung2 = name + " в президенты!";

  cout <<  lozung1  << endl;
  cout <<  lozung2  << endl;
  
  return 0;
}
