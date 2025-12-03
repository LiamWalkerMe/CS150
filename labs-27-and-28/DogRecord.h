#ifndef DOGRECORD_H
#define DOGRECORD_H

#include <iostream>
#include "PetRecord.h"

using namespace std;
class DogRecord : public PetRecord
{
    private:
        bool hasLongHair;
		

  	public:
        void print();
        int getHasLongHair();
        void setHasLongHair(bool newHasLongHair);
        DogRecord(string initialName, int initialAge, double initialWeight, bool initialHasLongHair);
        DogRecord(bool initialHasLongHair);
        DogRecord();
  		
    	
};
#endif