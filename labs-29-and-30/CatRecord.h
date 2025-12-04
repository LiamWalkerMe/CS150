#ifndef CATRECORD_H
#define CATRECORD_H

#include <iostream>
#include "PetRecord.h"

using namespace std;
class CatRecord : public PetRecord
{
    private:
        bool hasLongHair;
		
  	
  	public:
        void print();
        int getHasLongHair();
        void setHasLongHair(bool newHasLongHair);
        CatRecord(string initialName, int initialAge, double initialWeight, bool initialHasLongHair);
        CatRecord(bool initialHasLongHair);
        CatRecord();
  		
    	
};
#endif