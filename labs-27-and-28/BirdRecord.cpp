#include <iostream>
#include "BirdRecord.h"
using namespace std;

void BirdRecord::print() {
  PetRecord::print();
  cout << "\nWing Span: " << wingSpan << " inches";
}

int BirdRecord::getWingSpan() {
  return wingSpan;
}

void BirdRecord::setWingSpan(int newWingSpan) {
  if (newWingSpan < 0)
  {
      cout << "Error: Negative winspan." << endl;
      exit(1);
  }
  else
      wingSpan = newWingSpan;
}

BirdRecord::BirdRecord(string initialName, int initialAge, double initialWeight, int initialWingSpan) : PetRecord(initialName, initialAge, initialWeight) {
  setWingSpan(initialWingSpan);

}

BirdRecord::BirdRecord(int initialWingSpan) {
  setWingSpan(initialWingSpan);
}

BirdRecord::BirdRecord() {
  setWingSpan(0);
}