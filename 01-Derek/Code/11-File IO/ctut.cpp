#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



int main(){

    // example data to feed to the file
    string steveQuote = "A day without sunshine is like, you know, night";

    // open the file path
    // NOTE: if an absolute path not specified,
    //       it will create the file in the program's local directory.
    ofstream writer("stevequote.txt");

    // checks to see if you were able to open the file
    if(!writer){
        cout << "Error opening file" << endl;
        return -1; // ends program with error
    } else {
        writer << steveQuote << endl;  // write to file
        writer.close(); // close file when done writting
    }

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // opens file again to append it
    ofstream writer2("stevequote.txt", ios::app);

    // checks to see if you were able to open the file
    if(!writer2){
        cout << "Error opening file" << endl;
        return -1; // ends program with error
    } else {
        writer2 << "\n -Steve Martin" << endl;  // write to file
        writer2.close(); // close file when done writting
    }

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // open a file for reading
    char letter;
    ifstream reader("stevequote.txt");

    // checks to see if you were able to open the file
    if(!reader){
        cout << "Error opening file" << endl;
        return -1; // ends program with error
    } else {
        for(int i=0; ! reader.eof(); i++){
            reader.get(letter); // grabs letter from the file
            cout << letter; // outputs the letter to the screen
        }
        // adds an endline at the end of the file
        cout << endl;
        reader.close();
    }

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    return 0;
}
