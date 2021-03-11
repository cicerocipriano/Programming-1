#include <iostream>

using namespace std;

int maior (int v[], int posicao, int n) {

    int aux = 0;
    for (int i = 0; i < n; i++) {
        if (v[posicao] >= v[i]) {
            aux++;
        }
    }

    if (aux == n) {
        return v[posicao];
    }
    else {
        maior(v,posicao+1,n);
    }
}

int main (int argc, char **argv) {

    int n, m;
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    m = maior(v,0,n);

    cout << m << endl;

    return 0;
}
