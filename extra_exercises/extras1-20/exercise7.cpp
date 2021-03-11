#include <iostream>

using namespace std;

int calculator(int a, int b, char c) {

  int d = 0;

  if (c == '+') {
    d = a + b;
  }
  else if (c == '-') {
    d = a - b;
  }
  else if (c == '*') {
    d = a * b;
  }
  else {
    d = a / b;
  }

  return d;
}

int main (int argc, char **argv) {

  int a, b, c;
  char d;

  cout << "Write the operation: ";
  cin >> a >> b >> d;

  c = calculator(a,b,d);

  cout << c << endl;

  return 0;
}
