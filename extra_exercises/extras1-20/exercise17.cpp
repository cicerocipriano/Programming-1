#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  int a, e = 0;
  
  cout << "Write the quantity of products: ";
  cin >> a;
  
  int b[a], c[a];
  int d[a];
  
  cout << "Write the quantity of each product: ";
  for (int i = 0; i < a; i++) {
    cin >> b[i];
  }
  
  cout << "Write the price of each product: ";
  for (int i = 0; i < a; i++) {
    cin >> c[i];
  }

  cout << "The values of the total quantity of each product are: ";
  for (int i = 0; i < a; i++) {
    d[i] = b[i] * c[i];
    cout << b[i] * c[i] << " ";
  }
  for (int i = 0; i < a; i++) {
    e += d[i];
  }
  cout << endl << "The sum of all the values is: "<< e << endl;
  
  return 0;
}
