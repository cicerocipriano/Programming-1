#include <iostream>
#include <cstdlib>

using namespace std;

void fill_matrix (char ** m, int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> m[i][j];
    }
  }

  return;
}

void write_coordinates (char **m, int n) {

  int x = 1, y = 1;

  cout << "Write the coordinates to see if they contain a mine or not: ";

  while (x > 0 && y > 0) {
    cin >> x >> y;
    if (x == 0 && y == 0) {
      break;
    }
    int ax = x - 1, ay = y - 1;
    if (m[ax][ay] == 'X') {
      cout << x << " " << y << " => Mine" << endl;
    }
    else if ((ax > 0 && ax < n - 1) && (ay > 0 && ay < n - 1)) {
      if (m[ax][ay - 1] == 'X' || m[ax][ay + 1] == 'X' || m[ax - 1][ay] == 'X' || m[ax + 1][ay] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax == 0 && ay == 0) {
      if (m[ax + 1][ay] == 'X' || m[ax][ay + 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax == 0 && ay == n - 1) {
      if (m[ax + 1][ay] == 'X' || m[ax][ay - 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax == n - 1 && ay == 0) {
      if (m[ax - 1][ay] == 'X' || m[ax][ay + 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax == n - 1 && ay == n - 1) {
      if (m[ax - 1][ay] == 'X' || m[ax][ay - 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax == 0 && ay > 0 && ay < n - 1) {
      if (m[ax + 1][ay] == 'X' || m[ax][ay + 1] == 'X' || m[ax][ay - 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax > 0 && ax < n - 1 && ay == 0) {
      if (m[ax + 1][ay] == 'X' || m[ax - 1][ay] == 'X' || m[ax][ay + 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax > 0 && ax < n - 1 && ay == n - 1) {
      if (m[ax + 1][ay] == 'X' || m[ax - 1][ay] == 'X' || m[ax][ay - 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far from mine" << endl;
      }
    }
    else if (ax == n - 1 && ay > 0 && ay < n - 1) {
      if (m[ax - 1][ay] == 'X' || m[ax][ay + 1] == 'X' || m[ax][ay - 1] == 'X') {
	cout << x << " " << y << " => Near mine" << endl;
      }
      else {
	cout << x << " " << y << " => Far fom mine" << endl;
      }
    }
  }
  
  return;
}

int main (int argc, char **argv) {

  int n;

  cout << "Write the size of the square matrix: ";
  cin >> n;

  char ** m;

  m = (char **) malloc(n*sizeof(char**));
  for (int i = 0; i < n; i++) {
    m[i] = (char *) malloc(n*sizeof(char*));
  }

  cout << "Fill the matrix with 'X' for mine and with '.' for a empty space:" << endl;
  
  fill_matrix(m,n);

  write_coordinates(m,n);

  for (int i = 0; i < n; i++) {
    free(m[i]);
  }
  free(m);

  return 0;
}
