#include <iostream>

using namespace std;

int highest (int *a, int pos, int n) {

  int aux = 0;

  for (int i = 0; i < n; i++) {
    if (a[pos] >= a[i]) {
      aux++;
    }
  }
  if (aux == n) {
    return a[pos];
  }
  else {
    highest(a,pos+1,n);
  } 
}

int main (int argc, char **argv) {

  int n, h;

  cout << "Write the size of the array: ";
  cin >> n;

  int *a = new int[n];

  cout << "Write the integers of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  h = highest(a,0,n);

  cout << "The highest value in the array is: " << h << endl;

  delete[] a;

  return 0;
}
