#include <iostream>
#include <cstring>

using namespace std;

void ex4 () {

  char a[100], b[50];
  
  cout << "Write two words:" << endl;
  cin >> a >> b;

  strcat(a,b);

  cout << a << endl;
  
  return;
}

int main (int argc, char **argv) {

  ex4();

  return 0;
}
