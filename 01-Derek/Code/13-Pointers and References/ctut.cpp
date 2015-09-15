#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// this is how you pass variables with a pointer to a function
void makeMeYoung(int* age){
    cout << "I used to be " << *age << endl;
    *age = 21;
}

// this is how you pass variables by reference to a function
void actYourAge(int& age){
    age = 39;
}

int main(){

    int myAge = 39;
    char myGrade = 'A';

    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;

    // get the memory reference location of the variable
    cout << "myAge is located at " << &myAge << endl;

    // stores that value so that we can pass to function by reference
    int* agePtr = &myAge;
    cout << "Address of pointer " << agePtr << endl;

    // this is called de-referencing,
    // its where you want the actual value of the variable at that memory address
    // so, in this case, it would return the 39, set in myAge
    cout << "Data at memory address " << *agePtr << endl;

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++

    int badNums[5] = {4, 13, 14, 24, 34};

    // the same can be done for arrays
    int* numArrayPtr = badNums;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

    // you can then use this to go to the next item in the array
    numArrayPtr++;
    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

    // Arrays themselves are also pointers to memory so this could also be written this way
    cout << "Address " << badNums << " Value " << *badNums << endl;

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // this is how you pass with a memory pointer with the function call
    makeMeYoung(&myAge);

    // This just validates that the change does carry back
    cout << "I'm " << myAge << " years old now" << endl;

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // Another way to do referencing
    int& ageRef = myAge;

    cout << "myAge : " << myAge << endl;

    // NOTE:  When references are done this way, the reference acts like the original
    // variable that you can change directly, not like a memory address where you have
    // to convert it.
    // Contrast this with the code done with arrays to better understand this.
    ageRef++;

    cout << "myAge : " << myAge << endl;

    // another example with how this works with functions
    actYourAge(ageRef);
    cout << "myAge : " << myAge << endl;

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*
Additional notes:

Why you would use a pointer:
You would use a pointer when you don't want to have to create the reference
    on initialization of the variable, like on line 65 - int& ageRef = myAge;
Basically what this means is that you can change the value that the pointer points to
This can be handy if you need to switch between different values,
    such as when you are soft coding.


Why you would use a reference:
It can simplify the code because it does not require all of the translations
This is generally what you want to use
    unless you need one of the functionalities used by pointers

*/
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++

    return 0;
}
