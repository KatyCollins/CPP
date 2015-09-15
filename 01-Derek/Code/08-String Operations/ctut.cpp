#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// needed for conversion
#include <sstream>

using namespace std;

int main(){
    // old way of creating string
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    // new way to create strings
    string birthdayString = " Birthday";

    cout << happyArray + birthdayString << endl;

    string yourName;
    cout << "what is your name? ";
    getline(cin, yourName);  // takes user input
    cout << "hello " << yourName << endl;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++

    double eulersConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "What is Euler's Constant? ";
    getline(cin, eulerGuess);
    // convert to double
    // eulerGuessDouble = stod(eulerGuess);

    // my compiler will not work with stod, using stringstream instead
    stringstream eulerss;
    eulerss << eulerGuess;
    eulerss >> eulerGuessDouble;

    if(eulerGuessDouble == eulersConstant){
        cout << "You are right" << endl;
    } else {
        cout << "You are wrong" << endl;
    }

// +++++++++++++++++++++++++++++++++++++++++++++++++++++

    cout << "Size of string " << eulerGuess.size() << endl;
    cout << "Is string empty " << eulerGuess.empty() << endl;
    cout << eulerGuess.append(" was your guess") << endl;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++

    string dogString = "dog";
    string catString = "cat";

    cout << dogString.compare(catString) << endl; // dog comes after cat so will show as 1
    cout << dogString.compare(dogString) << endl; // dog is same as dog so will show as 0
    cout << catString.compare(dogString) << endl; // cat comes before dog so will show as -1

// +++++++++++++++++++++++++++++++++++++++++++++++++++++

    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;

    // manual change to take my first name 0 = index, 4 = number of characters needed
    string firstName = wholeName.assign(wholeName, 0, 4);
    cout << firstName << endl;

    // use this to find the location of a substring in a string,
    // 0 is the index of the starting point
    int lastNameIndex = yourName.find("Collins", 0);
    cout << "Index for last name " << lastNameIndex << endl;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++

    // insert middle name at index 4, IE - right after my first name
    yourName.insert(4, " Sage");
    cout << yourName << endl;

    // erase middle name just added, first 5 is the index, second 5 is the number of chars
    // remember, you have to also delete the extra space created so need 5
    yourName.erase(5, 5);
    cout << yourName << endl;

    // replace last name with maximus, my last name is 7 chars so need to update from tutorial
    // My last name also starts at index 5 with the middle name removed
    yourName.replace(5, 7, "Maximus");
    cout << yourName << endl;



    return 0;

}
