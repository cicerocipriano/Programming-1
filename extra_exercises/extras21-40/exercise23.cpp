#include <iostream>

using namespace std;

void most_common_number (int a, int b, int c) {

  if (a == b && b == c) {
    cout << "The three numbers appear the same number of times." << endl;
  }
  else if (a == b && b > c) {
    cout << "The numbers that appeared the most are 1 and 2." << endl;
  }
  else if (b == c && c > a) {
    cout << "The numbers that appeared the most are 2 and 3." << endl;
  }
  else if (a == c && a > b) {
    cout << "The numbers that appeared the most are 1 and 3." << endl;
  }
  else if (a > b && a > c) {
    cout << "The number that appeared the most is 1." << endl;
  }
  else if (b > a && b > c) {
    cout << "The number that appeared the most is 2." << endl;
  }
  else {
    cout << "The number that appeared the most is 3." << endl;
  }

  return;
}

void check_number_freq (int a[], int n) {

  int x = 0, y = 0, z = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      x++;
    }
    else if (a[i] == 2) {
      y++;
    }
    else {
      z++;
    }
  }

  most_common_number(x,y,z);

  return;
}

int main (int argc, char **argv) {

  int n;

  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  check_number_freq(a,n);

  return 0;
}
