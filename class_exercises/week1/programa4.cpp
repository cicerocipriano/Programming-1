#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  unsigned int altura, largura, comprimento;
  unsigned int volume;

  cout << "Escreva a altura do prisma: ";
  cin >> altura;
  cout << "Escreva a largura do prisma: ";
  cin >> largura;
  cout << "Escreva o comprimento do prisma: ";
  cin >> comprimento;

  volume = altura * largura * comprimento;

  if (altura == 0 || largura == 0 || comprimento == 0) {
    cout << "Nenhuma das dimensoes de um prima podem ser zero." << endl;
    return 0;
  }
  else { 
    cout << "O volume do prisma eh " << volume << endl;
    return 0;
  }
}
