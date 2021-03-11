#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int d, f;

  cin >> d >> f;

  int m[d][f];

  for (int i = 0; i < d; i++) {
    for (int j = 0; j < f;j++) {
      cin >> m[i][j];
    }
  }

  int mi[f][d];

  for (int k = 0; k < f; k++) {
    for (int l = 0; l < d; l++) {
      mi[k][l] = m[l][k];
    }
  }

  for (int m = 0; m < f; m++) {
    for (int n = 0; n < d; n++){
      if (n < d - 1) {
	cout << mi[m][n] << " ";
      }
      else
	cout << mi[m][n] << endl;
    }
  }

  return 0;
}
