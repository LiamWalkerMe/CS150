#include <iostream>
using namespace std;

int main() {
struct Student {
    int studentID;
    double gpa;
    string fullName;
    int units;
};

Student students[2];

for (int i = 0; i < 2; i++) {
    cout << "Enter info for student " << i + 1 << ":" << endl;


    // NAME //
    string name;
    cout << "   Full name: ";
    getline(cin, name);
    while ((name.empty())) {
        cout << "   Invalid input - Name cannot be empty. Full name: ";
        getline(cin, name);
    }

    students[i].fullName = name;

    // ID //
    int id;
    cout << "   ID: (ID must be 4 digits (1000-9999)): ";
    cin >> id;

    while(id < 1000 || id > 9999) {
        cout << "   Invalid input - ID must be 4 digits (1000-9999): ";
        cin >> id;
    }

    cin.ignore();
    students[i].studentID = id;

    // GPA //
    double gpa;
    cout << "   GPA (0.0 - 4.0): ";
    cin >> gpa;

    while (gpa < 0 || gpa > 4.0) {
        cout << "   Invalid input - GPA must be between 0 and 4 inclusive: ";
        cin >> gpa;
    }

    cin.ignore();
    students[i].gpa = gpa;

    // UNITS //
    int units;
    cout << "   Units (positive integer): ";
    cin >> units;

    while(units < 0) {
        cout << "   Invalid input - enter a positive integer for units: ";
        cin >> units;
    }

    cin.ignore();
    students[i].units = units;

    
}

cout << endl;

cout << "You entered:\n";
for (int i = 0; i < 2; ++i) {
    cout << "Student " << (i + 1) << ":\n";
    cout << "Name: " << students[i].fullName << '\n';
    cout << "ID: " << students[i].studentID << '\n';
    cout << "GPA: " << students[i].gpa << '\n';
    cout << "Units: " << students[i].units << "\n\n";
}
   
}