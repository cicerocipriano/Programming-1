#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a, b, c = 0, d = 0;

  cin >> a;

  int v[a], w[a];

  for (int i = 0; i < a; i++) {
    cin >> v[a];
  }

  cin >> b;

  for (int l = 0; l < a; l++) {
    w[l] = v[l];
  }
    
  for (int j = 0; j < a; j++) {
    for (int k = 0; k < a; k++) {
      d = v[j] + w[k];
      if (j != k && d == b) {
	c = 1;
      }
    }
  }
  
  if (c > 0) {
    cout << "SIM" << endl;
    return 0;
  }
  else {
    cout << "NAO" << endl;
    return 0;
  }
}
