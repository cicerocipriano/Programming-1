#include <iostream>

using namespace std;

bool check_if_prime (unsigned long long int n) {

  if(n < 2) {
    return false;
  }
  else if (n == 2) {
    return true;
  }
  
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main (int argc, char **argv) {

  cout << "The primes below 1000 are:" << endl;
  for (unsigned long long int i = 0; i <= 1000; i++) {
    bool prime;
    prime = check_if_prime(i);
    if (prime == true) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
