#include <iostream>

using namespace std;

int espelhar (int n) {

  int a = n / 1000;
  int b = (n - a * 1000) / 100;
  int c = (n - a * 1000 - b * 100) / 10;
  int d = n % (a * 1000 + b * 100 + c * 10);
  int e = d * 1000 + c * 100 + b * 10 + a;

  return e;
}

int main (int argc, char **argv) {

  int a = 1, b = 1, c;

  while (a != 0 && b != 0) {
    cin >> a >> b;
    if (a == 0 && b == 0) {
        continue;
    }
    c = espelhar(a);
    if (b == c) {
      cout << "espelho" << endl;
    }
    else {
      cout << "nao espelho" << endl;
    }
  }

  return 0;
}
