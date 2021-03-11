#include <iostream>

using namespace std;

int main (int argc, char **argv) {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        bool r = false;
        int q = 0;
        for (int k = 0; k < n - 1; k++) {
            for (int l = k + 1; l < n; l++) {
                if (a[k] == a[l]) {
                    r = true;
                    q = a[k];
                }
            }
        }
        if (r) {
            cout << "SIM: " << q << endl;
        }
        else {
            cout << "NAO" << endl;
        }
    }

    return 0;
}
