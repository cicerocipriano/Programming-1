#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  int n;

  cin >> n;

  for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
	cout << "Nao primo." << endl;
	return 0;
      }
  }

  cout << "Primo." << endl;

  return 0;
}
