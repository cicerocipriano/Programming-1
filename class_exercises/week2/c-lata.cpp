#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char **argv) {

  double r, a, v;
  double pi = 3.1415;

  cin >> r >> a;

  volume = pi * (r * r) * a;

  cout << fixed << setprecision(2) << volume << endl;

  return 0;
}
