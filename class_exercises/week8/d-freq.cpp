#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a, b, c;

  cin >> a >> b;

  int m[a][b];
  
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cin >> m[i][j];
    }
  }

  cin >> c;

  for (int k = 0; k < a; k++) {
    int d = 0;
    for (int l = 0; l < b; l++){
      if (m[k][l] == c) {
	d++;
      }
    }
    cout << d << endl;
  }

  return 0;
}
