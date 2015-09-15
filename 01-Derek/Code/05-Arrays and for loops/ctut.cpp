#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

    // example arrays
    int myFavNums[5];
    int badNums[5] = {4, 13, 14, 24, 34};

    cout <<  "Bad Number 1: " << badNums[0] << endl;


    // multi dimensional arrays
    char myName[2][7] = {{'K', 'a', 't', 'y'},
                         {'C', 'o', 'l', 'l', 'i', 'n', 's'}};

    cout << "2nd letter in 2nd array = " << myName[1][1] << endl;

    myName[0][2] = 'e';

    cout << "New value " << myName[0][2] << endl;


    // basic for loop
    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    // stacked loops for array
    for(int j = 0; j < 2; j++){
        for(int k = 0; k < 7; k++){
            cout << myName[j][k];
        }
        cout << endl;
    }


    return 0;

}
