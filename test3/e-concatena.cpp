#include <iostream>

using namespace std;

char * concatena(char a[], char b[]) {

    char *c;
    c = new char[41];

    int aux1 = 0;

    for (int i = 0; a[i] != '\0'; i++) {
        c[i] = a[i];
        aux1++;
    }

    int aux2 = aux1;

    for (int i = 0; b[i] != '\0'; i++) {
        c[i+aux1] = b[i];
        aux2++;
    }

    c[aux2] = '\0';

    return c;
}

int main (int argc, char **argv) {

    char a[21], b[21], *c;

    cin >> a >> b;

    c = concatena(a,b);

    cout << c << endl;

    delete[] c;

    return 0;
}
