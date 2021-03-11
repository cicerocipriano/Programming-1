#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  int a, b , c = 0;

  cin >> a;

  for (b = 1; b < a; b++) {
    if (a % b == 0)
      c += b;
  }

  if (a == c)
    cout << "SIM" << endl;
  else
    cout << "NAO" << endl;

  return 0;
}
