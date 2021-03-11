#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  float entrevista, curriculo, prova;
  float total, media;

  cout << "Escreva a nota da entrevista: ";
  cin >> entrevista;
  cout << "Escreva nota do curriculo: ";
  cin >> curriculo;
  cout << "Ecreva a nota da prova: ";
  cin >> prova;

  total = entrevista + curriculo + prova;
  media = (entrevista + curriculo + prova) / 3;
  cout << "Nota final do candidato: " << total << endl;
  cout << "Media de pontos do candidato: " << media << endl;

  return 0;
}
