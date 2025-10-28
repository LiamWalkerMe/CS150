#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  double price = 0;
  double money = 0;
  double change = 0;
  int cents = 0;
  
  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;

  char repeat;

   ofstream file("transactions.txt"); 

  do {
    // Ask user for price
    cout << "Enter price of item: $";
    cin >> price;

    cout << "Enter amount of money inserted: $";
    cin >> money;
    
    //Checks if money provided is adequite

    if (money < price) {

      cout << "Error: Not enough money inserted." << endl;


    } else {

      //Write to file
      file << left << setw(50) << "Price: $";
      file << price << endl;
      
      //Write to file
      file << left << setw(50) << "Money inserted: $";
      file << money << endl;



      change = money - price;

      if(change != 0) {
        cents = static_cast<int>(change * 100 + 0.5);  

        quarters = cents / 25;  
        cents %= 25;               
        
        dimes = cents / 10;   
        cents %= 10;                
        
        nickels = cents / 5;    
        cents %= 5;                 
        
        pennies = cents;        
        
        cout << "Change: " << endl;
        cout << "Quarters: " << quarters << "\n"
            << "Dimes: " << dimes << "\n"
            << "Nickels: " << nickels << "\n"
            << "Pennies: " << pennies << endl;  



        //Write to file
        file << "Change:" << endl;

        file << left << setw(50) << "Quarters: $";
        file << quarters << endl;

        file << left << setw(50) << "Dimes: $";
        file << dimes << endl;

        file << left << setw(50) << "Nickles: $";
        file << nickels << endl;

        file << left << setw(50) << "Pennies: $";
        file << pennies << endl;

      } else {
        cout << "No Change" << endl;
        file << "No Change:" << endl;
      }

      file << "********************" << endl << endl;

    }

    cout << "Do you have another entry?: ";
    cin >> repeat;



  } while (repeat == 'Y' || repeat == 'y');


  file.close();


  return 0;
}
