#include <iostream>
#include <cstring>

using namespace std;

int ocorre (char *a, char *b, int n) {

    char *p = strstr(a,b);

    if (p != NULL) {
        n++;
        ocorre(p+1,b,n);
    }
    else {
        return n;
    }
}

int main (int argc, char **argv) {

    char a[101], b[101];
    int n;

    cin >> b >> a;

    n = ocorre(a,b,0);

    cout << n << endl;

    return 0;
}
