#include <iostream>
#include <cstring>

using namespace std;

int inverter_vetor (char *c) {

    int n = 0;

    for (int i = 0; c[i] != '\0'; i++) {
        n++;
    }

    for (int i = 0; i < n / 2; i++) {
        char aux = c[i];
        c[i] = c[n - 1 - i];
        c[n - 1 - i] = aux;
    }

    return n;
}

int ultima_ocorrencia (char *a, char *b, int n) {

    char *c = strstr(a,b);
    if (c == NULL) {
        return -1;
    }

    char *pos = c + (n - 1);

    int aux;

    for (aux = 0; *pos != '\0'; pos++) {
        aux++;
    }

    return aux;
}

int main(int argc, char **argv) {

    char a[101], b[101];
    int n, m;

    cout << "Escreva duas sentencas:" << endl;
    cin.getline(a,101);
    cin.getline(b,101);

    n = inverter_vetor(a);
    m = inverter_vetor(b);

    int o = ultima_ocorrencia(a,b,m);

    cout << "Indice da ultima ocorrencia da segunda frase na primeira: " << o << endl;

    return 0;
}
