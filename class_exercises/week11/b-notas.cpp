#include <iostream>

using namespace std;

struct aluno {
  int mat, nota;
};

void ordenar (aluno *a, int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j].mat > a[j + 1].mat) {
        aluno aux = a[j];
        a[j] = a[j + 1];
        a[j + 1] = aux;
      }
    }
  }

  return;
}

int main (int argc, char **argv) {

  int n;
  cin >> n;
  aluno *a;
  a = new aluno[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i].mat >> a[i].nota;
  }

  ordenar(a,n);

  for (int i = 0; i < n; i++) {
    cout << a[i].mat << " " << a[i].nota << endl;
  }

  delete[] a;

  return 0;
}
