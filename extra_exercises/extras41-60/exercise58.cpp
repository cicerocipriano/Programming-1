#include <iostream>
#include <cstring>

using namespace std;

void ex4 () {

  char a[200];

  int n = 0;

  cout << "Write a sentence:" << endl;

  cin.getline(a,200);

  cout << a << endl;;

  char *aux;

  aux = strtok(a," ,.!?");

  while (aux != NULL) {
    n++;
    aux = strtok(NULL," ,.!?");
  }

  if (n > 1) {
    cout << "This sentence has " << n << " words." << endl;
  }
  else {
    cout << "This sentence has one word." << endl;
  }

  return;
}

int main (int argc, char **argv) {

  ex4();

  return 0;
}
