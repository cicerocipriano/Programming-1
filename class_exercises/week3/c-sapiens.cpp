#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  int nf, ft, fp;

  cin >> nf >> ft >> fp;

  
  if(nf < 40 || ft > 15 || fp > 7)
    cout << "Reprovado" << endl;
  else if(60 > nf && nf  >= 40)
    cout << "Final" << endl;
  else
    cout << "Aprovado" << endl;

  return 0;
}
