#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// needed for conversion
#include <sstream>


using namespace std;

int main(){

    string numberGuessed;
    int intNumberGuessed = 0;

    do{
        cout << "Guess between 1 and 10: ";
        getline(cin, numberGuessed);
        // convert string to integer
        // intNumberGuessed = stoi(numberGuessed);

        // my compiler will not work with stoi, using stringstream instead
        stringstream numberss;
        numberss << numberGuessed;
        numberss >> intNumberGuessed;

        cout << intNumberGuessed << endl;
    }while(intNumberGuessed != 4);

    cout << "You win" << endl;

    return 0;

}
