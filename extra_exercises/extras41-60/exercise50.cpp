#include <iostream>

using namespace std;

void hanoi (int n, char t1, char t2, char taux) {

  if (n == 1) {
    cout << "Move disc 1 from " << t1 << " to " << t2 << "." << endl;
  }
  else {
    hanoi (n-1,t1,taux,t2);
    cout << "Move disc " << n << " from " << t1 << " to " << t2 << "." << endl;
    hanoi (n-1,taux,t2,t1);
  }
}

int main (int argc, char **argv) {

  int n;

  cout << "Write the number of discs: ";
  cin >> n;

  hanoi(n,'A','B','C');

  return 0;
}
