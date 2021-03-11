#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, i, l;
  int a, b, c = 0;

  cin >> n >> i >> l;

  int N[n] = {0};

  for (a = 0; a < n; a++) {
    cin >> N[a];
  }

  for (b = 0; b < n; b++) {
    if (N[b] >= i) {
      c++;
    }
  }

  if (c > l) {
    cout << "Nao aceito." << endl;
    return 0;
  }
  else {
    cout << "Aceito." << endl;
    return 0;
  }
}
