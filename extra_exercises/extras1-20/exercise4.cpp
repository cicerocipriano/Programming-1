#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a, b, c;

  cout << "Write an integer: ";
  cin >> a;

  if (a % 2 == 0) {
    cout << "This in an even integer." << endl << endl;
  }
  else {
    cout << "This is an odd integer." << endl << endl;
  }

  cout << "Write the vehicle's width (in meters) and weigth (in tons): ";
  cin >> b >> c;

  if (b <= 3 && c <= 10) {
    cout << "The vehicle can cross the bridge." << endl;
  }
  else {
    cout << "The vehicle cannot cross the bridge." << endl;
  }

  return 0;
}
