#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int e1, e2;

  cin >> p1 >> p2;

  if(p1 % p2 == 0)
    cout << "1" << endl;
  else if(p2 % p1 == 0)
    cout << "1" << endl;
  else if(p1 % p2 != 0)
    cout << "0" << endl;
  else if(p2 % p2 != 0)
    cout << "0" << endl;
  else
    cout << "0" << endl;

  return 0;
}
