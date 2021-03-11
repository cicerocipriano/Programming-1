#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  double t, tc;
  char e;

  cin >> t1 >> e;

  if(e == 70) {
    tc = (t1 - 32) / 1.8;
    cout << tc << " C\n";
  }
  if(e == 67) {
    tc = ((9 * t1) / 5) + 32;
    cout << tc << " F\n";
  }

  return 0;
}
