#include <iostream>
#include <cctype>

using namespace std;

void ex2 () {

  char a[100];

  int aux = 0;

  cout << "Write a sentence:" << endl;
  
  cin.getline(a,100);

  for (int i = 0; a[i] != '\0'; i++) {
    if (isdigit(a[i])) {
      aux++;
    }
  }

  cout << "This sentence has " << aux << " digits." << endl;

  return;
}

int main (int argc, char **argv) {

  ex2();

  return 0;
}
