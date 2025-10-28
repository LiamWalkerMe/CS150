#include <iostream>
#include <iomanip>

using namespace std;
  
  const int NUM_DAYS = 7;
  const int NUM_FLAVORS = 3;

  const string DAY[NUM_DAYS] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  const string FLAVOR[NUM_FLAVORS] = {"Vanilla", "Strawberry", "Chocolate"};

int main()
{
  
  int ice_creams[NUM_DAYS][NUM_FLAVORS];
  int day_total = 0;
  int flavor_total = 0;
  int total = 0;

  //Fill the array with user input
  for (int i = 0; i < NUM_DAYS; i++) {

    for (int j = 0; j < NUM_FLAVORS; j++) {
      cout << "Enter sales of " << FLAVOR[j] << " on " << DAY[i] << ": ";
      cin >> ice_creams[i][j];
    }
    
  }


  cout << endl;

  //Print the top row
  cout << "          ";
  for (int i = 0; i < NUM_DAYS; i++) {
    cout << setw(10) << DAY[i];
  }
  cout << setw(10) << "Total";
  cout << endl;

  //Print the per flavor data
  for (int j = 0; j < NUM_FLAVORS; j++) {
    cout << setw(10) << FLAVOR[j];
    for (int i = 0; i < NUM_DAYS; i++) {
      cout << setw(10) << ice_creams[i][j];

      flavor_total += ice_creams[i][j];
    }
    //Prints Flavor Totals
    cout << setw(10) << flavor_total;
    flavor_total = 0;
    cout << endl;
  }

  cout << setw(10) << "Total";
  
  //Print Day Totals
  for (int i = 0; i < NUM_DAYS; i++) {
    for (int j = 0; j < NUM_FLAVORS; j++) {
      day_total += ice_creams[i][j];
    }
      cout << setw(10) << day_total;
      total += day_total;
      day_total = 0;
  }

  cout << setw(10) << total;

  cout << endl;

  return 0;
}
