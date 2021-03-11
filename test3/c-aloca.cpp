#include <iostream>

using namespace std;

void fill_matrix (int **m, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    return;
}

int diff_md_sd (int **m, int n) {

    int md = 0, sd = 0;

    for (int i = 0; i < n; i++) {
        md += m[i][i];
    }

    int aux1 = 0, aux2 = n - 1;

    while (aux1 < n && aux2 >= 0) {
        sd += m[aux1][aux2];
        aux1++;
        aux2--;
    }

    return md - sd;
}

int main (int argc, char **argv) {

    int n, d;
    cin >> n;

    int **m;
    m = new int*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
    }

    fill_matrix(m,n);

    d = diff_md_sd(m,n);

    cout << d << endl;

    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
