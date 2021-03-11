#include <iostream>
#include <cstring>

using namespace std;

void ex1 () {

  cout << "Write two words:" << endl;

  char a[50], b[50];

  cin >> a >> b;

  if (strcmp(a,b) == 0) {
    cout << "These words are identical." << endl;
  }
  else {
    cout << "These words are different." << endl;
  }

  return;
}

int main (int argc, cvhar **argv) {

  ex1();

  return 0;
}
