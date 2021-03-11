#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char **argv) {

  double x[2][10] = {{2.7,1.5,5.5,3.5,3.1,7.6,1.5,6.9,8.6,7.66},{10.5,11.8,20.0,15.2,14.5,14.5,3.5,8.5,2.0,3.5}};
  double y[10] = {0,0,0,0,0,1,1,1,1,1};
  double w[2] = {0.5, 0.5};
  double z = 0, sigma = 0, erro = 0;
  double alfa = 0.1;

  for (int epoca = 0; epoca < 1000; epoca++) {
    for (int exemplo = 0; exemplo < 10; exemplo++) {
      z = (x[0][exemplo] * w[0]) + (x[1][exemplo] * w[1]);
      sigma = 1 / (1 + exp (-z));
      erro = y[exemplo] - sigma;
      w[0] = w[0]  + (alfa * erro * sigma * (1 - sigma) * x[0][exemplo]);
      w[1] = w[1]  + (alfa * erro * sigma * (1 - sigma) * x[1][exemplo]);
    }
  }

  double a, b;
  cin >> a >> b;

  z = (a * w[0]) + (b * w[1]);
  sigma = 1 / (1 + exp (-z));

  if (sigma > 0.5) {
    cout << "1" << endl;
    return 0;
  }
  else {
    cout << "0" << endl;
    return 0;
  }  
}
