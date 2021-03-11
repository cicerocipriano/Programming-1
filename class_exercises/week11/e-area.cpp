#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Ponto {
    int x, y;
};

double distancia (Ponto A, Ponto B) {

    double dx = (A.x) - (B.x), dy = (A.y) - (B.y);

    if (dx < 0) {
        dx *= -1;
    }

    if (dy < 0) {
        dy *= -1;
    }

    return sqrt(dx * dx + dy * dy);
}

double area (Ponto P, Ponto Q, Ponto R) {

    double dpq = distancia(P,Q), dqr = distancia(Q,R), drp = distancia(R,P);

    double sp = (dpq + dqr + drp) / 2;

    return sqrt(sp * (sp - dpq) * (sp - dqr) * (sp - drp));
}

int main (int argc, char **argv) {

    Ponto triangulo[3];
    double a;

    for (int i = 0; i < 3; i++) {
        cin >> triangulo[i].x >> triangulo[i].y;
    }

    a = area(triangulo[0],triangulo[1],triangulo[2]);

    cout << fixed << setprecision(2) << a << endl;

    return 0;
}
