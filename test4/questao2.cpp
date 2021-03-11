#include <iostream>

using namespace std;

int main(int argc, char **argv) {

    char a[101];

    cout << "Escreva uma sentenca:" << endl;
    cin.getline(a,101);

    cout << a << endl;

    int n = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if ((a[i] > 65 && a[i] < 69) || (a[i] > 69 && a[i] < 73) || (a[i] > 73 && a[i] < 79) || (a[i] > 79 && a[i] < 85) || (a[i] > 85 && a[i] < 91)) {
            n++;
        }
        if ((a[i] > 97 && a[i] < 101) || (a[i] > 101 && a[i] < 105) || (a[i] > 105 && a[i] < 111) || (a[i] > 111 && a[i] < 117) || (a[i] > 117 && a[i] < 123)) {
            n++;
        }
    }

    cout << "O numero de consoantes nessa sentenca eh: " << n << endl;

    return 0;
}
