#include <iostream>

using namespace std;

int main(int argc, char **argv) {

  unsigned int a, b;

  cout << "Write a natural number equal or higher than 1: ";
  cin >> a;
  
  cout << "The prime number(s) between 1 and " << a << " are: ";
  if (a == 1) {
    cout << "None." << endl;
    return 0;
  }
  else if (a == 2) {
    cout << "2" << endl;
    return 0;
  }
  else if (a == 3 || a == 4) {
    cout << "2 3" << endl;
    return 0;
  }
  else {
    cout << "2 3 ";
    for (int i = 4; i <= a; i++) {
      b = 0;
      for (int j = 2; j <= i / 2; j++) {
	if (i % j == 0) {
	  b++;
	}
      }
      if (b == 0) {
	cout << i << " ";
      }
    }
    cout << endl;
    return 0;
  }
}
