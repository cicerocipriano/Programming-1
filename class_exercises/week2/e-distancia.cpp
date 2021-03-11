#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (int argc, char **argv) {
  
  double Xum, Yum, Xdois, Ydois;
  double distanciax, distanciay, distancia;

  cin >> Xum;
  cin >> Yum;
  cin >> Xdois;
  cin >> Ydois;

  distanciax = Xdois - Xum;
  distanciay = Ydois - Yum;
  distancia = sqrt((distanciax * distanciax) + (distanciay * distanciay));

  cout << fixed << setprecision(2) << distancia << endl;

  return 0;
}
