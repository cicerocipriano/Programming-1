#include <iostream>

using namespace std;

void fill_matrix (double m[][3], int nr, int nc) {

  cout << "Write the elements of the matrix:" << endl;

  for (int i = 0; i < nr; i++) {
    for (int j = 0; j < nc; j++) {
      cin >> m[i][j];
    }
  }

  return;
}

void sum_row (double m[][3], int nr, int nc, double sr[]) {

  for (int i = 0; i < nr; i++) {
    for (int j = 0; j < nc; j++) {
      sr[i] += m[i][j];
    }
  }

  return;
}

void avr_col (double m[][3], int nr, int nc, double ac[]) {

  for (int i = 0; i < nc; i++) {
    for (int j = 0; j < nr; j++) {
      ac[i] += m[j][i];
    }
  }

  for (int i = 0; i < nc; i++) {
    ac[i] /= nr;
  }

  return;
}

void print_array (double a[], int n) {
  
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return;
}

int main (int argc, char **argv) {

  const int x = 5, y = 3;

  double m[x][y];

  double sr[x] = {0}, ac[y] = {0};

  fill_matrix(m,x,y);

  sum_row(m,x,y,sr);

  avr_col(m,x,y,ac);

  cout << "The total sum of each row is:" << endl;
  print_array(sr,x);

  cout << "The average of each column is:" << endl;
  print_array(ac,y);

  return 0;
}
