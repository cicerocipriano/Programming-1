#include <iostream>;

using namespace std;

int main (int argc, char **argv) {

  int a, b;
  
  cin >> a >> b;

  if (a == 0 && b == 0) {
    cout << "ORIGEM" << endl;
    return 0;
  }
  else if (b == 0) {
    cout << "EIXO X" << endl;
    return 0;
  }
  else if (a == 0) {
    cout << "EIXO Y" << endl;
    return 0;
  }
  else if (a > 0 && b > 0) {
    cout << "QUADRANTE 1" << endl;
    return 0;
  }
  else if (a < 0 && b > 0) {
    cout << "QUADRANTE 2" << endl;
    return 0;
  }
  else if (a < 0 && b < 0) {
    cout << "QUADRANTE 3" << endl;
    return 0;
  }
  else if (a > 0 && b < 0) {
    cout << "QUADRANTE 4" << endl;
    return 0;
  }
}
