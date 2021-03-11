#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int eq2grau (double a, double b, double c, double &x1, double &x2) {

  int delta = (b * b) - (4 * a * c);

  if (delta < 0) {
    return 0;
  }
  if (delta == 0) {
    x1 = (-b / (2 * a));
    return 1;
  }

  x1 = (-b - sqrt(delta)) / (2 * a);
  x2 = (-b + sqrt(delta)) / (2 * a);
  
  return 2;
}

int main (int argc, char **argv) {

  double a, b, c;
  double x1, x2;
  int z;
  
  cin >> a >> b >> c;

  z = eq2grau(a,b,c,x1,x2);

  if (z == 0) {
    cout << "Nao ha raiz real" << endl;
    return 0;
  }
  else if (z == 1) {
    cout << setprecision (2) << x1 << endl;
    return 0;
  }
  else {
    cout << setprecision (2) << fixed << x1 << " ";
    cout << setprecision (2) << fixed << x2 << endl;
    return 0;
  }
}
