#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char **argv) {
  
  double a, b, c;

  cin >> a;
  cin >> b;

  c = a / b;

  cout << fixed << setprecision(2) << c << endl;

  return 0;
}
