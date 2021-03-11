#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (int argc, char **argv) {

  int a, b, c;
  char d = 'Y';

  srand (time(NULL));
  
  while (d == 'Y') { 
    a = rand() %10;
    b = 10;
    c = 0;
    
    cout << "I selected a number between 0 and 9. Try to guess it." << endl;

    while (b != a) {
      cout << "Guess: ";
      cin >> b;
      c++;
    }

    cout << "You guessed it right after " << c << " tries." << endl << "Do you want to play again? (Y/N): ";
    cin >> d;
  }

  return 0;
}
