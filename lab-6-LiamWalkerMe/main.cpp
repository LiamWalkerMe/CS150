#include <iostream>

using namespace std;

int main()
{
  int month = 0;

  cout << "Please enter the current month in the form of a number: ";
  cin >> month;
  switch (month) {
    
    case 1:
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12:
      cout << "There are 31 days in this month" << endl;
      break;
    
    case 4:
    case 6:
    case 9:
    case 11:
      cout << "There are 30 days in this month" << endl;
      break;

    case 2:
      cout << "There are 28 days in this month" << endl;
      break;
    
    default: 
      cout << "Error: You have entered an invalid month" << endl;
      break;
    
  }

  return 0;
}
