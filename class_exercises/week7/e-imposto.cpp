#include <iostream>
#include <iomanip>

using namespace std;

double imposto (double v) {

  double i;

  if (v < 22847.77) {
    return 0;
  }
  else if (v > 22847.76 && v < 33919.81) {
    i = (v * 0.075) - 1713.58;
    return i;
  }
  else if (v > 33919.8 && v < 45012.61) {
    i = (v * 0.15) - 4257.57;
    return i;
  }
  else if (v > 42012.6 && v < 55976.17) {
    i = (v * 0.225) - 7633.51;
    return i;
  }
  else {
    i = (v * 0.275) - 10432.32;
  }

  return i;
}

int main (int argc, char **argv) {

  double n = 1;

  while (n != 0) {
    cin >> n;
    if (n == 0) {
      continue;
    }
    cout << "R$ " << setprecision(2) << fixed << imposto(n) << endl;
  }

  return 0;
}
