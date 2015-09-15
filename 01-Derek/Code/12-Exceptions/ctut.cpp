#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



int main(){

    int number = 0;

    try{
        if(number != 0){ // if block to catch zero numbers
            cout << 2/number << endl;
        } else throw(number); // passes the number in the variable to the catch block
    } catch (int number){ // this catches the number used so type must match
        cout << number << " is not valid" << endl;
    }

    return 0;
}
