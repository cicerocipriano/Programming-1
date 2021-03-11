#include <iostream>
#include <cstdlib>

using namespace std;

void initialize_matrix (int ** m, int nr, int nc) {

  for (int i = 0; i < nr; i++) {
    for (int j = 0; j < nc; j++) {
      m[i][j] = 0;
    }
  }

  return;
}

void fill_matrix (int ** m, int nr, int nc) {

  for (int i = 0; i < nr; i++) {
    for (int j = 0; j < nc; j++) {
      cin >> m[i][j];
    }
  }

  return;
}

void multiply_matrices (int ** m1, int ** m2, int ** m3, int r1, int c2, int c1) {

  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      for (int k = 0; k < c1; k++) {
	m3[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }

  return;
}

void print_matrix (int ** m, int nr, int nc) {

  for (int i = 0; i < nr; i++) {
    for (int j = 0; j < nc; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

  return;
}

int main (int argc, char **argv) {

  int m, n, p, q;

  cout << "Write the dimensions of the first matrix: ";
  cin >> m >> n;

  cout << "Write the dimensions of the second matrix: ";
  cin >> p >> q;

  if (n != p) {
    cout << "These matrices can't be multiplied." << endl;
    return 0;
  }

  int ** a;
  int ** b;
  int ** c;

  a = (int **) malloc(m*sizeof(int**));
  for (int i = 0; i < m; i++) {
    a[i] = (int *) malloc(n*sizeof(int*));
  }

  b = (int **) malloc(p*sizeof(int**));
  for (int i = 0; i < p; i++) {
    b[i] = (int *) malloc(q*sizeof(int*));
  }

  c = (int **) malloc(m*sizeof(int**));
  for (int i = 0; i < m; i++) {
    c[i] = (int *) malloc(q*sizeof(int*));
  }

  initialize_matrix(c,m,q);

  cout << "Write the elements of the first matrix:" << endl;
  fill_matrix(a,m,n);

  cout << "Write the elements of the second matrix:" << endl;
  fill_matrix(b,p,q);

  multiply_matrices (a,b,c,m,q,n);

  cout << "The product of the two matrices is:" << endl;

  print_matrix(c,m,q);

  for (int i = 0; i < m; i++) {
    free(a[i]);
  }
  free(a);

  for (int i = 0; i < p; i++) {
    free(b[i]);
  }
  free(b);

  for (int i = 0; i < m; i++) {
    free(c[i]);
  }
  free(c);

  return 0;
}
