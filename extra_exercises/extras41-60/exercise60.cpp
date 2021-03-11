#include <iostream>

using namespace std;

void tolower (char &a) {

  if (a > 64 && a < 91) {
    a += 32;
  }

  return;
}

void toupper (char &a) {

  if (a > 96 && a < 123) {
    a -= 32;
  }

  return;
}

int main (int argc, char **argv) {

  char a, b;

  cin >> a;

  tolower(a);

  cout << a << endl;

  cin >> b;

  toupper(b);

  cout << b << endl;
  
  return 0;
}
