#include <iostream>

using namespace std;

int main (int argc,char **argv) {
  
  int a, b;
  int c, d;

  cin >> a;
  cin >> b;

  c = a / b;
  d = a % b;

  cout << c << " " << d << endl;
  
  return 0;
}
