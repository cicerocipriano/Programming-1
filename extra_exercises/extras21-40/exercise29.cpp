#include <iostream>

using namespace std;

int main (int argc,char **argv) {
  
  int n;

  cout << "Write the size of the square matrix: ";
  cin >> n;

  double m[n][n];

  double ma = 0, eb = 0, md = 0, ps = 1;

  cout << "Write the elements of the matrix: ";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> m[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ma += m[i][j];
    }
  }
  ma = ma / (n * n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (m[i][j] < ma) {
	eb++;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    md += m[i][i];
  }

  int i = 0, j = n - 1;
  while (i < n && j > -1) {
    ps *= m[i][j];
    i++;
    j--;
  }

  cout << "The matrix average is: " << ma << endl << "The number of elements below average is: " << eb << endl;
  cout << "The sum of the elements of the main diagonal is: " << md << endl;
  cout << "The product of the elements of the secondary diagonal is: " << ps << endl;
  
  return 0;
}
