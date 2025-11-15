#include <iostream>

using namespace std;



void minMaxAverage(double v1, double v2, double v3, double v4, double &minValue, double &maxValue, double &averageValue);

int main() {
    
    double value1, value2, value3, value4;
    double minValue, maxValue, averageValue;

    cout << "Enter number 1: ";
    cin >> value1;
    cout << "Enter number 2: ";
    cin >> value2;
    cout << "Enter number 3: ";
    cin >> value3;
    cout << "Enter number 4: ";
    cin >> value4;

    minMaxAverage(value1, value2, value3, value4, minValue, maxValue, averageValue);

    cout << "Minimum Value: " << minValue << endl;
    cout << "Maximum Value: " << maxValue << endl;
    cout << "Average Value: " << averageValue << endl;

    return 0;
}

void minMaxAverage(double v1, double v2, double v3, double v4, double &minValue, double &maxValue, double &averageValue) {
    minValue = v1;
    maxValue = v1;

    if (v2 < minValue) minValue = v2;
    if (v3 < minValue) minValue = v3;
    if (v4 < minValue) minValue = v4;

    if (v2 > maxValue) maxValue = v2;
    if (v3 > maxValue) maxValue = v3;
    if (v4 > maxValue) maxValue = v4;

    averageValue = (v1 + v2 + v3 + v4) / 4.0;

    
}