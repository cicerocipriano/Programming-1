#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  int a = 0, b = 0, c = 0, d = 0;
  char e[31];

  cin >> e;

  for (int i = 0; e[i] != '\0'; i++) {
    if (e [i] >= 65 && e[i] <= 90) {
      a++;
    }
    else if (e[i] >= 97 && e[i] <= 122) {
      b++;
    }
    else if (e[i] >= 48 && e[i] <= 57) {
      c++;
    }
    else {
      d++;
    }
  }

  if (a > 0 && b > 0 && c > 0 && d > 0) {
    cout << "segura" << endl;
    return 0;
  }
  else if (a > 0 && b == 0 && c == 0 && d == 0) {
    cout << "fraca" << endl;
    return 0;
  }
  else if (a == 0 && b > 0 && c == 0 && d == 0) {
    cout << "fraca" << endl;
    return 0;
  }
  else if (a == 0 && b == 0 && c > 0 && d == 0) {
    cout << "fraca" << endl;
    return 0;
  }
  else if (a == 0 && b == 0 && c == 0 && d > 0) {
    cout << "fraca" << endl;
    return 0;
  }
  else {
    cout << "media" << endl;
    return 0;
  }
}
