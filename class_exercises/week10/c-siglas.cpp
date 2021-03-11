#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  char a[201];

  cin.getline(a,201);

  for (int i = 0; a[i] != '\0'; i++) {
    if (a[i] > 64 && a[i] < 91) {
      cout << a[i];
    }
  }
  cout << endl;

  return 0;
}
