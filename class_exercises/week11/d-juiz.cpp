#include <iostream>
#include <cstring>

using namespace std;

int correcao (char *ra, char *rc) {

    if (strcmp(ra,rc) == 0) {
        return 2;
    }

    int tra = strlen(ra);
    int trc = strlen(rc);

    for (int i = 0; i < tra - 1; i++) {
        for (int j = 0; j < tra - 1 - i; j++) {
            if (ra[j] == ' ') {
                char aux = ra[j];
                ra[j] = ra[j + 1];
                ra[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < trc - 1; i++) {
        for (int j = 0; j < trc - 1 - i; j++) {
            if (rc[j] == ' ') {
                char aux = rc[j];
                rc[j] = rc[j + 1];
                rc[j + 1] = aux;
            }
        }
    }

    cout << ra << endl << rc << endl;

    int tna = 0, tnc = 0;

    for (int i = 0; ra[i] != ' '; i++) {
        tna++;
    }

    ra[tna] = '\0';

    for (int i = 0; rc[i] != ' '; i++) {
        tnc++;
    }

    rc[tnc] = '\0';

    if (strcmp(ra,rc) == 0) {
        return 1;
    }

    return 0;
}

int main (int argc, char **argv) {

    char ra[1001], rc[1001];
    int c;

    cin.getline(ra,1001);
    cin.getline(rc,1001);

    c = correcao(ra,rc);

    if (c == 2) {
        cout << "Accepted" << endl;
    }
    else if (c == 1) {
        cout << "Presentation Error" << endl;
    }
    else {
        cout << "Wrong Answer" << endl;
    }

    return 0;
}
