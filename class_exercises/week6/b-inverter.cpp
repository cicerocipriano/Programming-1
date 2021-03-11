#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, i, j;

  cin >> n;

  int a[n];

  for (i = n - 1; i >= 0; i--) {
    cin >> a[i];
  }

  for (j = 0; j < n - 1; j++) {
    cout << a[j] << " ";
  }

  cout << a[n - 1] << endl;

  return 0;
}
