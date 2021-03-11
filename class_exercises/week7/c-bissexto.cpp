#include <iostream>

using namespace std;

bool bissexto (int n) {

  if (n % 100 == 0) {
    if (n % 400 == 0) {
      return true;
    }
    else {
      return false;
    }
  }
  else if (n % 4 == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main (int argc, char **argv) {

  int n;
  bool b;

  while (n >= 0) {
    cin >> n;
    b = bissexto(n);
    if (b) {
      cout << "bissexto" << endl;
    }
    else {
      cout << "nao bissexto" << endl;
    }
  }

  return 0; 
}
