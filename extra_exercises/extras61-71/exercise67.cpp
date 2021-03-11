#include <iostream>

using namespace std;

void fill_matrix (char **m, int nr, int nc) {
  
  char aux[51];
  
  for (int i = 0; i < nr; i++) {
    cin >> aux;
    int j;
    for (j = 0; aux[j] != '\0'; j++) {
      m[i][j] = aux[j];
    }
    m[i][j] = '\0';
  }
  
  return;
}

void order_matrix (char **m, int nr,int nc, bool id) {
  
  char *aux;
  aux = new char[nc];
  
  for (int i = 0; i < nr - 1; i++) {
    for (int j = 0; j < nr - 1; j++) {
      int pos = 0;
      while (m[j][pos] == m[j + 1][pos]) {
	pos++;
      }
      if (id) {
	if (m[j][pos] > m[j + 1][pos]) {
	  int k;
	  for (k = 0; m[j][k] != '\0'; k++) {
	    aux[k] = m[j][k];
	  }
	  aux[k] = '\0';
	  int l;
	  for (l = 0; m[j + 1][l] != '\0'; l++) {
	    m[j][l] = m[j + 1][l];
	  }
	  m[j][l] = '\0';
	  int n;
	  for (n = 0; aux[n] != '\0'; n++) {
	    m[j + 1][n] = aux[n];
	  }
	  m[j + 1][n] = '\0';
	}
      }
      else {
	if (m[j][pos] < m[j + 1][pos]) {
	  int k;
	  for (k = 0; m[j][k] != '\0'; k++) {
	    aux[k] = m[j][k];
	  }
	  aux[k] = '\0';
	  int l;
	  for (l = 0; m[j + 1][l] != '\0'; l++) {
	    m[j][l] = m[j + 1][l];
	  }
	  m[j][l] = '\0';
	  int n;
	  for (n = 0; aux[n] != '\0'; n++) {
	    m[j + 1][n] = aux[n];
	  }
	  m[j + 1][n] = '\0';
	}
      }
    }
  }
  
  delete[] aux;
  
  return;
}

void print_matrix (char **m, int nr, int nc) {
  
  for (int i = 0; i < nr; i++) {
    cout << endl;
    for (int j = 0; m[i][j] != '\0'; j++) {
      cout << m[i][j];
    }
  }
  cout << endl;
  
  return;
}

int main (int argc, char **argv) {
  
  bool id;
   
  if (argv[1][0] == 'i') {
    id = true;
  }
  if (argv[1][0] == 'd') {
    id = false;
  }
  
  int n;
  
  cout << "Write the number of names: ";
  cin >> n;
  
  char **m;
  m = new char*[n];
  for (int i = 0; i < n; i++) {
    m[i] = new char[51];
  }
  
  fill_matrix(m,n,51);
  
  order_matrix(m,n,51,id);
  
  print_matrix(m,n,51);
  
  for (int i = 0; i < *n; i++) {
    delete[] m[i];
  }
  delete[] m;
  
  return 0;
}
