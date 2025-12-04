#ifndef BIRDRECORD_H
#define BIRDRECORD_H

#include <iostream>
#include "PetRecord.h"

using namespace std;
class BirdRecord : public PetRecord
{
		
    private:
        int wingSpan;
  	
    public:
        void print();
        int getWingSpan();
        void setWingSpan(int newWingSpan);
        BirdRecord(string initialName, int initialAge, double initialWeight, int initialWingSpan);
        BirdRecord(int initialWingSpan);
        BirdRecord();
        
    	
};
#endif