#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, s = 0, i, j, k;

  cin >> n;

  int a[n] ,b[n];

  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (j = 0; j < n; j++) {
    cin >> b[j];
  }

  for (k = 0; k < n; k++) {
    s += (a[k] * b[k]);
  }

  cout << s << endl;

  return 0;
}
