#include <iostream>

using namespace std;

int main (int argc, char **argv) {

  double a, b, c;

  cout << "Write your weight (in kilograms) and your height (in meters): ";
  cin >> a >> b;

  c = a / (b * b);

  if (c < 18.5) {
    cout << "Your BMI is " << c << ", and it is below average." << endl;
  }
  else if (c >= 18.5 && c < 25) {
    cout << "Your BMI is " << c << ", and it is average." << endl;
  }
  else if (c >=25 && c < 30) {
    cout << "Your BMI is " << c << ", and it is above average." << endl;
  }
  else {
    cout << "Your BMI is " << c << ". You are obese." << endl;
  }

  return 0;
}
