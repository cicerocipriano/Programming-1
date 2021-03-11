#include <iostream>
#include <cstring>

using namespace std;

void ex2 () {

  char a[50], b[50];

  cout << "write two words:" << endl;

  cin >> a >> b;

  int n = 0, m = 0, aux = 0;

  for (int i = 0; a[i] != '\0'; i++) {
    n++;
  }
  for (int i = 0; a[i] != '\0'; i++) {
    m++;
  }

  if (n == m) {
    for (int i = 0; i < n; i++) {
      if (a[i] == b[i] || a[i] + 32 == b[i] || a[i] - 32 == b[i]) {
	aux++;
      }
    }
    if (aux == n) {
      cout << "These words are the same." << endl;
    }
    else {
      cout << "These words are different." << endl;
    }
  }
  else {
    cout << "These words are different." << endl;
  }

  return;
}

int main (int argc, char **argv) {

  ex2();

  return 0;
}
