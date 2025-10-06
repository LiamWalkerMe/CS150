#include <iostream>

using namespace std;

int main() {
    int number;
    int odd = 0, even = 0;
    string input = "";

    do {
      cout << "Enter an integer: ";
      cin >> number;

      if(number % 2 == 0) {
        cout << number << " is even." << endl;
        even++;
      } else {
        cout << number << " is odd." << endl;
        odd++;
      }
      
      cout << "Do you have another integer to enter (Y/N)?: ";
      cin >> input;

    } while (input == "Y" || input == "y");

    if (odd == 0 && even == 0) {
        cout << "No numbers were entered." << endl;
    } else {
        cout << "Odd numbers: " << odd << endl;
        cout << "Even numbers: " << even << endl;
    }

    return 0;
}
