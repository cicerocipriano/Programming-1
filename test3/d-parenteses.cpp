#include <iostream>
#include <cstring>

using namespace std;

void check_pare (char *a) {

    int pos1 = -1, pos2 = -1;

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '(') {
            pos1 = i;
            a[i] = 64;
            break;
        }
    }

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == ')') {
            pos2 = i;
            a[i] = 64;
            break;
        }
    }

    if (pos1 < 0 || pos2 < 0 || pos1 > pos2) {
        return;
    }

    check_pare(a);
}

void resposta (char *a) {

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '(' || a[i] == ')') {
            cout << "NAO" << endl;
            return;
        }
    }

    int c = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == 64) {
            c++;
        }
    }

    if (c % 2 == 0) {
        cout << "SIM" << endl;
    }
    else {
        cout << "NAO" << endl;
    }

    return;
}

int main (int argc, char **argv) {

    char a[101];
    cin.getline(a,101);

    check_pare(a);

    resposta(a);

    return 0;
}
