#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// this was not in tutorial but is needed for rand function
#include <cstdlib>

using namespace std;

int main(){

    int randNum = (rand() % 100) + 1;

    while(randNum != 100){
        cout << randNum << ", ";
        randNum = (rand() % 100) + 1;
    }

    cout << endl;

    return 0;

}
