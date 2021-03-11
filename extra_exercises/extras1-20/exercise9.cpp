#include <iostream>

using namespace std;

bool checkifprime (unsigned int a) {

  bool b = true;
  
  if (a < 2) {
    b = false;
    return b;
  }
  
  if (a > 2) {
    for (int i = 2; i <= a / 2; i++) {
      if (a % i == 0) {
	b = false;
      }
    }
    return b;
  }

  return b;
}

int sumintegers(int a, int b) {

  int c = 0;

  if (a > b) {
    for (int i = b; i <= a; i++) {
      c += i;
    }
  }
  else if (a < b) {
    for (int i = a; i <= b; i++) {
      c += i;
    }
  }
  else {
    return a;
  }

  return c;
}

int main (int argc, char **argv) {

  unsigned int a, b, c, d;
  bool e;
  int f, g, h = 0;

  cout << "Write two natural numbers: ";
  cin >> a >> b;

  if (a < b) {
    for (int i = a; i <= b; i++) {
      if (i % 2 == 0) {
	cout << i << " ";
      }
    }
  }
  else if (a > b) {
    for (int i = b; i <= a; i++) {
      if (i % 2 == 0) {
	cout << i << " ";
      }
    }
  }
  else {
    if (a % 2 == 0) {
      cout << a;
    }
    else {
      cout << "There aren't any even numbers between them.";
    }
  }
  cout << endl;

  cout << "Write a natural number: ";
  cin >> c;

  cout << "This number's dividers are: ";
  for (int i = 1; i <= c; i++) {
    if (c % i == 0) {
      cout << i << " ";
    }
  }
  cout << endl;

  cout << "Write a natural number: ";
  cin >> d;
  
  e = checkifprime(d);

  if (e == true) {
    cout << "This number is prime." << endl;
  }
  else {
    cout << "This number isn't prime." << endl;
  }

  cout << "Write two integers: ";
  cin >> f >> g;
  
  h = sumintegers(f,g);

  cout << "The sum of the numbers between " << f << " and " << g << " (including themselves) is " << h << endl;

  return 0;
}
