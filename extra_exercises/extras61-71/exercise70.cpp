#include <iostream>
#include <iomanip>

using namespace std;

struct hours {
    unsigned int hour;
    char e;
    unsigned int min;
};

hours diff (hours a, hours b) {

    hours aux;
    unsigned int aux1 = a.hour * 60 + a.min;
    unsigned int aux2 = b.hour * 60 + b.min;
    unsigned int aux3;

    if (aux1 > aux2) {
        aux3 = aux1 - aux2;
        aux.hour = aux3 / 60;
        aux.e = ':';
        aux.min = aux3 % 60;
    }
    else if (aux1 < aux2) {
        aux3 = aux2 - aux1;
        aux.hour = aux3 / 60;
        aux.e = ':';
        aux.min = aux3 % 60;
    }
    else {
        aux.hour = 0;
        aux.e = ':';
        aux.min = 0;
    }

    return aux;
}

int main (int argc, char **argv) {

    hours a, b, c;

    cout << "Write the first time: ";
    cin >> a.hour >> a.e >> a.min;

    cout << "Write the second time: ";
    cin >> b.hour >> b.e >> b.min;

    c = diff(a,b);

    cout << "The difference between these two times is: ";
    cout << setfill ('0') << setw(2) << c.hour << c.e << setfill ('0') << setw(2) << c.min << endl;

    return 0;
}
