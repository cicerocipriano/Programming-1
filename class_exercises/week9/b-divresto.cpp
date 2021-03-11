#include <iostream>

using namespace std;

bool divresto (int a, int b, int &y, int &z) {

  y = 0;
  z = 0;
  
  if (b == 0) {
    return false;
  }
  
  y = a / b;
  z = a % b;

  return true;
}

void print_results (int a, int *v1, int *v2) {

  int y, z;
  bool g;

  for (int i = 0; i < a; i++) {
    g = divresto(v1[i],v2[i],y,z);
    if (g) {
      cout << y << " " << z << endl;
    }
    else {
      cout << "indefinido" << endl;
    }
  }

  return;
}

int main (int argc, char **argv) {

  int a;

  cin >> a;

  int *v1 = new int[a], *v2 = new int[a];

  for (int i = 0; i < a; i++) {
    cin >> v1[i] >> v2[i];
  }

  print_results(a,v1,v2);

  delete[] v1;
  delete[] v2;

  return 0;
}
