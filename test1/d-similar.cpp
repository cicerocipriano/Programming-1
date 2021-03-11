#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  long int n;

  cin >> n;

  long int p1[n], p2[n], p3[n];
  long int i12 = 0, i23 = 0, i13 = 0;

  for (int i = 0; i < n; i++) {
    cin >> p1[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> p2[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> p3[i];
  }

  for (int i = 0; i < n; i++) {
    i12 += p1[i] * p2[i];
    i23 += p2[i] * p3[i];
    i13 += p1[i] * p3[i];
  }
 
  if (i12 > i23 && i12 > i13) {
    cout << "1 2" << endl;
    return 0;
  }
  else if (i23 > i12 && i23 > i13) {
    cout << "2 3" << endl;
    return 0;
  }
  else if (i13 > i12 && i13 > i23) {
    cout << "1 3" << endl;
    return 0;
  }
  else {
    cout << "empate" << endl;
    return 0;
  }
}
