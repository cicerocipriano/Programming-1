#include <iostream>

using namespace std;

void fill_matrix (int **m, int nr, int nc) {

  for (int i = 0; i < nr; i++) {
    for (int j = 0; j < nc; j++) {
      cin >> m[i][j];
    }
  }

  return;
}

void transpose_matrix (int **m1, int **m2, int nr, int nc) {

  for (int i = 0; i < nc; i++) {
    for (int j = 0; j < nr; j++) {
      m2[i][j] = m1[j][i];
    }
  }

  return;
}

void print_matrix (int **m, int nr, int nc) {

  for (int i = 0; i < nr; i++) {
    for (int j = 0; j < nc; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

  return;
}

int main (int argc, char **argv) {

  int nr, nc;

  cout << "Write the number of rows and columns of a matrix: ";
  cin >> nr >> nc;

  int **m1, **m2;

  m1 = new int*[nr];
  for (int i = 0; i < nr; i++) {
    m1[i] = new int[nc];
  }

  m2 = new int*[nc];
  for (int i = 0; i < nc; i++) {
    m2[i] = new int[nr];
  }

  cout << "Write the elements of the matrix:" << endl;

  fill_matrix(m1,nr,nc);

  transpose_matrix(m1,m2,nr,nc);

  cout << "The tranposed matrix looks like this:" << endl;

  print_matrix(m2,nc,nr);

  for (int i = 0; i < nr; i++) {
    delete[] m1[i];
  }
  delete[] m1;

  for (int i = 0; i < nc; i++) {
    delete[] m2[i];
  }
  delete[] m2;

  return 0;
}
