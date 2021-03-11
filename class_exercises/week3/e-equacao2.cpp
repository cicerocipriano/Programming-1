#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (int argc, char **argv) {
  
  double a, b, c;
  double x1, x2;
  double delta;
  
  cin >> a >> b >> c;

  delta = (b * b) - (4 * a * c);

  if(delta >= 0) {
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);

    if(x1 != x2) {
      cout << fixed << setprecision(2) << x1 << "  " << x2 << endl;
      return 0;
    }
    else {
      cout << fixed << setprecision(2) << x1 << endl;
      return 0;
    }
  }
  else {
    cout << "Nao ha raiz real" << endl;
    return 0;
  }
}
