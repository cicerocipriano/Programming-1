#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char **argv) {

  double a = 0, b = 0, d;
  char c[31];

  cin >> c;

  for (int i = 0; c[i] != '\0'; i++) {
    a++;
  }

  for (int i = 0; c[i] != '\0'; i++) {
    if (c[i] == 65 || c[i] == 69 || c[i] == 73 || c[i] == 79 || c[i] == 85 || c[i] == 97 || c[i] == 101 || c[i] == 105 || c[i] == 111 || c[i] == 117) {
      b++;
    }
  }

  d = (100 * b) / a;

  cout << round(d) << "%" << endl;

  return 0;
}
