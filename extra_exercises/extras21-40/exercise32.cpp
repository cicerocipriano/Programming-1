#include <iostream>

using namespace std;

double calc_delta (double a, double b, double c) {

  double delta;

  delta = (b * b) - (4 * a * c);

  return delta;
}

int main (int argc, char **argv) {

  double a, b, c, delta;

  cout << "Write the three coefficients of an quadratic equation: ";
  cin >> a >> b >> c;

  delta = calc_delta (a,b,c);

  cout << "The delta of this equation is: " << delta << endl;

  return 0;
}
