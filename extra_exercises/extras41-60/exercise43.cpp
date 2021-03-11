#include <iostream>

using namespace std;

void fill_array (int a[], int n) {

  cout << "Write the elements of the array:" << endl;

  for (int i = 0; i < n; i ++) {
    cin >> a[i];
  }

  return;
}

bool check_if_asc (int a[], int n) {

  int aux = a[0];

  for (int i = 1; i < n; i++) {
    if (aux > a[i]) {
      return false;
    }
    aux = a[i];
  }

  return true;
}

int main (int argc, char **argv) {

  int n;
  bool asc;

  cout << "Write the size of the array:" << endl;

  cin >> n;

  int a[n];

  fill_array (a,n);

  asc = check_if_asc(a,n);
  
  if (asc == true) {
    cout << "The array is in an ascending order." << endl;
  }
  else {
    cout << "The array isn't in an asccending order." << endl;
  }

  return 0;
}
