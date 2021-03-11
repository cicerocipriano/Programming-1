#include <iostream>
#include <cstring>

using namespace std;

struct TipoPartida {
    char time1[31], time2[31];
    int placar1, placar2;
};

TipoPartida partida[50];

struct selecao {
    char nome[31];
    int pontos;
};

int main (int argc, char **argv) {

    int n;
    char x;
    selecao grupo[4];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> partida[i].time1 >> partida[i].placar1 >> x >> partida[i].placar2 >> partida[i].time2;
    }

    for (int i = 0; i < 4; i++) {
        cin >> grupo[i].nome;
        grupo[i].pontos = 0;
    }

    for (int i = 0; i < n; i++) {
        if (partida[i].placar1 > partida[i].placar2) {
            for (int j = 0; j < 4; j++) {
                if (strcmp(partida[i].time1,grupo[j].nome) == 0) {
                    grupo[j].pontos += 3;
                }
            }
        }
        else if (partida[i].placar2 > partida[i].placar1) {
            for (int j = 0; j < 4; j++) {
                if (strcmp(partida[i].time2,grupo[j].nome) == 0) {
                    grupo[j].pontos += 3;
                }
            }
        }
        else {
            for (int j = 0; j < 4; j++) {
                if (strcmp(partida[i].time1,grupo[j].nome) == 0) {
                    grupo[j].pontos += 1;
                }
                if (strcmp(partida[i].time2,grupo[j].nome) == 0) {
                    grupo[j].pontos += 1;
                }
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << grupo[i].nome << " " << grupo[i].pontos << endl;
    }

    return 0;
}
