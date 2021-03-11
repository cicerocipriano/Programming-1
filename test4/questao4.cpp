#include <iostream>
#include <cstring>

using namespace std;

int word_counter (char *a) {

    char *pch;
    int n = 0;

    pch = strtok(a," ");
    while (pch != NULL) {
        n++;
        pch = strtok(NULL," ");
    }

    return n;
}

void fill_matrix (char *a, char **m, int n) {

    int i = 0;
    char *pch = strtok(a," ");
    while (i < n) {
        strncpy(m[i],pch,21);
        pch = strtok(NULL," ");
        i++;
    }

    return;
}

void order_matrix (char **m, int n) {

    char aux[21];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int pos = 0;
            while (m[j][pos] == m[j + 1][pos]) {
              pos++;
            }
            if (m[j][pos] > m[j + 1][pos]) {
              int k;
              for (k = 0; m[j][k] != '\0'; k++) {
                aux[k] = m[j][k];
              }
              aux[k] = '\0';
              int l;
              for (l = 0; m[j + 1][l] != '\0'; l++) {
                m[j][l] = m[j + 1][l];
              }
              m[j][l] = '\0';
              int n;
              for (n = 0; aux[n] != '\0'; n++) {
                m[j + 1][n] = aux[n];
              }
              m[j + 1][n] = '\0';
            }
        }
    }

    return;
}

void resposta (char **m, int n) {

    for (int i = 0; i < n; i++) {
        int r = 1;
        if (i < n - 1) {
            while (strcmp(m[i],m[i+r]) == 0) {
                r++;
                if (i + r == n) {
                    break;
                }
            }
        }
        else {
            if (strcmp(m[i],m[i-1]) == 0) {
                break;
            }
        }
        cout << m[i] << " " << r << endl;
        i += r - 1;
    }

    return;
}

int main (int argc, char **argv) {

    char a[1001], b[1001];
    cin.getline(a,1001);
    int n;

    strncpy(b,a,1001);

    n = word_counter(a);

    char **m = new char*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new char[21];
    }

    fill_matrix(b,m,n);

    order_matrix(m,n);

    resposta(m,n);

    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
