#include <iostream>

using namespace std;

int main()
{
    //Intitialize variables
    int input1, input2;
    
    
    //Prompt and store variables from user    
    std::cout << "Enter an integer: ";
    std::cin >> input1;
    
    std::cout << "Enter another integer: ";
    std::cin >> input2;
    
    //Addition
    std::cout << input1 << "+" << input2 << "=" << input1 + input2 << endl;
    
    //Subtraction
    std::cout << input1 << "-" << input2 << "=" << input1 - input2 << endl;
    
    //Multiplication
    std::cout << input1 << "*" << input2 << "=" << input1 * input2 << endl;
    
    //Division
    //Error check for 0 as denominator
    if(input2 == 0) {
        std::cout << "Cannot divide by 0";
    } else {
        std::cout << input1 << "/" << input2 << "=" << input1 / input2 << "r" << input1%input2;
    }
  
    

	return 0;
}