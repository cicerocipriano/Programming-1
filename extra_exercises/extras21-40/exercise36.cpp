#include <iostream>

using namespace std;

void print_ns (int n) {

  if (n > 0) {
    cout << "The integers between 1 and " << n << " are:" << endl;
    for (int i = 1; i <= n; i++) {
      cout << i << " ";
    }
    cout << endl;
  }
  else if (n < 0){
    cout << "The integers between -1 and " << n << " are:" << endl;
    for (int i = -1; i >= n; i--) {
      cout << i << " ";
    }
    cout << endl;
  }

  return;
}

int main (int argc, char **argv) {

  int n;
  bool nz = false;

  while (nz == false) {
    
    cout << "Write an integer different from 0: ";
    cin >> n;
    
    if (n == 0) {
      cout << "The integer must not be 0." << endl;
      continue;
    }

    nz = true;
  }

  print_ns(n);

  return 0;
}
