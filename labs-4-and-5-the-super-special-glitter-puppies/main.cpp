#include <iostream>

using namespace std;

int main()
{
  cout << "Please enter an integer: ";
  int input = 0;
  cin >> input;

  if(input % 2 == 0) {
    
    if((input % 3 == 0) && (input % 5 == 0)) {
      cout << input << " is divisible by 5 and 3." << endl;
    } else {
      cout << input << " is not divisible by 5 and 3." << endl;
    }

  } else {
    
    if(input >= 0) {
      cout << input << " is positive." << endl;
    } else {
      cout << input << " is negative." << endl;
    }

  }

  if(input >= -100 && input <= 100) {
    cout << input << " is between -100 and 100." << endl;
  } else {
    cout << input << " is not between -100 and 100." << endl;
  }

  return 0;
}
