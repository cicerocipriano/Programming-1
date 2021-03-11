#include <iostream>

using namespace std;

void highest_int (int a, int b, int c) {

  if (a > b && a > c) {
    cout << "The highest integer is: " << a << endl;
  }
  else if (b > a && b > c) {
    cout << "The highest integer is: " << b << endl;
  }
  else if (c > a && c > b) {
    cout << "The highest integer is: " << c << endl;
  }
  else if (a == b && a > c) {
    cout << a << " and " << b << " are the highest integers." << endl;
  }
  else if (b == c && b > a) {
    cout << b << " and " << c << " are the highest integers." << endl;
  }
  else if (a == c && a > b) {
    cout << a << " and " << c << " are the highest integers." << endl;
  }
  else {
    cout << "The three integers are equal." << endl;
  }

  return;
}

int main (int argc, char **argv) {

  int a, b, c;

  cout << "Write three integers: ";
  cin >> a >> b >> c;

  highest_int (a,b,c);

  return 0;
}
