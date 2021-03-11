#include <iostream>

using namespace std;

void fill_matrix (double m[][3], int nl, int nc) {

  cout << "Write the students score: ";
  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      cin >> m[i][j];
    }
  }

  return;
}

void total_student (double m[][3], int nl, int nc, double ts[]) {

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      ts[i] += m[i][j];
    }
  }

  return;
}

void test_average (double m[][3], int nl, int nc, double ta[]) {

  for (int i = 0; i < nc; i++) {
    for (int j = 0; j < nl; j++) {
      ta[i] += m[j][i];
    }
    ta[i] = ta[i] / nl;
  }

  return;
}

void print_total (double ts[], int n) {

  for (int i = 0; i < n; i++) {
    cout << "Student " << i + 1 << " total score: " << ts[i] << endl;
  }

  return;
}

void print_average (double ta[], int n) {

  cout << "Average score of each test: ";
    for (int i = 0; i < n; i++) {
      cout << ta[i] << " ";
    }
  cout << endl;

  return;
}

int main (int argc, char **argv) {

  const int x = 5, y = 3;

  double m [x][y];
  double ts[x] = {0}, ta[y] = {0};

  fill_matrix(m,x,y);

  total_student(m,x,y,ts);
  
  test_average(m,x,y,ta);

  print_total(ts,x);
  
  print_average(ta,y);

  return 0;
}
