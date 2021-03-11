#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, x;
  int i, j, k = 0, l;

  cin >> n;

  int a[n];

  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> x;

  for (j = 0; j < n; j++) {
    if (a[j] >= x) {
      k++;
    }
  }

  cout << k << endl;

  return 0;
}
