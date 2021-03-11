#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  
  int D, M;

  cin >> D >> M;

  if(M == 1) {    
    cout << D << " de janeiro\nVerao\n";
    return 0;
  }

  if(M == 2) {
    cout << D << " de fevereiro\nVerao\n";
    return 0;
  }

  if(M == 3) {
    if(D < 20)  
      cout << D << " de marco\nVerao\n";
    else 
      cout << D << " de marco\nOutono\n";
    return 0;
  }

  
  if(M == 4) {
    cout << D << " de abril\nOutono\n";
    return 0;
  }
  
  if(M == 5) {
    cout << D << " de maio\nOutono\n";
    return 0;
  }
  
  if(M == 6) {
    if(D < 21)
      cout << D << " de junho\nOutono\n";
    else
      cout << D << " de junho\nInverno\n";
    return 0;
  }
  
  if(M == 7) {
    cout << D << " de julho\nInverno\n";
    return 0;
  }
  
  if(M == 8) {
    cout << D << " de agosto\nInverno\n";
    return 0;
  }
  
  if(M == 9) {
    if(D < 23)
      cout << D << " de setembro\nInverno\n";
    else
      cout << D << " de setembro\nPrimavera\n";
    return 0;
  }
  if(M == 10) {
    cout << D << " de outubro\nPrimavera\n";
    return 0;
  }
  
  if(M == 11) {
    cout << D << " de novembro\nPrimavera\n";
    return 0;
  }
  
  if(M == 12) {
    if(D < 22)
      cout << D << " de dezembro\nPrimavera\n";
    else
      cout << D << " de dezembro\nVerao\n";
    return 0;
  }
 
  return 0;
}
