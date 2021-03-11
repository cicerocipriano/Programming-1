#include <iostream>

using namespace std;

void compare_array (int a[], int b[], int n) {

  int ap;
  
  for (int i = 0; i < n; i++) {
    ap = 0;
    for (int j = 0; j < n; j++) {
      if (a[i] == b[j]) {
	ap++;
      }
    }
    if (ap == 0) {
      cout << a[i] << " ";
    }
  }

  cout << endl;
  
  return;
}

int main (int argc, char **argv) {

  int n;

  cout << "Write the array's size: ";
  cin >> n;

  int a[n], b[n];

  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }

  cout << "Write the array's elements: ";
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  compare_array(a,b,n);

  return 0;
}
