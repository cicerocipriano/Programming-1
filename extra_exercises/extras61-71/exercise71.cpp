#include <iostream>

using namespace std;

struct student {
    unsigned int mat;
    char name[51];
    double test[3];
    double avrg;
    bool appr;
};

void fill_students (student *s, int n) {

    for (int i = 0; i < n; i++) {
        cout << endl << "Write the students registration:";
        cin >> s[i].mat;
        cout << endl << "Write the student's first name:";
        cin >> s[i].name;
        cout << endl << "Write the student's score on the three tests:" << endl;
        double aux = 0;
        for (int j = 0; j < 3; j++) {
            cin >> s[i].test[j];
            aux += s[i].test[j];
        }
        s[i].avrg = aux / 3;
        if (s[i].avrg >= 60) {
            s[i].appr = true;
        }
        else {
            s[i].appr = false;
        }
    }

    return;
}

void print_appro_disap (student *s, int n) {

    cout << "============ APPROVED ============" << endl;
    for (int i = 0; i < n; i++) {
        if (s[i].appr) {
            cout << endl << "Registration: " << s[i].mat << endl;
            cout << "First name: " << s[i].name << endl;
            cout << "Scores on the tests:" << endl;
            for (int j = 0; j < 3; j++) {
                cout << s[i].test[j] << " ";
            }
            cout << endl << "Score average: " << s[i].avrg << endl;
        }
    }

    cout << "========== NOT APPROVED ==========" << endl;
    for (int i = 0; i < n; i++) {
        if (s[i].appr == false) {
            cout << endl << "Registration: " << s[i].mat << endl;
            cout << "First name: " << s[i].name << endl;
            cout << "Scores on the tests:" << endl;
            for (int j = 0; j < 3; j++) {
                cout << s[i].test[j] << " ";
            }
            cout << endl << "Score average: " << s[i].avrg << endl;
        }
    }

    return;
}

int main (int argc, char **argv) {

    int n;

    cout << "Write the number of students: ";
    cin >> n;

    student *s;
    s = new student[n];

    fill_students(s,n);

    print_appro_disap(s,n);

    delete[] s;

    return 0;
}
