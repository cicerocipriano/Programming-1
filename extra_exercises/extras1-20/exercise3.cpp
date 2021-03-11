#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a, b;
  unsigned int c;

  cout << "Write an integer: ";
  cin >> a;

  if (a % 2 == 0) {
    cout << "This is an even integer." << endl;
  }
  else {
    cout << "This is an odd integer." << endl;
  }

  cout << endl << "Write a year: ";
  cin >> b;

  if (b % 100 == 0) {
    if (b % 400 == 0) {
      cout << "This is a leap year." << endl;
    }
    else {
      cout << "This is not a leap year." << endl;
    }
  }
  else {
    if (b % 4 == 0) {
      cout << "This is an leap year." << endl;
    }
    else {
      cout << "This is not an leap year." << endl;
    }
  }

  cout << endl << "Write a score: ";
  cin >> c;

  if (c >= 60) {
    cout << "You have been approved." << endl;
  }
  else {
    cout << "You have not been approved." << endl;
  }

  return 0;
}
