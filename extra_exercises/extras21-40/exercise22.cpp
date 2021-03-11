#include <iostream>

using namespace std;

void asc_array (int a[], int n) {
  
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (a[j] > a[j + 1]) {
	int aux = a[j];
	a[j] = a[j + 1];
	a[j + 1] = aux;
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return;
}

int main (int argc, char **argv) {

  int n;
  
  cin >> n;
  
  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  asc_array(a,n);

  return 0;
}
