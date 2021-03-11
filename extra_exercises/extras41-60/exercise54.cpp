#include <iostream>

using namespace std;

void ex1 () {
  
  char a[50];

  cout << "Write a word: ";
  
  cin >> a;

  for (int i = 0; a[i] != '\0'; i++) {
    cout << a[i] << endl;
  }

  return;
}

void ex2 () {

  char a[50];

  cout << "Write a word: ";

  cin >> a;
  
  int aux = 0;

  for (int i = 0; a[i] != '\0'; i++) {
    aux++;
  }

  cout << "This word has " << aux << " characters."<< endl;

  return;
}

void ex3 () {

  char a[50];

  cout << "Write a word: ";

  cin >> a;
  
  int aux = 0;

  for (int i = 0; a[i] != '\0'; i++) {
    if (a[i] == 97) {
      aux++;
    }
  }

  cout << "The letter 'a' appears " << aux << " times." << endl;
  
  return;
}

void ex4 () {

  char a[50];

  cout << "Write a word: ";

  cin >> a;
  
  int aux = 0;

  for (int i = 0; a[i] != '\0'; i++) {
    aux++;
  }

  for (int i = aux; i >= 0; i--) {
    cout << a[i];
  }

  cout << endl;

  return;
}

void ex5 () {

  char a[50], b[50];

  cout << "Write two words: ";
  cin >> a >> b;

  int sa = 0, sb = 0;

  for (int i = 0; a[i] != '\0'; i++) {
    sa++;
  }
  for (int i = 0; b[i] != '\0'; i++) {
    sb++;
  }

  if (sa == sb) {
    int aux = 0;
    for (int i = 0; i < sa; i++) {
      if (a[i] == b[i]) {
	aux++;
      }
    }
    if (aux == sa) {
      cout << "These words are identical." << endl;
    }
    else {
      cout << "These words are different." << endl;
    }
  }
  else {
    cout << "These words are different." << endl;
  }

  return;
}

int main (int argc, char **argv) {

  ex1();
  
  ex2();

  ex3();
  
  ex4();
  
  ex5();

  return 0;
}
