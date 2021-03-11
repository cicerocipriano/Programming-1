#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a;
  
  cout << "Write the size of the array: ";
  cin >> a;
  
  int b = a - 1;
  int c[a];

  cout << "Write the array's values: ";
  for (int i = 0; i < a; i++) {
    cin >> c[i];
  }

  for (int i = 0; i < a / 2; i++) {
    int aux = c[b - i];
    c[b - i] = c[i];
    c[i] = aux;
  }

  cout << "The inverted array looks like this: ";
  for (int i = 0; i < a; i++) {
    cout << c[i] << " ";
  }
  cout << endl;

  return 0;
}
