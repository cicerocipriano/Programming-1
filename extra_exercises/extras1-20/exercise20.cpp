#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  char a[101];
  int b = -1;

  cin.getline(a,100,'.');

  for (int i = 0; a[i] != '\x0'; i++) {
    b++;
  }
  
  for (int i = 0; i <= b / 2; i++) {
    char aux = a[b - i];
    a[b - i] = a[i];
    a[i] = aux;
  }

  for (int i = 0; a[i] != '\x0'; i++) {
    cout << a[i];
  }
  cout << endl;

  return 0;
}
