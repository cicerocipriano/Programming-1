#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  unsigned int n = 1;
  char c;

  while (n != 0 && c != '.') {
    cin >> n >> c;
    if (n == 0 && c != '.') {
      break;
    }
    for (int i = 0; i < n; i++) {
      cout << c;
    }
  }
  cout << "." << endl;

  return 0;
}
