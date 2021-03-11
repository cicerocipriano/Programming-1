#include <iostream>

using namespace std;

void somafrac (int na, int da, int nb, int db, int &nr, int &dr) {

    dr = 1;

    while (dr > 0) {
        if (dr % da == 0 && dr % db == 0) {
            break;
        }
        dr++;
    }

     nr = (dr / da * na) + (dr/ db * nb);

     if (nr > dr) {
         for (int i = dr; i > 1; i--) {
             for (int j = dr; j > 1; j--) {
                 if (nr % j == 0 && dr % j == 0) {
                     nr /= j;
                     dr /= j;
                 }
             }
         }
     }
     else {
         for (int i = nr; i > 1; i--) {
             for (int j = nr; j > 1; j--) {
                 if (nr % j == 0 && dr % j == 0) {
                     nr /= j;
                     dr /= j;
                 }
             }
         }
     }

     cout << na << "/" << da << "+" << nb << "/" << db << "=" << nr << "/" << dr << endl;

     return;
}

int main (int argc, char **argv) {

    int na, da, nb, db, nr, dr;
    char a, b;

    cin >> na >> a >> da >> nb >> b >> db;

    somafrac(na,da,nb,db,nr,dr);

    return 0;
}
