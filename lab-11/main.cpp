#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  
  const char* filename = "sentence.txt";

  string input = "";

  cout << "Please enter a sentence: ";
  getline(cin, input);


  ofstream outfile(filename);

  if (outfile.is_open()) {

      outfile << input << endl;

      cout << "Your sentence has been written to '" << filename << "'." << endl;

      outfile.close();
  } else {
      cerr << "Error: Unable to open or create file '" << filename << "'." << endl;
  }

  return 0;
}
