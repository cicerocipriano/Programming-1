#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  double a, b;
  char c;

  cout << "Write the product's normal price: ";
  cin >> a;

  cout << "Is there any discount on this product? Y or N: ";
  cin >> c;

  if (c == 'Y') {
    cout << "Write the discount (in decimal): ";
    cin >> b;
    a -= a * b;
    cout << "The final price is " << a << endl;
  }
  else {
    cout << "The final price is " << a << endl;
  }

  return 0;
}
