#include <iostream>

using namespace std;

void ex3() {

  char a[50], b[50];
  
  cout << "Write two words:" << endl;

  cin >> a >> b;

  for (int i = 0; i < 50; i++) {
    if (a[i] > b[i]) {
      cout << "The first word." << endl;
      break;
    }
    else if (a[i] < b[i]) {
      cout << "The second word." << endl;
      break;
    }
  }

  return;
}

int main (int argc, char **argv) {

  ex3();

  return 0;
}
