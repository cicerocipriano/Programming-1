#include <iostream>

using namespace std;

void check_repeat (int a[], int n) {

  bool r = false;

  cout << "The repeated numbers are: ";
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
	r = true;
	cout << a[i] << " ";
      }
    }
  }

  if (r == false) {
    cout << "none";
  }
  cout << endl;

  return;
}

int main (int argc, char **argv) {

  int n;

  cout << "Write the array's size: ";
  cin >> n;

  int a[n];
  
  cout << "Write the array's values: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  check_repeat(a,n);

  return 0;
}
