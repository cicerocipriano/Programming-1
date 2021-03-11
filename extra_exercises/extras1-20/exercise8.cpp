#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a, b, c;

  cout << "Write two integers: ";
  cin >> a >> b;

  c = (a + b) / 2;

  if (c * 2 == a + b) {
    cout << "The average is an integer and it is: " << c << endl;
  }
  else {
    cout << "The average isn't an integer." << endl;
  }

  return 0;
}
