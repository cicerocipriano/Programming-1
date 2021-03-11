#include <iostream>
#include <iomanip>

using namespace std;

struct Horario {
  int horas, minutos;
};

void escreve (Horario H) {

  if (H.horas == 0)
    cout << setfill ('0') << setw (2) << "12";
  else if (H.horas < 13)
    cout << setfill ('0') << setw (2) << H.horas;
  else
    cout << setfill ('0') << setw (2) << H.horas - 12;
  cout << ":";
  cout << setfill ('0') << setw (2) << H.minutos;
  if (H.horas < 12)
    cout << " AM";
  else
    cout << " PM";

  return;
}

int main (int argc, char **argv) {

  int n;
  cin >> n;
  Horario h[n];

  for (int i = 0; i < n; i++) {
    cin >> h[i].horas >> h[i].minutos;
  }

  for (int i = 0; i < n; i++) {
    escreve(h[i]);
    cout << endl;
  }

  return 0;
}
