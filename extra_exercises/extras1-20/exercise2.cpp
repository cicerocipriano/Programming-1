#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  double s1, s2, s3, s4, s5;
  double c1, c2, c3, c4, c5;
  double pc = 0;

  cout << "Write the scores of the 5 subjects: ";
  cin >> s1 >> s2 >> s3 >> s4 >> s5;

  cout << "Write the number of credits of each subject: ";
  cin >> c1 >> c2 >> c3 >> c4 >> c5;

  pc = ((s1 * c1) + (s2 * c2) + (s3 * c3) + (s4 * c4) + (s5 * c5)) / (c1 + c2 + c3 + c4 + c5); 

  cout << "PC = " << pc << endl;

  return 0;
}
