#include <iostream>

using namespace std;

double dist(double a, double b) {
  double d = a - b;
  if (d < 0) {
    d = -d;
  }
  return d;
}

int main()
{
  double number;
  double number2;

  cout << "Input a number: ";
  cin >> number;

  cout << "Input another number: ";
  cin >> number2;

  double d = dist(number, number2);

  cout << "The distance between " << number << " and " << number2 << " is " << d << endl;

  return 0;
}