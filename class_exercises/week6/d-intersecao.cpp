#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int n, m;

  cin >> n >> m;

  int a[n], b[m], c[n];
  int i, j, k, l;
  
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  for (j = 0; j < m; j++) {
    cin >> b[j];
  }

  cout << "{";
  
  for (k = 0; k < n; k++) {
    for (l = 0; l < m; l++) {
      if (a[k] == b[l]) {
	cout << a[k] << " ";
      }
    }
  }

  cout << "}" << endl;

  return 0;
}
