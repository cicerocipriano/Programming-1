#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  double *ts1, *ts2, *ts3;
  double *as1, *as2, *as3;
  double *cs, *tot, pc;

  cs = new double[3];
  
  ts1 = new double[3];
  ts2 = new double[3];
  ts3 = new double[3];
  as1 = new double[4];
  as2 = new double[4];
  as3 = new double[4];

  tot = new double[3];

  cout << "Write the number of credits of the three subjects: ";
  for (int i = 0; i < 3; i++) {
    cin >> cs[i];
  }

  cout << "Write the scores of the three tests of the first subject: ";
  for (int i = 0; i < 3; i++) {
    cin >> ts1[i];
  }

  cout << "Write the scores of the four activities of the first subject: ";
  for (int i = 0; i < 4; i++) {
    cin >> as1[i];
  }
  
  cout << "Write the scores of the three tests of the second subject: ";
  for (int i = 0; i < 3; i++) {
    cin >> ts2[i];
  }

  cout << "Write the scores of the four activities of the second subject: ";
  for (int i = 0; i < 4; i++) {
    cin >> as2[i];
  }
  
  cout << "Write the scores of the three tests of the third subject: ";
  for (int i = 0; i < 3; i++) {
    cin >> ts3[i];
  }

  cout << "Write the scores of the four activities of the third subject: ";
  for (int i = 0; i < 4; i++) {
    cin >> as3[i];
  }

  for (int i = 0; i < 3; i++) {
    tot[i] = 0;
  }

  for (int i = 0; i < 3; i++) {
    tot[0] += ts1[i] + as1[i];
  }
  tot[0] += as1[3];

  for (int i = 0; i < 3; i++) {
    tot[1] += ts2[i] + as2[i];
  }
  tot[1] += as2[3];

  for (int i = 0; i < 3; i++){
    tot[2] += ts3[i] + as3[i];
  }
  tot[2] += as3[3];
    
  pc = ((tot[0] * cs[0]) + (tot[1] * cs[1]) + (tot[2] * cs[2])) / (cs[0] + cs[1] + cs[2]);

  cout << "The scores on the three tests and on the four activities from the first subject are, respectively:" << endl;
  cout << ts1[0] << " " << ts1[1] << " " << ts1[2] << " " << as1[0] << " " << as1[1] << " " << as1[2] << " " << as1[3] << endl;
  cout << "And the total score of the subject is: " << tot[0] << endl;

  cout << "The scores on the three tests and on the four activities from the second subject are, respectively:" << endl;
  cout << ts2[0] << " " << ts2[1] << " " << ts2[2] << " " << as2[0] << " " << as2[1] << " " << as2[2] << " " << as2[3] << endl;
  cout << "And the total score of the subject is: " << tot[1] << endl;

  cout << "The scores on the three tests and on the four activities from the third subject are, respectively:" << endl;
  cout << ts3[0] << " " << ts3[1] << " " << ts3[2] << " " << as3[0] << " " << as3[1] << " " << as3[2] << " " << as3[3] << endl;
  cout << "And the total score of the subject is: " << tot[2] << endl;

  cout << "The performance coefficient of the three subjects is: " << pc << endl;

  delete[] cs;
  delete[] tot;

  delete[] ts1;
  delete[] ts2;
  delete[] ts3;

  delete[] as1;
  delete[] as2;
  delete[] as3;

  return 0;
}
