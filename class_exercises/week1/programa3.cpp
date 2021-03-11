#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  float comida, bebida, sobremesa;
  float valordaconta, valorpago, troco;
  
  cout << "Escreva o valor consumido em comida, bebida e sobremesa: ";
  cin >> comida >> bebida >> sobremesa;
  cout << "Escreva o valor pago pelo cliente: ";
  cin >> valorpago;

  valordaconta = comida + bebida + sobremesa;
  troco = valorpago - valordaconta;

  cout << endl << endl << "RESTAURANTE PEGUE E PAGUE" << endl;
  cout << "Consumo: " << comida << " + " << bebida << " + " << sobremesa << " = ";
  cout << valordaconta << endl;
  cout << "Valor Pago: " << valorpago << endl;
  
  if (valorpago < valordaconta) {
    troco = valordaconta - valorpago;
    cout << "Esta faltando " << troco << " reais." << endl;
    cout << "Volte quando tiver o dinheiro." << endl;
    return 0;
  }
  else {
    cout << "Troco: " << troco << endl;
    cout << "Volte sempre!" << endl;
    return 0;
  }
}
