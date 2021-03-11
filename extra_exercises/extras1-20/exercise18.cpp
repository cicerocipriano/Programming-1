#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  unsigned int n;
  cout << "Write a number: "
  cin >> n;

  if (n == 0) {
    cout << "The F(0) element of the Fibonacci sequence is 0" << endl;
    return 0;
  }
  else if (n == 1) {
    cout << "The F(0) and F(1) of the Fibonacci sequence are: 0 1" << endl;
    return 0;
  }

  n++;
  
  unsigned long long int a[n] = {0};

  a[0] = 0;
  a[1] = 1;
  
  for (int i = 0; i < n; i++) {
    if (i > 1) {
      a[i] = a[i - 1] + a[i - 2];
    }
  }

  cout << "The element " << n - 1 << " and the elements before it in the Fibonacci sequence are: ";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  
  return 0;
}
