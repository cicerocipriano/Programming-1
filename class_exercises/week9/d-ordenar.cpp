#include <iostream>

using namespace std;

void ordenar (int &a, int &b, int &c) {

    int d[3] = {a,b,c};

    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (d[j] > d[j + 1]) {
                int aux = d[i];
                d[i] = d[j + 1];
                d[j + 1] = aux;
            }
        }
    }

    a = d[0];
    b = d[1];
    c = d[2];

    return;
}

int main (int argc, char **argv) {

    int a, b, c;
    cin >> a >> b >> c;

    ordenar(a,b,c);

    cout << a << " " << b << " " << c << endl;

    return 0;
}
