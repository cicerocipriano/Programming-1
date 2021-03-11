#include <iostream>

using namespace std;

void fill_array (int a[], int n) {

  cout << "Write the elements of the array:" << endl;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  return;
}

void switch_values (int &x, int &y) {

  int aux = x;
  x = y;
  y = aux;

  return;
}

void ascend_array (int a[], int n) {

  for (int i = 0; i < n - 1; i++) {
    bool c = false;
    for (int j = 0; j < n - 1; j++) {
      if (a[j] > a[j + 1]) {
	switch_values(a[j],a[j + 1]);
	c = true;
      }
    }
    if (c == false) {
      return;
    }
  }

  return;
}

void print_array (int a[], int n) {

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return;
}

int main () {

  int n;

  cout << "write the size of the array: ";

  cin >> n;

  int a[n];

  fill_array(a,n);

  ascend_array(a,n);

  cout << "The array in an ascending order looks like this:" << endl;

  print_array(a,n);

  return 0;
}
