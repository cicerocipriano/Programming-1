#include <iostream>

using namespace std;

unsigned long long int somadig (unsigned long long int n, unsigned long long int aux, unsigned long long int s) {

    if (n / aux == 0) {
        somadig(n,aux/10,s);
    }
    s += n / aux;
    n = n % aux;
    if (aux == 1) {
        return s;
    }
    else {
        somadig(n,aux/10,s);
    }
}

int main (int argc, char **argv) {

    unsigned long long int n, s;

    cin >> n;

    s = somadig(n,1000000000000000000,0);

    cout << s << endl;

    return 0;
}
