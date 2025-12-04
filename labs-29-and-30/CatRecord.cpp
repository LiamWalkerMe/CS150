#include <iostream>
#include "CatRecord.h"
using namespace std;

void CatRecord::print() {
    PetRecord::print();
    cout << "\nHas Long Hair: " << hasLongHair;

}

int CatRecord::getHasLongHair() {
    return hasLongHair;
}

void CatRecord::setHasLongHair(bool newHasLongHair) {
    hasLongHair = newHasLongHair;
}

CatRecord::CatRecord(string initialName, int initialAge, double initialWeight, bool initialHasLongHair) : PetRecord(initialName, initialAge, initialWeight) {
    setHasLongHair(initialHasLongHair);
}

CatRecord::CatRecord(bool initialHasLongHair) {
    setHasLongHair(initialHasLongHair);
}

CatRecord::CatRecord() {
    setHasLongHair(false);
}