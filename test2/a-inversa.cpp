#include <iostream>

using namespace std;

int main (int argc, char **argv) {

    int n;
    cin >> n;

    int **m1 = new int*[n], **m2 = new int*[n], **m3 = new int*[n], **m4 = new int*[n];

    for (int i = 0; i < n; i++) {
      m1[i] = new int[n];
      m2[i] = new int[n];
      m3[i] = new int[n];
      m4[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m3[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m4[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        m4[i][i] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    int e = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (m3[i][j] == m4[i][j]) {
                e++;
            }
        }
    }

    if (e == n * n) {
        cout << "SIM" << endl;
    }
    else {
        cout << "NAO" << endl;
    }

    for (int i = 0; i < n; i++) {
      delete[] m1[i];
      delete[] m2[i];
      delete[] m3[i];
      delete[] m4[i];
    }
    delete[] m1;
    delete[] m2;
    delete[] m3;
    delete[] m4;

    return 0;
}
