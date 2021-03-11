#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  double base, horaextra, valorhora;
  double salario;

  cout << "Escreva o valor do salario base do funcionario: ";
  cin >> base;
  cout << "Escreva o valor de horas extras que o funcionario trabalhou: ";
  cin >> horaextra;
  cout << "Escreva o valor da hora extra: ";
  cin >> valorhora;

  salario = base + horaextra * valorhora;

  if (horaextra < 0) {
    cout << "Um funcionario nao pode trabalhar por horas negativas." << endl;
      return 0;
  }
  else if (salario < 0) {
    cout << "Um funcionario nao pode pagar para trabalhar." << endl;
      return 0;
  }
  else {
    cout << "O salario do funcionario eh " << salario << "." << endl;
      return 0;
  }
}
