#include <iostream>

using namespace std;

bool islower (char a) {

  if (a > 96 && a < 123) {
    return true;
  }
  else {
    return false;
  }
}

bool isupper (char a) {

  if (a > 64 && a < 91) {
    return true;
  }
  else {
    return false;
  }
}

bool isalpha (char a) {

  if ((a > 64 && a < 91) || (a > 96 && a < 123)) {
    return true;
  }
  else {
    return false;
  }
}

int main (int argc, char **argv) {

  char a;

  cin >> a;

  bool b, c, d;

  b = isupper(a);
  c = islower(a);
  d = isalpha(a);

  cout << b << " " << c << " " << d << endl;

  return 0;
}
