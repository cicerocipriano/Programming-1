#include <iostream>

using namespace std;

long long int fatorial (int x) {
  long long int fat = 1;

  for (int i = 2; i <= x; i++)
    fat *= i;

  return fat;
}

int main (int argc, char **argv) {

  long long int c, d, e, f, g;
  int n, k;

  cin >> n >> k;

  f = n - k;
  d = fatorial(n);
  e = fatorial(k);
  g = fatorial(f);

  c = d / (e * g);

  cout << c << endl;

  return 0;
}
