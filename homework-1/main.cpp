#include <iostream>

using namespace std;

int main()
{
  // Ask if user is taking a class
  char takingClass;
  cout << "Are you taking a class? (y/n): ";
  cin >> takingClass;
  // Normalize input to uppercase for easier comparison
  if (takingClass == 'y' || takingClass == 'Y') {
    // Only if taking a class, ask for grade
    char grade;
    cout << "Please enter a grade: ";
    cin >> grade;
    switch (grade) {
      case 'A':
      case 'a':
      case 'B':
      case 'b':
        cout << "Great Job!" << endl;
        break;
      case 'C':
      case 'c':
        cout << "You’re doing alright." << endl;
        break;
      case 'D':
      case 'd':
      case 'F':
      case 'f':
        cout << "You can improve." << endl;
        break;
      default:
        cout << "Invalid grade." << endl;
        break;
    }
  } else if (takingClass == 'n' || takingClass == 'N') {
    cout << "Thank you for using the system." << endl;
  } else {
    cout << "Invalid Input." << endl;
  }

  return 0;
}
