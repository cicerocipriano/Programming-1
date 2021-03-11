#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, x, i, j, k, l = 0;

  cin >> n;

  int a[n];

  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> x;

  for (j = 0; j < n; j++) {
    for (k = 0; k < n; k++) {
      if (j != k && a[j] + a[k] == x) {
	l++;
      }
    }
  }

  if (l > 0) {
    cout << "SIM" << endl;
    return 0;
  }
  else {
    cout << "NAO" << endl;
    return 0;
  }
}
