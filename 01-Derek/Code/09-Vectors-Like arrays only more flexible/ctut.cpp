#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// needed for conversion
#include <sstream>

using namespace std;

int main(){

    vector <int> lotteryNumVect(10);  // starts vector with 10 zero values
    int lotteryNumArray[5] = {4, 13, 14, 24, 34};

    // vector assignment goes as follows:
    // first values is where you want it to start filling,
    //      in this case the begining of the vector
    // which array you want to take from
    // how many nodes you want to take from the array
    //      in this case, we are only taking the first 3 numbers
    // NOTE: this inserts the values without eliminating the zeros
    // so this increases size to 13 values
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

    // same as above, only adding the number 44 to the 5th index position
    // also same as above, this expands the vector to 14 values
    lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

    // getting vector values
    // the 2 is an index number, so in this case we are getting the 3rd number
    cout << lotteryNumVect.at(2) << endl;
    cout << lotteryNumVect.at(5) << endl;

    // adds the number 64 to the last index in the vector
    // also same as above, this expands the vector to 15 values
    lotteryNumVect.push_back(64);
    cout << "Last Value " << lotteryNumVect.back() << endl;

    // removes last number from the vector, which will take you back to the previous
    // index, which in this case is one of the zero values originally created
    // also same as above, this reduces the vector to 14 values
    lotteryNumVect.pop_back();
    cout << "Last Value " << lotteryNumVect.back() << endl;

    // you can also display the first value
    cout << "First Value " << lotteryNumVect.front() << endl;

    // boolean - is the vector empty? 0 or 1
    cout << "Vector is empty " << lotteryNumVect.empty() << endl;

    // boolean - is the vector empty? 0 or 1
    cout << "Vector size " << lotteryNumVect.size() << endl;

    // to show this in more detail (will add screenshot for reference):
    for(int i=0; i < lotteryNumVect.size(); i++){
        cout << lotteryNumVect.at(i) << endl;
    }

    return 0;

}
