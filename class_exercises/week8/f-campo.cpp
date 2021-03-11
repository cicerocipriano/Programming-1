#include <iostream>

using namespace std;

void preenche_matriz (char **m, int nl, int nc, int b) {

    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            m[i][j] = 45;
        }
    }

    for (int i = 0; i < b; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        m[x][y] = 66;
    }

    return;
}

void completar_tabuleiro (char **m, int nl, int nc) {

    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            if (m[i][j] == 45) {
                if (i == 0 && j == 0) {
                    char q = 48;
                    if (m[i + 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j + 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j + 1] == 66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if (i == 0 && j == nc - 1) {
                    char q = 48;
                    if (m[i + 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j - 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j - 1] == 66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if (i == nl - 1 && j == 0) {
                    char q = 48;
                    if (m[i - 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j + 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j + 1] == 66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if (i == nl - 1 && j == nc - 1) {
                    char q = 48;
                    if (m[i - 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j - 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j - 1] == 66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if (i == 0 && j > 0 && j < nc - 1) {
                    char q = 48;
                    if (m[i + 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j + 1] == 66) {
                        q++;
                    }
                    if (m[i][j - 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j + 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j - 1] ==  66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if (i > 0 && i < nl - 1 && j == 0) {
                    char q = 48;
                    if (m[i + 1][j] == 66) {
                        q++;
                    }
                    if (m[i - 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j + 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j + 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j + 1] ==  66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if (i > 0 && i < nl - 1 && j == nc - 1) {
                    char q = 48;
                    if (m[i + 1][j] == 66) {
                        q++;
                    }
                    if (m[i - 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j - 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j - 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j - 1] ==  66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if (i == nl - 1 && j > 0 && j < nc - 1) {
                    char q = 48;
                    if (m[i - 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j + 1] == 66) {
                        q++;
                    }
                    if (m[i][j - 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j + 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j - 1] ==  66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
                if ((i > 0 && i < nl - 1) && (j > 0 && j < nc - 1)) {
                    char q = 48;
                    if (m[i + 1][j] == 66) {
                        q++;
                    }
                    if (m[i - 1][j] == 66) {
                        q++;
                    }
                    if (m[i][j + 1] == 66) {
                        q++;
                    }
                    if (m[i][j - 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j + 1] == 66) {
                        q++;
                    }
                    if (m[i + 1][j - 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j + 1] == 66) {
                        q++;
                    }
                    if (m[i - 1][j - 1] == 66) {
                        q++;
                    }
                    if (q > 48) {
                        m[i][j] = q;
                    }
                }
            }
        }
    }

    return;
}

void print_matrix (char **m, int nl, int nc) {

    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            cout << m[i][j];
        }
        cout << endl;
    }

    return;
}

int main (int argc, char **argv) {

    int nl, nc, b;
    char **m;

    cin >> nl >> nc >> b;

    m = new char*[nl];
    for (int i = 0; i < nl; i++) {
        m[i] = new char[nc];
    }

    preenche_matriz(m,nl,nc,b);

    completar_tabuleiro(m,nl,nc);

    print_matrix(m,nl,nc);

    for (int i = 0; i < nl; i++) {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
