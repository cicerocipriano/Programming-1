#include <iostream>

using namespace std;

void preencher_matriz (int **m, int nl, int nc) {

    cout << "Escreva os elementos da matriz:" << endl;

    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            cin >> m[i][j];
        }
    }

    return;
}

void print_matriz (int **m, int nl, int nc) {

    cout << endl;
    for (int i = 0; i < nl; i++) {
        cout << endl;
        for (int j = 0; j < nc; j++) {
            cout << m[i][j] << " ";
        }
    }
    cout << endl;

    return;
}

void flood_fill (int **m, int nl, int nc, int x, int y) {

    if (x < 0 || x >= nl || y < 0 || y >= nc) {
        return;
    }
    else if (m[x][y] != 1) {
        return;
    }
    else {
        m[x][y] = 0;
        flood_fill(m,nl,nc,x+1,y);
        flood_fill(m,nl,nc,x-1,y);
        flood_fill(m,nl,nc,x,y+1);
        flood_fill(m,nl,nc,x,y-1);
    }
}

int main(int argc, char **argv) {

    int l, c, x, y;

    cout << "Escreva as dimensoes da matriz: ";
    cin >> l >> c;

    int **m;
    m = new int*[l];
    for (int i = 0; i < l; i++) {
       m[i] = new int[c];
    }

    preencher_matriz(m,l,c);

    cout << "Escreva um posicao na matriz (x e y): ";
    cin >> x >> y;
    x--;
    y--;

    flood_fill(m,l,c,x,y);

    print_matriz(m,l,c);

    for (int i = 0; i < l; i++) {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
