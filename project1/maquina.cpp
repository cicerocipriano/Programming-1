#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  
  unsigned int p, c;
  unsigned int t, tp = 0;
  char d;
  
  cin >> p;
  
  if (p == 1) {
    while (tp != -1) {
      cin >> d >> c;
      
      if (d == 'C')
	tp = tp + (c * 100);
      else
	tp = tp + c;
    
      if (tp < 430 && c == 0) {
	cout << "Saldo insuficiente." << endl;
	return 0;
      }
    
      if (tp >= 430 && c == 0) {
	t = tp - 430;
	if (t > 0) {
	  while (t >= 10000) {
	    cout << "C 100" << endl;
	    t = t - 10000;
	  }
	  while (t >= 5000) {
	    cout << "C 50" << endl;
	    t = t - 5000;
	  }
	  while (t >= 2000) {
	    cout << "C 20" << endl;
	    t = t - 2000;
	  }
	  while (t >= 1000) {
	    cout << "C 10" << endl;
	    t = t - 1000;
	  }
	  while (t >= 500) {
	    cout << "C 5" << endl;
	    t = t - 500;
	  }
	  while (t >= 200) {
	    cout << "C 2" << endl;
	    t = t - 200;
	  }
	  while (t >= 100) {
	    cout << "M 100" << endl;
	    t = t - 100;
	  }
	  while (t >= 50) {
	    cout << "M 50" << endl;
	    t = t - 50;
	  }
	  while (t >= 25) {
	    cout << "M 25" << endl;
	    t = t - 25;
	  }
	  while (t >= 10) {
	    cout << "M 10" << endl;
	    t = t - 10;
	  }
	  while (t >= 5) {
	    cout << "M 5" << endl;
	    t = t - 5;
	  }
	  while (t >= 1) {
	    cout << "M 1" << endl;
	    t = t - 1;
	  }

	  return 0;
	}
	else {
	  cout << "M 0" << endl;
	  
	  return 0;
	}
      }     
    }
  }
  else if (p == 2) {
    while (tp != -1) {
      cin >> d >> c;
      
      if (d == 'C')
	tp = tp + (c * 100);
      else
	tp = tp + c;
    
      if (tp < 270 && c == 0) {
	cout << "Saldo insuficiente." << endl;
	return 0;
      }
    
      if (tp >= 270 && c == 0) {
	t = tp - 270;
	if (t > 0) {
	  while (t >= 10000) {
	    cout << "C 100" << endl;
	    t = t - 10000;
	  }
	  while (t >= 5000) {
	    cout << "C 50" << endl;
	    t = t - 5000;
	  }
	  while (t >= 2000) {
	    cout << "C 20" << endl;
	    t = t - 2000;
	  }
	  while (t >= 1000) {
	    cout << "C 10" << endl;
	    t = t - 1000;
	  }
	  while (t >= 500) {
	    cout << "C 5" << endl;
	    t = t - 500;
	  }
	  while (t >= 200) {
	    cout << "C 2" << endl;
	    t = t - 200;
	  }
	  while (t >= 100) {
	    cout << "M 100" << endl;
	    t = t - 100;
	  }
	  while (t >= 50) {
	    cout << "M 50" << endl;
	    t = t - 50;
	  }
	  while (t >= 25) {
	    cout << "M 25" << endl;
	    t = t - 25;
	  }
	  while (t >= 10) {
	    cout << "M 10" << endl;
	    t = t - 10;
	  }
	  while (t >= 5) {
	    cout << "M 5" << endl;
	    t = t - 5;
	  }
	  while (t >= 1) {         
	    cout << "M 1" << endl;
	    t = t - 1;
	  }

	  return 0;
	}
	else {
	  cout << "M 0" << endl;
	  
	  return 0;
	}
      }
    }
  }
  else if (p == 3) {
    while (tp != -1) {
      cin >> d >> c;
      
      if (d == 'C')
	tp = tp + (c * 100);
      else
	tp = tp + c;
    
      if (tp < 143 && c == 0) {
	cout << "Saldo insuficiente." << endl;
	return 0;
      }
    
      if (tp >= 143 && c == 0) {
	t = tp - 143;
	if (t > 0) {
	  while (t >= 10000) {
	    cout << "C 100" << endl;
	    t = t - 10000;
	  }
	  while (t >= 5000) {
	    cout << "C 50" << endl;
	    t = t - 5000;
	  }
	  while (t >= 2000) {
	    cout << "C 20" << endl;
	    t = t - 2000;
	  }
	  while (t >= 1000) {
	    cout << "C 10" << endl;
	    t = t - 1000;
	  }
	  while (t >= 500) {
	    cout << "C 5" << endl;
	    t = t - 500;
	  }
	  while (t >= 200) {
	    cout << "C 2" << endl;
	    t = t - 200;
	  }
	  while (t >= 100) {
	    cout << "M 100" << endl;
	    t = t - 100;
	  }
	  while (t >= 50) {
	    cout << "M 50" << endl;
	    t = t - 50;
	  }
	  while (t >= 25) {
	    cout << "M 25" << endl;
	    t = t - 25;
	  }
	  while (t >= 10) {
	    cout << "M 10" << endl;
	    t = t - 10;
	  }
	  while (t >= 5) {
	    cout << "M 5" << endl;
	    t = t - 5;
	  }
	  while (t >= 1) {
	    cout << "M 1" << endl;
	    t = t - 1;
	  }

	  return 0;
	}
	else {
	  cout << "M 0" << endl;
	  
	  return 0;
	}
      }
    }
  }
  else {
    while (tp != -1) {
      cin >> d >> c;

      if (c == 0){
	cout << "Produto inexistente." << endl;
	return 0;
      }
    }
  }
  
  return 0;
}
