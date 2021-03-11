#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, s = 0;
  bool p = false;

  cin >> n;

  for (int i = 0; i < n; i++) {
    s = 0;
    for (int j = i + 1; j < n; j++) {
      s += j;
      if (s == n) {
	p = true;
	break;
      }
    }
    if (p == true) {
      break;
    }
  }

  if (p == true) {
    cout << "SIM" << endl;
    return 0;
  }
  else {
    cout << "NAO" << endl;
    return 0;
  }
}
