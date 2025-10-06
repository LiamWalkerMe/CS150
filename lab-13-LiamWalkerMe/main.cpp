#include <iostream>

using namespace std;

int main()
{
  double* myArray = new double[1000]; 

  for (int i = 0; i < 1000; ++i) {
      myArray[i] = i * 7.5;
  }

  int input = 0;

  cout << "Enter an array slot number from 0-999: ";
  cin >> input;

  if (input >= 0 && input < 1000) {
      cout << "Value at array slot " << input << " is " << myArray[input] << endl;
  } else {
      cout << "Value out of range." << endl;
  }

  return 0;
}
