#include <iomanip>
#include <iostream>

using namespace std;

void convhoras(int seg, int &h, int &m, int &s) {

  int seg2;

  h = 0;
  m = 0;
  s = 0;

  h = seg / 3600;
  seg2 = seg - (h * 3600);
  m = seg2 / 60;
  s = seg2 - (m * 60);
}

int main (int argc, char **argv) {

  int a, b;
  int h, m, s;
  
  cin >> a;

  convhoras(a,h,m,s);

  cout << setfill ('0') << setw (2) << h << ":";
  cout << setfill ('0') << setw (2) << m << ":";
  cout << setfill ('0') << setw (2) << s << endl;
	    
  return 0;
}
