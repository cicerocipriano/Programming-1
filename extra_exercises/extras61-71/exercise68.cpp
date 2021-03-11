#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  if (argc < 3) {
    cout << "Must have at least three arguments." << endl;
    return -1;
  }
  else if (argv[argc - 1][0] != 'e') {
    cout << "Must end with 'e'." << endl;
    return -1;
  }
  else {
    int sum = 0;
    for (int i = 1; argv[i][0] != 'e'; i++) {
      int n = atoi(argv[i]);
      sum += n;
    }
    cout << sum << endl;
  }
  
  return 0;
}
