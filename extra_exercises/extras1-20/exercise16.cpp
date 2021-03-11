#include <iostream>

using namespace std;

double cal_age_avrg (double a[]) {

  double b = 0;

  for (int i = 0; i < 10; i++) {
    b += a[i];
  }

  b = b / 10;

  return b;
}

double cal_f_hei_avrg (double a[], char b[]) {
  
  double c = 0, d = 0, e;
  
  for (int i = 0; i < 10; i++) {
    if (b[i] == 102) {
      c += a[i];
      d++;
    }
  }
  
  e = c / d;
  
  return e;
}

double cal_m_hei_avrg (double a[], char b[]) {
  
  double c = 0, d = 0, e;
  
  for (int i = 0; i < 10; i++) {
    if (b[i] == 109) {
      c += a[i];
      d++;
    }
  }
  
  e = c / d;
  
  return e;
}

int main (int argc, char **argv) {

  double a[10], b[10];
  char c[10];
  double d = 0, e = 0, f = 0;

  cout << "Write the height (in centimeters), genre ('m' or 'f') and age of the ten athletes: ";
  for (int i = 0; i < 10; i++) {
    cin >> a[i] >> c[i] >> b[i];
  }

  d = cal_age_avrg(b);
  e = cal_f_hei_avrg(a,c);
  f = cal_m_hei_avrg(a,c);

  cout << "The age average is: " << d << endl << "The female height average is: " << e << endl << "The male height average is: " << f << endl;

  return 0;
}
