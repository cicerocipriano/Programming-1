#include <iostream>

using namespace std;

void fill_matrix (int **m, int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> m[i][j];
    }
  }

  return;
}

void sum_matrix (int **m1, int **m2, int **m3, int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      m3[i][j] = m1[i][j] + m2[i][j];
    }
  }

  return;
}

void print_matrix (int **m, int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}

int main (int argc, char **argv) {

  int n;

  cout << "Write one dimension of the square matrices: ";
  cin >> n;
  
  int **m1, **m2, **m3;

  m1 = new int*[n];
  for (int i = 0; i < n; i++) {
    m1[i] = new int[n];
  }

  m2 = new int*[n];
  for (int i = 0 ; i < n; i++) {
    m2[i] = new int[n];
  }

  m3 = new int*[n];
  for (int i = 0; i < n; i++) {
    m3[i] = new int[n];
  }

  cout << "Write The elements of the first matrix:" << endl;
  fill_matrix(m1,n);

  cout << "Write the elements of the second matrix:" << endl;
  fill_matrix(m2,n);

  sum_matrix(m1,m2,m3,n);

  cout << "The sum of the two matrices is:" << endl;

  print_matrix(m3,n);

  for (int i = 0; i < n; i++) {
    delete[] m1[i];
    delete[] m2[i];
    delete[] m3[i];
  }

  delete[] m1;
  delete[] m2;
  delete[] m3;
  
  return 0;
}
