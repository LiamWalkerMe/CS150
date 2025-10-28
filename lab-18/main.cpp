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
  for (int i = 0; i < numberOfTrees; ++i) {
    treeTop();
    treeTrunk(heightOfTrees);
    cout << endl;
  }
}

int main()
{
  int numberOfTrees = 0;
  int heightOfTrees = 0;

  cout << "Enter tree height: ";
  cin >> heightOfTrees;

  cout << "Enter number of trees: ";
  cin >> numberOfTrees;

  drawTrees(numberOfTrees, heightOfTrees);

}