#include <iostream>
#include <cmath>

using namespace std;

const int N = 20;

int main () {

  double a[2][10];
  double b = 0.0, c = 0.0, sum = 0.0;
  int d = 0;
  double max, min;

  cout << "Write the scores of the first test done by the students: ";
  for (int i = 0; i < 10; i++) {
    cin >> a[0][i];
  }

  cout << "Write the scores of the second test done by the students: ";
  for (int i = 0; i < 10; i++) {
    cin >> a[1][i];
  }

  max = a[0][0];
  min = a[0][0];
  
  cout << "The student's averages are: ";
  for (int i = 0; i < 10; i++) {
    cout << (a[0][i] + a[1][i]) / 2.0 << " ";
  }
  cout << endl;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 10; j++) {
      sum += a[i][j];
      if (a[i][j] > max) {
	max = a[i][j];
      }
      if (a[i][j] < min) {
	min = a[i][j];
      }
    }
  }

  b = sum / N;

  double aux = 0.0;
  
   for (int i = 0; i < 2; i++) { 
    for (int j = 0; j < 10; j++) {
      aux += (a[i][j] - b) * (a[i][j] - b);
      if (a[i][j] > b) {
	d++;
      }
    }
  }

   c = aux / N;
   c = sqrt(c);

  cout << "The average of all the scores is: " << b << endl << "The highest score was: " << max << endl;
  cout << "The lowest score was: " << min << endl << "The number of scores higher than the average of all students is: " << d << endl;
  cout << "The standard deviation of all the scores is: " << c << endl;
  
  return 0;
}
