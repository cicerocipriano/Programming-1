#include <iostream>

using namespace std;

void check_sum (int a[], int n, int z) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] == z) {
	cout << a[i] << " and " << a[j] << "  ";
      }
    }
  }

  return;
}

int main (int argc, char **argv) {

  int n, z;

  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> z;

  check_sum (a,n,z);

  return 0;
}
