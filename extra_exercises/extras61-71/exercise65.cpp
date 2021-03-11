#include <iostream>

using namespace std;

void ex5 () {

  char a[50];
  
  cout << "Write a word: ";
  cin >> a;

  a[0] = 'P';
  a[1] = 'i';

  cout << a << endl;

  return;
}

int main (int argc, char **argv) {

  ex5();

  return 0;
}
