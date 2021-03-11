#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

  int p, g;

  cin >> p >> g;

  unsigned int n = p, h = 0;

  while (n < 1000000000) {
    n += n * g;
    h++;
  }

  cout << h << endl;

  return 0;
}
