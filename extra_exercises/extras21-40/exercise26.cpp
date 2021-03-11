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

  return;
}

void check_repeat (int a[], int n) {

  bool r = false;
  
  cout << "The repeated numbers are: ";
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1]) {
      cout << a[i] << " ";
      r = true;
    }
  }
  if (r == false) {
    cout << "none";
  }
  cout << endl;
  
  return;
}

int main (int agrc, char **argv) {

  int n;

  cout << "Write the array's size: ";
  cin >> n;

  int a[n];

  cout << "Write the array's values : ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  asc_array(a,n);

  check_repeat(a,n);

  return 0;
}
