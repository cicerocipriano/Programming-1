#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n;
  cin >> n;

  int v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int d = 1;

  for (int i = 1; i < n; i++) {
    int j = 0;
    for (j = 0; j < i; j++) {
      if (v[i] == v[j]) {
	break;
      }
    }
    if (i == j) {
      d++;
    }
  }

  cout << d << endl;
  
  return 0;
}
