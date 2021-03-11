#include <iostream>

using namespace std;

bool palindromo (char a[]) {

    int i;
    for (i = 0; a[i] != '\0'; i++) {
    }

    int aux = 0;

    for (int j = 0; j <= i / 2 - 1; j++) {
        if (a[j] == a[(i - 1) - j]) {
            aux++;
        }
    }
    if (aux == i / 2) {
        return true;
    }

    return false;
}

int main (int argc, char **argv) {

    char a[31];
    cin >> a;
    bool p;

    p = palindromo(a);

    if (p) {
        cout << "PALINDROMO" << endl;
    }
    else {
        cout << "NAO" << endl;
    }

    return 0;
}
