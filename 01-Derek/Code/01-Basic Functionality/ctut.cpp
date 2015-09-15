#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

    // simple output
    cout << "Hello World" << endl;

    // example data setup
    const double PI = 3.1415926535;
    char myGrade = 'A';
    bool isHappy = true;
    int myAge = 39;
    float favNum = 3.1415926535;
    double otherFavNum = 1.6180339887;

    // simple output
    cout << "Favorite number " << favNum << endl;

    // how much space each variable type uses
    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;
    cout << "Size of bool " << sizeof(isHappy) << endl;
    cout << "Size of float " << sizeof(favNum) << endl;
    cout << "Size of double " << sizeof(otherFavNum) << endl;

    // Largest int allowed is 2147483647
    int largestInt = 2147483648;
    cout << "Largest int " << largestInt << endl;

    // type casting
    cout << "4 / 5 = " << 4/5 << endl;
    cout << "4 / 5 = " << (float)4/5 << endl;



    return 0;

}
