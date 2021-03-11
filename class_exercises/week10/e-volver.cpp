#include <iostream>

using namespace std;

void ordem_cap (char *a, int n) {

    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            a[i] = 'E';
            a[i + 1] = 'D';
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            ordem_cap(a,n);
        }
    }

    return;
}

int main(int argc, char **argv) {

    int n;
    char *a;

    cin >> n;

    a = new char[n];

    cin >> a;

    ordem_cap(a,n);

    delete[] a;

    return 0;
}
