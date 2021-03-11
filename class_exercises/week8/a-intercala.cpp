#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, v;
  cin >> n;

  v = n * 2;
  int a[v];
  
  for (int i = 0; i < v; i += 2) {
    cin >> a[i];
  }
  for (int j = 1; j < v; j += 2) {
    cin >> a[j];
  }

  for (int k = 0; k < v; k++) {
    cout << a[k] << " ";
  }
  cout << endl;

  return 0;
}
