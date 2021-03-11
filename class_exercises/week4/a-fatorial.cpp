#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  unsigned long int n, c;

  cin >> n;

  c = n;
  
  if (n > 1) {
    while (c > 1) {
      n *= (c - 1);
      c--;
    }
    cout << n << endl;
    return 0;
  }
  else {
    cout << "1" << endl;
    return 0;
  }
}
