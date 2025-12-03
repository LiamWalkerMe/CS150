#include <iostream>
#include "PetRecord.h"
#include "DogRecord.h"
#include "CatRecord.h"
#include "BirdRecord.h"
using namespace std;

int main()
{
  PetRecord petTest("Default", 2, 43.5);
  DogRecord dogTest("Dogoo", 43, 23.5, true);
  CatRecord catTest("Cat", 41, 3.234, true);
  BirdRecord birdTest("Fido", 43, 45, 10);

  cout << endl;
  petTest.print();
  cout << endl;
  cout << endl;
  dogTest.print();
  cout << endl;
  cout << endl;
  catTest.print();
  cout << endl;
  cout << endl;
  birdTest.print();
  cout << endl;
  cout << endl;

  dogTest.setHasLongHair(false);
  cout << "Dog has long hair? " << dogTest.getHasLongHair() << endl;
  catTest.setHasLongHair(false);
  cout << "Cat has long hair? " << catTest.getHasLongHair() << endl;
  birdTest.setWingSpan(20);
  cout << "Bird wing span: " << birdTest.getWingSpan() << " inches" << endl;
  cout << endl;



  return 0;
}