#include <iostream>
using namespace std;

int const ARRAY_SIZE = 10;

int seqSearch(int passed_array[ARRAY_SIZE], int passed_key);

int main() {
    int array[ARRAY_SIZE] = {12, -7, 3, 17, 42, 6, 18, -15, 0, 1};
    int key;
    int slotNum;

    cout << "Enter a number to search for: ";
    cin >> key;

    slotNum = seqSearch(array, key);

    if(slotNum == -1)
        cout << key << " was not found in the array." << endl;
    else
        cout << key << " was found at slot " << slotNum << endl;

    return 0;

}

int seqSearch(int passed_array[ARRAY_SIZE], int passed_key) {

    for(int i = 0; i < ARRAY_SIZE; i++) {
        if(passed_array[i] == passed_key) {
            return i;
        }
    }
    return -1;
    

}