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
        strncpy(m[i],pch,101);
        pch = strtok(NULL," ");
        i++;
    }

    return;
}

int diff_words (char **m, int n) {

    int d = 1;

    for (int i = 1; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (strcmp(m[i],m[j]) == 0) {
                break;
            }
        }
        if (i == j) {
            d++;
        }
    }

    return d;
}

int main (int argc, char **argv) {

    char a[101];
    char b[101];
    int n, d;
    cin.getline(a,101);

    strncpy(b,a,101);

    n = word_counter(a);

    char **m;
    m = new char*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new char[101];
    }

    fill_matrix(b,m,n);

    d = diff_words(m,n);

    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;

    cout << n << " " << d << endl;

    return 0;
}
