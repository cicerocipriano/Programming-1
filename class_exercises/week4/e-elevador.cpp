#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  int n, c, s, e, p = 0, x = 1, vf = 0;

  cin >> n >> c;

  while (x <= n) {
    cin >> s >> e;
    p += -s + e;
    
    if (p > c) {
      vf = 1;
    }
    
    x++;    
  }

  if (vf == 0)
    cout << "N" << endl;
  else
    cout << "S" << endl;

  return 0;
}
