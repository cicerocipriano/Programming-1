#include <iostream>

using namespace std;

bool check_if_ascen (int a[], int size) {

  bool tf = true;
  int aux = a[0];

  for (int i = 1; i < size; i++) {
    if (aux > a[i]) {
      tf = false;
    }
    aux = a[i];
  }

  return tf;
}

int main (int argc, char **argv) {

  unsigned int n;
  bool tf;

  cout << "Write the size of the array: ";
  cin >> n;
  
  int a[n];

  cout << "Write the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  tf = check_if_ascen(a,n);

  if (tf) {
    cout << "The array is in an ascending order." << endl;
  }
  else {
    cout << "The array isn't in an ascending order." << endl;
  }

  return 0;
}
