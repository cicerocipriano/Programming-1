#include <iostream>

using namespace std;

void check_digits (unsigned long long int n) {

  unsigned long long int div = 1000000000000000000;
  unsigned long long int aux = 0, aux2 = n, ed = 0;

  while (n % div == n) {
    div = div / 10;
  }

  while (div != 0) {
  aux = n / div;
  if (aux % 2 == 0) {
    ed++;
  }
  n = n - aux * div;
  div = div / 10;
  }

  if (ed == 1) {
    cout << "The number " << aux2 << " contain 1 even digit." << endl;
  }
  else {
    cout << "The number " << aux2 << " contains " << ed << " even digits." << endl;
  }

  return;
}

int main (int argc, char **argv) {

  unsigned long long int n = 1;

  cout << "Write the naturals: ";
  while (n != 0) {
    cin >> n;
    if (n == 0) {
      break;
    }
    check_digits(n);
  }

  return 0;
}
