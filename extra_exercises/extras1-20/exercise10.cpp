#include <iostream>

using namespace std;

int invint (int a) {

  int b = 0;

  while (a > 0) {
    int c = a % 10;
    b = (b * 10) + c;
    a = a / 10;
  }

  return b;
}

int main (int argc, char **argv) {

  char a = 65, b = 122;
  int c, d = 0;
  
  cout << "Upper-case: ";
  while (a < 91) {
    cout << a << " ";
    a++;
  }

  cout << endl << "Lower-case backwards: ";

  while (b > 96) {
    cout << b << " ";
    b--;
  }

  cout << endl << "Write an integer: ";
  cin >> c;

  d = invint(c);

  cout << c << " backwards is: " << d << endl;

  return 0;
}
