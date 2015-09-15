#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// basic function
int addNumbers(int firstNum, int secondNum = 0){
    int combinedValue = firstNum + secondNum; // not needed but shown for demonstration
    return combinedValue;
}

// overload the function with another set of input options
int addNumbers(int firstNum, int secondNum, int thirdNum){
    return firstNum + secondNum + thirdNum;
}

// recursive function that calls itself
int getFactorial(int number){
    int sum;
    if(number==1) sum = 1;
    else sum = getFactorial(number - 1) * number;
    return sum;
}


int main(){

    cout << addNumbers(1) << endl;
    cout << addNumbers(1, 2) << endl;
    cout << addNumbers(1, 5, 6) << endl;

    cout << "The factorial of 3 is " << getFactorial(3) << endl;

    return 0;

}
