#include <iostream>

using namespace std;

void gerartabuleiro (char t[][3], int nl, int nc) {

  for (int i = 0; i < nl; i++) {
    for (int j = 0; j < nc; j++) {
      t[i][j] = '-';
    }
  }
  return;
}

int checarvencedor (char a[], char b[], char c[], char d[], char e[], char f[], char g[], char h[]) {

  if (a[0] == 'x' && a[1] == 'x' && a[2] == 'x')
    return 1;
  else if (b[0] == 'x' && b[1] == 'x' && b[2] == 'x')
    return 1;
  else if (c[0] == 'x' && c[1] == 'x' && c[2] == 'x')
    return 1;
  else if (d[0] == 'x' && d[1] == 'x' && d[2] == 'x') 
    return 1;
  else if (e[0] == 'x' && e[1] == 'x' && e[2] == 'x')
    return 1;
  else if (f[0] == 'x' && f[1] == 'x' && f[2] == 'x')
    return 1;
  else if (g[0] == 'x' && g[1] == 'x' && g[2] == 'x')
    return 1;
  else if (h[0] == 'x' && h[1] == 'x' && h[2] == 'x')
    return 1;
  else if (a[0] == 'o' && a[1] == 'o' && a[2] == 'o')
    return 2;
  else if (b[0] == 'o' && b[1] == 'o' && b[2] == 'o')
    return 2;
  else if (c[0] == 'o' && c[1] == 'o' && c[2] == 'o')
    return 2;
  else if (d[0] == 'o' && d[1] == 'o' && d[2] == 'o')
    return 2;
  else if (e[0] == 'o' && e[1] == 'o' && e[2] == 'o')
    return 2;
  else if (f[0] == 'o' && f[1] == 'o' && f[2] == 'o')
    return 2;
  else if (g[0] == 'o' && g[1] == 'o' && g[2] == 'o')
    return 2;
  else if (h[0] == 'o' && h[1] == 'o' && h[2] == 'o')
    return 2;

  return 0;
}

int main (int argc, char **argv) {
  
  int nl = 3, nc = 3;
  char t[3][3];

  gerartabuleiro(t,nl,nc);

  int nj;
  cin >> nj;

  int li = 0, co = 0;
  char xo;
  
  for (int i = 0; i < nj; i++) {
    cin >> xo >> li >> co;
    t[li][co] = xo;
  }

  char a[3], b[3], c[3], d[3], e[3], f[3], g[3], h[3];

  for (int i = 0; i < 3; i++) { 
    a[i] = t[0][i];
  }
  for (int i = 0; i < 3; i++) {
    b[i] = t[1][i];
  }
  for (int i = 0; i < 3; i++) {
    c[i] = t[2][i];
  }
  for (int i = 0; i < 3; i++) {
    d[i] = t[i][0];
  }
  for (int i = 0; i < 3; i++) {
    e[i] = t[i][1];
  }
  for (int i = 0; i < 3; i++) {
    f[i] = t[i][2];
  }
  for (int i = 0; i < 3; i++) {
    g[i] = t[i][i];
  }
  h[0] = t[0][2];
  h[1] = t[1][1];
  h[2] = t[2][0];
   
  int v = 0;
  
  v = checarvencedor(a,b,c,d,e,f,g,h);

  if (v == 1) {
    cout << "Venceu x!" << endl;
    return 0;
  }
  else if (v == 2) {
    cout << "Venceu o!" << endl;
    return 0;
  }
  else {
    cout << "Velha!" << endl;
    return 0;
  }
}
