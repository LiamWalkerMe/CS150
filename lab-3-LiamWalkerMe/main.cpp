#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string item1, item2, item3;
    double price1, price2, price3;
    double taxRate;
    
    cout <<"Enter the name of your first item: ";
    getline(cin, item1);
    
    cout <<"Now enter its price: ";
    cin >> price1;
   
    
    cout <<"Enter the name of your second item: ";
    cin.ignore();
    getline(cin, item2);
   
    
    cout <<"Now enter its price: ";
    cin >> price2;
    
    cout <<"Enter the name of your third item: ";
    cin.ignore();
    getline(cin, item3);
   
    cout <<"Now enter its price: ";
    cin >> price3;
    
    cout <<"Enter tax rate: ";
    cin >> taxRate;
  
    cout << fixed << setprecision(2) << endl;
    
    
    cout << "******************************" << endl;
    cout << left << setw(20) << item1 << "$" << right << setw(9) << price1 << endl;
    cout << left << setw(20) << item2 << "$" << right << setw(9) << price2 << endl;
    cout << left << setw(20) << item3 << "$" << right << setw(9) << price3 << endl;
    cout << endl;
    
    double subtotal = price1+price2+price3;
    
    cout << left << setw(20) << "Subtotal" << "$" << right << setw(9) << subtotal << endl;
    cout << left << setw(20) << "Tax" << "$" << right << setw(9) << subtotal*taxRate << endl;
    cout << left << setw(20) << "Tax" << "$" << right << setw(9) << (subtotal*taxRate) + subtotal << endl;
        

    cout << "******************************" << endl;
    cout << "Thank you for shopping with us" << endl;
    cout << "******************************" << endl;
    

    
    return 0;
}