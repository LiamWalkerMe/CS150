#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  
  string filename = "";

  cout << "Enter the name of the file to read: ";
  cin >> filename;

  ifstream inputFile(filename);
  if (!inputFile) {
    cerr << "Error opening file: " << filename << endl;
    return 1;
  }

  int line;
  int sum = 0;

  while (inputFile >> line) {
    cout << "Read " << line << " from file." << endl;
    sum += line;
  }

  cout << "Total is " << sum << "." << endl;

  inputFile.close();

  return 0;
}
