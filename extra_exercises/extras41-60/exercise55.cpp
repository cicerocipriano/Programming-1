#include <iostream>
#include <cstdio>

using namespace std;

void ex1 () {

  char a[50];
  
  cout << "Write a word: ";
	  
  cin >> a;

  for (int i = 0; a[i] != '\0'; i++) {
    char b = a[i];
    putchar(toupper(b));
  }

  cout << endl;

  return;
}

int main(int argc, char **argv) {

  ex1();
  
  return 0;
}
