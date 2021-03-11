#include <iostream>

using namespace std;

int main (int agrc, char **argv) {

  int a, b;

  cout << "Write the two natural numbers: ";
  cin >> a >> b;

  cout << "All the possible multiplications between these two number are:" << endl;
  if (a < b) {
    for (int i = a; i <= b; i++) {
      for (int j = a; j <= b; j++) {
	cout << i*j << " ";
      }
      cout << endl;
    }
    return 0;
  }
  else if (a > b) {
    for (int i = b; i <= a; i++) {
      for (int j = b; j <= a; j++) {
	cout << i*j << " ";
      }
      cout << endl;
    }
    return 0;
  }
  else {
    cout << a*b << endl;
    return 0;
  }
}
