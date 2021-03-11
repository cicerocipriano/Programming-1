#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a, b;

  cout << "Write a natural number: ";
  cin >> a;

  int c = 1;

  for (int i = 1; i <= a; i++) {
    cout << endl;
    for (int j = 1; j <= c; j++) {
      cout << "*";
    }
    c++;
  }

  cout << endl << "Write a natural number: ";
  cin >> b;

  int d = b;

  for (int i = 1; i <= b; i++) {
    cout << endl;
    for (int j = 1; j <= d; j++) {
      cout << "*";
    }
    d--;
  }
  cout << endl;

  return 0;
}
