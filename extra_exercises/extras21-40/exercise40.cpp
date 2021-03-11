#include <iostream>

using namespace std;

void check_number (unsigned long long int n) {

  unsigned long long int sd = 1;

  for (unsigned long long int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      sd += i;
    }
  }

  if (sd == n) {
    cout << n << " is a perfect number" << endl;
  }
  else if (sd > n) {
    cout << n << " is an abundant number" << endl;
  }
  else {
    cout << n << " is an deficient number" << endl;
  }

  return;
}

int main (int argc, char **argv) {

  unsigned long long int n = 1;

  cout << "Write a sequence of naturals: ";
  while (n != 0) {
    cin >> n;
    if (n == 0) {
      break;
      return 0;
    }
    check_number(n);
  }
}
