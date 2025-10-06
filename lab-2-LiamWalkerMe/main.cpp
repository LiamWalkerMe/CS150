#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    cout << boolalpha;
    
    //Gather name from user
    string name = "";
	cout << "Please enter your name: ";
	cin >> name;
	
	//Display name
	cout << "Hi " << name << endl;
	
	//Gather if user is a CS major
	bool csMajor;
	cout << "Are you a CS major? (1 for yes, 0 for no): ";
	cin >> csMajor;
	
	//Display if CS major
	cout << "CS Major: " << csMajor << endl;
	
	//Gather favority punctuation mark
	char punctuation;
	cout << "Please enter your favorite punctuation mark: ";
	cin >> punctuation;
	
	//Display punctuation mark
	cout << "Your favority punctuation mark is: " << punctuation << endl;
	
	//Gather two integers
	int integer1;
	int integer2;
	
	cout << "Please enter a number: ";
	cin >> integer1;
	
	cout << "Please enter another number: ";
	cin >> integer2;
	
	//Display numbers divded
	cout << "Your two numbers divided as a decimal are: " << (double)integer1/integer2 << endl;
	cout << "Your two numbers divided as a modulus are: " << integer1/integer2 << "R" << integer1%integer2 << endl;
	
	

	return 0;


}