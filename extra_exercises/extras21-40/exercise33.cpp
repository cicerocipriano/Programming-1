#include <iostream>

using namespace std;

unsigned long long int calc_factorial (unsigned long long int n) {

  unsigned long long int fac = 1;

  for (int i = n; i > 1; i--) {
    fac *= i;
  }

  return fac;
}

int main (int argc, char **argv) {

  unsigned long long int n, fac;

  cout << "Write a natural number: ";
  cin >> n;

  fac = calc_factorial(n);

  cout << "The factorial of " << n << " is: " << fac << endl;

  return 0;
}
