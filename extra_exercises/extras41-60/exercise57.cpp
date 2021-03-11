#include <iostream>

using namespace std;

void ex3 () {

  char a[100];
  
  cout << "Write your full name:" << endl;

  cin.getline(a,100);

  int aux = 0;

  for (int i = 0; a[i] != '\0'; i++) {
    if (a[i] == 32) {
      aux++;
    }
  }
  aux++;

  if (aux > 1) {
    cout << "Your name has " << aux << " words." << endl;
  }
  else {
    cout << "This name has one word." << endl;
  }
  
  return;
}

int main (int argc, char **argv) {

  ex3();

  return 0;
}
