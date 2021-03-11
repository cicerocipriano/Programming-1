#include <iostream>

using namespace std;

bool eh_primo (int n) {

  int b = n - 2;
  int c[b], d, e, f = 1, g = 0;
  
  if (n < 2) {
    f = 0;
    return f;
  }
  
  for (d = 0; d < b; d++) {
    c[d] = d + 2;
  }

  for (e = 0; e < b; e++) {
    if (n % c[e] == 0) {
      g = 1;
      break;
    }
  }
  if (n > 2) {
    if (g == 0) {
      f = 1;
      return f;
    }
    else {
      f = 0;
      return f;
    }
  }

  return f;  
}

int main (int argc, char **argv) {
  
  int a, b;
 
  cin >> a >> b;
 
  cout << "Primos entre " << a << " e " << b << ":";
  for(int i = a; i <= b; i++)
    if (eh_primo(i))
      cout << " " << i;
  cout << endl;
  
  return 0;
}
