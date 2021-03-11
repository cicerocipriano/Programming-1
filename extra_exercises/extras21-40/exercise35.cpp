#include <iostream>

using namespace std;

void print_int (int inf, int sup) {
  
  cout << "Write an integer: ";
  
  int n;
  
  cin >> n;
  
  if (n >= inf && n <= sup) {
    cout << n << endl;
  }
  else {
    cout << "The number isn't between in the interval." << endl;
  }
  
  return;
}

int main (int argc, char **argv) {
  
  int inf, sup;
  bool co = false;
  
  while (co == false) {
    
    cout << "The interval is between: ";
    cin >> inf >> sup;
    
    if (inf > sup) {
      cout << "The first number must be equal or smaller than the second. Try again." << endl;
      continue;
    }
    
    co = true;
  }
  
  print_int(inf,sup);
  
  return 0;
}
