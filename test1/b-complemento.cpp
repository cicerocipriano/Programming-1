#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  long int p[10], b[10];

  for (int i = 0; i < 10; i++) {
    cin >> p[i];
  }

  for (int i = 0; i < 10; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < 10; i++) {
    bool r = false;
    for (int j = 0; j < 10; j++) {
      if (p[i] == b[j]) {
	r = true;
      }
    }
    if (r == false) {
      cout << p[i] << " ";
    }
  }

  for (int i = 0; i < 10; i++) {
    bool r = false;
    for (int j = 0; j < 10; j++) {
      if (b[i] == p[j]) {
	r = true;
      }
    }
    if (r == false) {
      cout << b[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
