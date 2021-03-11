#include <iostream>

using namespace std;

long long int calc_pwr (long long int x, long long int y) {

  long long int pwr = 1;

  for (long long int i = 1; i <= y; i++) {
    pwr *= x;
  }

  return pwr;
}

int main (int argc, char **argv) {

  long long int x, y, pwr;

  cout << "Write the values of x and y: ";
  cin >> x >> y;

  pwr = calc_pwr(x,y);

  cout << x << " to the power of " << y << " is: " << pwr << endl;

  return 0;
}
