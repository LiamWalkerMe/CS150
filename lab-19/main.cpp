#include <iostream>

using namespace std;

void treeTop() {
  cout << "   ^   " << endl;
  cout << "  / \\  " << endl;
  cout << " /   \\ " << endl;
  cout << "/_____\\ " << endl;
}

void treeTrunk(int height) {
  for (int i = 0; i < height; ++i) {
    cout << "  | |   " << endl;
  }
}

void drawTrees(int numberOfTrees, int heightOfTrees) {
  static int count = 0;
  count += numberOfTrees;

  for (int i = 0; i < numberOfTrees; ++i) {
    treeTop();
    treeTrunk(heightOfTrees);
    cout << endl;
  }

  cout << "There are currently " << count << " trees in your forest." << endl;
}

int main()
{
  char repeat;

  do {

    int numberOfTrees = 0;
    int heightOfTrees = 0;

    cout << "Enter tree height: ";
    cin >> heightOfTrees;

    cout << "Enter number of trees: ";
    cin >> numberOfTrees;

    drawTrees(numberOfTrees, heightOfTrees);

    

    cout << "Do you have another entry?: ";
    cin >> repeat;



  } while (repeat == 'Y' || repeat == 'y');
  

}