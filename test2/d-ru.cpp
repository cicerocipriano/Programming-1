#include <iostream>

using namespace std;

int main (int argc, char **argv) {

    int n, p;

    cin >> n >> p;

    int m[n][p];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> m[i][j];
        }
    }

    int pi[p];

    for (int i = 0; i < p; i++) {
        cin >> pi[i];
    }

    int pp[n] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            pp[i] += m[i][j] * pi[j];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << pp[i] << " ";
    }
    cout << endl;

    return 0;
}
