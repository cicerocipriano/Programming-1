#include <iostream>

using namespace std;

void fill_array(int a[], int n) {
  
  cout << "Write the elements of the array:" << endl;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  return;
}

void inv_array (int a[], int n) {
  
  for (int i = 0; i < n / 2; i++) {
    int aux = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = aux;
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

int main (int argc, char **argv) {

  int n;
  
  cout << "Write thre size of the array: ";
  cin >> n;
  
  int a[n];

  fill_array(a,n);

  inv_array(a,n);
  
  cout << "The inverted array looks like this:" << endl;
  
  print_array(a,n);
						   
  return 0;
}
