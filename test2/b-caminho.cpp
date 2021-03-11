#include <iostream>

using namespace std;

void preencher_matriz (int **m, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    return;
}

void flood_fill (int **m, int n, int x, int y) {

    if (x < 0 || x >= n || y < 0 || y >= n) {
        return;
    }
    else if (m[x][y] != 1) {
        return;
    }
    else {
        m[x][y] = 0;
        flood_fill(m,n,x+1,y);
        flood_fill(m,n,x-1,y);
        flood_fill(m,n,x,y+1);
        flood_fill(m,n,x,y-1);
        flood_fill(m,n,x-1,y+1);
        flood_fill(m,n,x-1,y-1);
        flood_fill(m,n,x+1,y+1);
        flood_fill(m,n,x+1,y-1);
    }
}

int main (int argc, char **argv) {

    bool p;
    int n;
    cin >> n;

    int **m;
    m = new int*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
    }

    preencher_matriz(m,n);

    if (m[0][0] == 0 || m[n - 1][n - 1] == 0) {
        cout << "NAO" << endl;
        for (int i = 0; i < n; i++) {
            delete m[i];
        }
        delete[] m;
        return 0;
    }

    flood_fill(m,n,0,0);

    if (m[0][0] == 0 && m[n - 1][n - 1] == 0) {
        cout << "SIM" << endl;
    }
    else {
        cout << "NAO" << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
