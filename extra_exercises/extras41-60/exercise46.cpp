#include <iostream>
#include <cstdlib>

using namespace std;

void fill_matrix (double ** m, int n) {
  
  cout << "Write The elements of the matrix:" << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> m[i][j];
    }
  }

  return;
}

void sum_main_diagonal (double ** m, int n) {

  double sum = 0;
  
  for (int i = 0; i < n; i++) {
    sum += m[i][i];
  }

  cout << "The sum of the elements of the main diagonal is: " << sum << endl;
  
  return;
}

void product_secondary_diagonal (double ** m, int n) {

  int sum = 1;

  int i = 0, j = n - 1;

  while(i < n && j >= 0) {
    sum *= m[i][j];
    i++;
    j--;
  }

  cout << "The sum of the products of the secondary diagonal is: " << sum << endl;

  return;
}

void elements_below_average (double ** m, int n, double avg) {

  int ba = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (m[i][j] < avg) {
	ba++;
      }
    }
  }

  cout << "The numbe of elements below average is: " << ba << endl;
}

void avrg_and_below_avrg (double ** m, int n) {

  double a = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a += m[i][j];
    }
  }

  a /= (n * n);

  cout << "The average of the elements in the matrix is: " << a << endl;

  elements_below_average(m,n,a);

  return;
}

int main (int argc, char **argv) {

  int n;
  
  cout << "Write the size of one dimension of the square matrix: ";
  cin >> n;

  double **m;

  m = (double **) malloc(n*sizeof(double**));
  for (int i = 0; i < n; i++) {
    m[i] = (double *) malloc(n*sizeof(double*));
  }

  fill_matrix(m,n);

  sum_main_diagonal(m,n);

  product_secondary_diagonal(m,n);

  avrg_and_below_avrg(m,n);

  for (int i = 0; i < n; i++) {
    free(m[i]);
  }
  free(m);
  
  return 0;
}
