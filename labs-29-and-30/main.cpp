#include <iostream>
#include "PetRecord.h"
#include "DogRecord.h"
#include "CatRecord.h"
#include "BirdRecord.h"
using namespace std;

int main()
{
  	PetRecord *a = new PetRecord();
	int temp;
	cout << "Do you want a cat (1), dog (2), or bird (3)?\n";
	cin >> temp;

	switch(temp) {
	case 1:
		a = new CatRecord;
		break;
	case 2:
		a = new DogRecord;
		break;
	case 3:
		a = new BirdRecord;
		break;
	default:
		cout << "Error: Invalid Choice." << endl;
		exit(1);
	}
	
	a->print();
	
	delete a;
	
  return 0;
}