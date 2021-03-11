#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  long int c, d1, d2, d3;

  cin >> c >> d1 >> d2 >> d3;

  if (c % d1 == 0) {
    cout << c / d1 << " doces de " << d1 << " reais" << endl;
    return 0;
  }
  else if (c % d2 == 0) {
    cout << c / d2 << " doces de " << d2 << " reais" << endl;
    return 0;
  }
  else if (c % d3 == 0) {
    cout << c / d3 << " doces de " << d3 << " reais" << endl;
    return 0;
  }
  else {
    cout << "Capivaristo ficara sem doce" << endl;
    return 0;
  }
}
