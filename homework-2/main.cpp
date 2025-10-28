#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  //Gather triangle size from user
  int size = 0;

  cout << "Please enter the size of the triangle (1-50): ";
  cin >> size;
  
  while (size < 1 || size > 50) {
    cout << "Invalid size. Please enter a size between 1 and 50: ";
    cin >> size;
  }

  // Open file to write the triangle
  ofstream outfile("triangle.txt");

  if (outfile.is_open()) {
    //Outer Loop for 1 to size
    for (int i = 1; i <= size; ++i) {
      //Writes the asterisks for each line
      for(int j = 1; j <= i; ++j) {
        outfile << "*";
      }
      outfile << endl;
    }
    //Outer Loop for size-1 to 1
    for (int i = size - 1; i > 0; --i) {
      //Writes the asterisks for each line
      for(int j = 1; j <= i; ++j) {
        outfile << "*";
      }
      outfile << endl;
    }

    // Notify user of successful save and close
    cout << "Triangle saved to file." << endl;
    
    outfile.close();

  } else {
      cerr << "Error: Unable to open or create file 'triangle.txt'" << endl;
  }
  

  return 0;
}
