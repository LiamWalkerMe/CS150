#include <iostream>
#include "DogRecord.h"
using namespace std;

void DogRecord::print() {
    PetRecord::print();
    cout << "\nHas Long Hair: " << hasLongHair;
}

int DogRecord::getHasLongHair() {
    return hasLongHair;
}

void DogRecord::setHasLongHair(bool newHasLongHair) {
    hasLongHair = newHasLongHair;
}

DogRecord::DogRecord(string initialName, int initialAge, double initialWeight, bool initialHasLongHair) : PetRecord(initialName, initialAge, initialWeight) {
    setHasLongHair(initialHasLongHair);
}

DogRecord::DogRecord(bool initialHasLongHair) {
    setHasLongHair(initialHasLongHair);
}

DogRecord::DogRecord() {
    setHasLongHair(false);
}