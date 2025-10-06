#include <iostream>

using namespace std;

int main() {
    int input;
    int odd = 0, even = 0;

    //Prompt user for integers until value -1 is entered
    while (input != -1) {
        cout << "Enter an integer (-1 to stop): ";
        cin >> input;

        //Check if number is odd or even and if not -1
        if (input % 2 == 0) {
            cout << input << " is even." << endl;
            even++;
        } else if (input != -1) {
            cout << input << " is odd." << endl;
            odd++;
        }
    }

    //Check for number of odds and evens
    if (odd == 0 && even == 0) {
        cout << "No numbers were entered." << endl;
    } else {
        cout << "Odd numbers: " << odd << endl;
        cout << "Even numbers: " << even << endl;
    }

    return 0;
}
