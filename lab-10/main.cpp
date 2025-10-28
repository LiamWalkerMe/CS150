#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Print the top
  cout << "    ";
  for (int col = 1; col <= 9; ++col) {
    cout << setw(4) << col;
  }
  cout << endl;
  cout << "    " << string(4 * 9, '-') << endl;

  // Print the table rows
  for (int row = 1; row <= 9; ++row) {
    cout << setw(2) << row << " |";
    for (int col = 1; col <= 9; ++col) {
      cout << setw(4) << row * col;
    }
    cout << endl;
  }

  return 0;
}
