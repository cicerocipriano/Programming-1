#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int m, n, p, q;

  cout << "Write the dimensions of the first matrix: ";
  cin >> m >> n;

  int a[m][n];

  cout << "Write the dimensions of the second matrix: ";
  cin >> p >> q;

  int b[p][q];

  if (n != p) {
    cout << "It is impossible to multiply these two matrices." << endl;
    return 0;
  }

  int c[m][q];
  
  cout << "Write the values of the first matrix: ";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  cout << "Write the values of the second matrix: ";
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      cin >> b[i][j];
    }
  }
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      c[i][j] = 0;
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      for (int k = 0; k < n; k++) {
	c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  cout << "The product of the two matrices is: " << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < q; j++) {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
