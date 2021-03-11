#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char **argc) {
  
  double d, p, t;
  double j1, j2, j3, j4, j5;
  double s;
  double min, max;
    
  cin >> d;
  cin >> j1 >> j2 >> j3 >> j4 >> j5;

  p = 60 + (d - 120) * 1.8;

  min = j1;
  if (j2 < min)
    min = j2;
  if (j3 < min)
    min = j3;
  if (j4 < min)
    min = j4;
  if (j5 < min)
    min = j5;
  
  max = j1;
  if (j2 > max)
    max = j2;
  if (j3 > max)
    max = j3;
  if (j4 > max)
    max = j4;
  if (j5 > max)
    max = j5;

  s = j1 + j2 + j3 + j4 + j5 - min - max;

  t = p + s;
  cout << fixed << setprecision(1) << t << endl;
  
  return 0;
}
