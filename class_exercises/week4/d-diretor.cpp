#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  char a = 0;
  int c = 0, d = 0, e = 0, r = 0, t = 0;
  double x = 0, y;
  
  while (a != 'X') {
    cin >> a;
    if (a == 'C') {
      c++;
      x++;
    }
    if (a == 'D') {
      d++;
      x++;
    }
    if (a == 'E') {
      e++;
      x++;
    }
    if (a == 'R') {
      r++;
      x++;
    }
    if (a == 'T') {
      t++;
      x++;
    }
    y = x / 2;
  }

  if (c > y || d > y || e > y || r > y || t > y)
    cout << "SIM" << endl;    
  else
    cout << "NAO" << endl;
  return 0;
}
