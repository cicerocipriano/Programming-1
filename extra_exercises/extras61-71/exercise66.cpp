#include <iostream>

using namespace std;

char *strcpy (char *destination, const char *source) {

  int aux = 0;

  for (int i = 0; source[i] != '\0'; i++) {
    destination[i] = source[i];
    aux++; 
  }
  destination[aux] = '\0';

  return destination;
}

char *strcat (char *destination, const char *source) {

  int aux1 = 0;

  for (int i = 0; destination[i] != '\0'; i++) {
    aux1++;
  }

  int aux2 = aux1;

  for (int i = 0; source[i] != '\0'; i++) {
    destination[aux1 + i] = source[i];
    aux2++;
  }
  destination[aux2] = '\0';
  
  return destination;
}

int strcmp (const char *str1, const char *str2) {

  int aux1 = 0, aux2 = 0, aux3 = 0;

  for (int i = 0; str1[i] != '\0'; i++) {
    aux1++;
  }
  for (int i = 0; str2[i] != '\0'; i++) {
    aux2++;
  }

  if (aux1 > aux2) {
    return 1;
  }
  else if (aux1 < aux2) {
    return -1;
  }
  else {
    for (int i = 0; i < aux1; i++) {
      if (str1[i] > str2[i]) {
	return 1;
      }
      else if (str1[i] < str2[i]) {
	return -1;
      }
    }

    return 0;
  }
}

int main (int argc, char **argv) {
  
  char a[50], b[50];
  
  cout << "Write a word: ";
  cin >> a;

  strcpy(b,a);

  cout << b << endl;

  strcat(a,b);

  cout << a << endl;

  cout << strcmp(a,b) << endl;

  return 0;
}
