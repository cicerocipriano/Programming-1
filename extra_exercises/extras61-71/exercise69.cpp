#include <iostream>
#include <cstring>

using namespace std;

struct place {
    char city[50];
    char state[3];
};

struct trip {
    place orig;
    place dest;
    unsigned int dist;
    double time;
};

void fill_trips (trip *t, int n) {

    for (int i = 0; i < n; i++) {
        cout << endl << "Trip " << i + 1 << endl;

        cout << "Write the origin city:" << endl;
        cin >> t[i].orig.city;
        cout << "Write the origin state:" << endl;
        cin >> t[i].orig.state;

        cout << "Write the destination city:" << endl;
        cin >> t[i].dest.city;
        cout << "Write the destination state:" << endl;
        cin >> t[i].dest.state;

        cout << "Write the distance between the cities (in kilometers):" << endl;
        cin >> t[i].dist;

        cout << "Write the duration of the trip (in hours):" << endl;
        cin >> t[i].time;
    }

    return;
}

void order_by_distance (trip *t, int n) {

    trip aux;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (t[j].dist > t[j + 1].dist) {
                aux = t[j];
                t[j] = t[j + 1];
                t[j + 1] = aux;
            }
        }
    }
    return;
}

void order_by_alphabet (trip *t, int n) {

    trip aux;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(t[j].orig.city,t[j + 1].orig.city) == 0) {
                int pos = 0;
                while (t[j].dest.city[pos] == t[j + 1].dest.city[pos]) {
                    pos++;
                }
                if (t[j].dest.city[pos] > t[j + 1].dest.city[pos]) {
                    aux = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = aux;
                }
            }
            else {
                int pos = 0;
                while (t[j].orig.city[pos] == t[j + 1].orig.city[pos]) {
                    pos++;
                }
                if (t[j].orig.city[pos] > t[j + 1].orig.city[pos]) {
                    aux = t[j];
                    t[j] = t[j + 1];
                    t[j + 1] = aux;
                }
            }
        }
    }

    return;
}

void print_trips (trip *t, int n) {

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Trip " << i + 1 << ":" << endl;
        cout << "Origin: " << t[i].orig.city << ", " << t[i].orig.state << endl;
        cout << "Destination: " << t[i].dest.city << ", " << t[i].dest.state << endl;
        cout << "Distance: " << t[i].dist << endl;
        cout << "Duration: " << t[i].time << endl << endl;
    }

    cout << endl;

    return;
}

int main (int argc, char **argv) {

    if (argc < 2) {
        cout << "Write the method of ordination: 'o' or 'd'." << endl;
        return -1;
    }

    bool od;

    if (argv[1][0] == 'o') {
        od = true;
    }
    if (argv[1][0] == 'd') {
        od = false;
    }

    int n;

    cout << "Write the number of trips: ";
    cin >> n;

    trip *t;
    t = new trip[n];

    fill_trips(t,n);

    cout << "============== ORDERING ==============" << endl;

    if (od) {
        order_by_alphabet(t,n);
    }
    else {
        order_by_distance(t,n);
    }

    print_trips(t,n);

    delete[] t;

    return 0;
}
