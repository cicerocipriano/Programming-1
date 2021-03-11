#include <iostream>

using namespace std;

void fill_array (int a[], int n) {

  cout << "Write the elements of the array: ";

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  return;
}

int add_array (int a[], int n) {

  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum;
}

int high_ele (int a[], int n) {

  int h = a[0];

  for (int i = 1; i < n; i++) {
    if (h < a[i]) {
      h = a[i];
    }
  }

  return h;
}

int low_ele (int a[], int n) {

  int l = a[0];

  for (int i = 1; i < n; i++) {
    if (l > a[i]) {
      l = a[i];
    }
  }

  return l;
}

int high_pos (int a[], int n) {

  int h = high_ele(a,n);

  int pos;

  for (pos = 0; pos < n; pos++) {
    if (a[pos] == h) {
      break;
    }
  }

  return pos;
}

int main (int argc, char **argv) {

  int n, s, h, l, p;

  cout << "Write the size of the array: ";
  cin >> n;

  int a[n];
  
  fill_array(a,n);
  
  s = add_array(a,n);
  h = high_ele(a,n);
  l = low_ele(a,n);
  p = high_pos(a,n);

  cout << "The sum of the elements in the array is: " << s << endl;
  cout << "The element with the highest value in the array is: " << h << endl;
  cout << "The element with the lowest value in the array is: " << l << endl;
  cout << "The position of the first element with the highest value is: a[" << p << "]" << endl;

  return 0;
}
