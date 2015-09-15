#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Animal{
    // Private variables/methods are hidden from
    // everything outside the class
    private:
        int height;
        int weight;
        string name;

        // static variables are common variables shared among
        //      multiple instances of each class
        // For example, this value will keep a running total of
        //      the number of animals currently active.
        static int numOfAnimals;

    // Public variables/methods can be freely used by any
    // variable instance of the class
    public:
        int getHeight(){return height;}
        int getWeight(){return weight;}
        string getName(){return name;}

        void setHeight(int cm){height = cm;}
        void setWeight(int kg){weight = kg;}
        void setName(string animalName){name = animalName;}

        // method prototype
        void setAll(int, int, string);

        // class constructor - primary method that gets called
        // when the class gets instantiated
        Animal(int, int, string);
        // overloaded constructor to enable easy class instantiation
        Animal();

        // class destructor - method that gets called when an
        // instantiated class gets destroyed
        ~Animal();

        // static methods same as static variables
        // Also, static methods can only access static variables
        static int getNumOfAnimals(){return numOfAnimals;}

        // will print out all the information for our animal
        void toString();

    // Protected variables/methods can be used by members of
    // a class and sub classes but nothing else.
    // protected:
};

// This is where we further define the protypes and variables above
int Animal::numOfAnimals = 0;

// Method Prototype Declaration
void Animal::setAll(int height, int weight, string name){

    // Need to use "this" because no variables have been instantiated with this class yet
    // "this" will allow you to link back to the variables in the main part of this class
    this -> height = height;
    this -> weight = weight;
    this -> name = name;

    // the tutorial says to place this here but this is public, which means
    // it can be called outside of the constructor, moving to contstructor only
    // Animal:numOfAnimals++;
}

// Primary Constructor Declaration
Animal::Animal(int height, int weight, string name){
    // Need to use "this" because no variables have been instantiated with this class yet
    // "this" will allow you to link back to the variables in the main part of this class
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    Animal::numOfAnimals++;
}

// Overloaded Constructor Declaration
Animal::Animal(){
    Animal::numOfAnimals++;
}

// De-constructor Declaration
Animal::~Animal(){
    cout << "Animal " << this -> name << " was destroyed.  :(" << endl;
}

// Method Prototype Declaration
void Animal::toString(){
    cout << this -> name << " is " <<
            this -> height << " cms tall and " <<
            this -> weight << " kgs in weight." << endl;
}

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Dog : public Animal{

    private:
        // my compiler does not support setting non-static values this way
        // it also does not support setting non-static values the way i did
        //      above for number of animals
        // Will instead set it as a default for the constructor
        // string sound = "Woof";
        string sound;

    public:
        void getSound(){ cout << sound << endl;}

        // Main Constructor
        Dog(int, int, string, string);
        // Overloaded Constructor
        // this also calls the overloaded constructor in the main animal "super" class
        Dog() : Animal(){this -> sound = "Woof";};

        // Overwriting the toString function to include the sound function
        void toString();
};

// Primary constructor
// NOTE:  The colon at the end of the first line indicates that it will be calling
// the "super" class to reuse the code there so that you do not have to type it again.
Dog::Dog(int height, int weight, string name, string bark = "Woof"):
Animal(height, weight, name){
    this -> sound = bark;
}

void Dog::toString(){
    // NOTE: Since these are private values in the super class
    //       you need to use the "get" methods for each
    cout << this -> getName() << " is " <<
            this -> getHeight() << " cms tall and " <<
            this -> getWeight() << " kgs in weight and says " <<
            this -> sound << endl;
}

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main(){

    // First Instantiation of Animal class
    Animal fred;
    fred.setHeight(33);
    fred.setWeight(10);
    fred.setName("Fred");
    cout << fred.getName() << " is " <<
            fred.getHeight() << " cms tall and " <<
            fred.getWeight() << " kgs in weight." << endl;

    // quick check to validate that the static values also work for subclasses
    cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

    // Second Instantiation of Animal class
    Animal tom (36, 15, "Tom");
    tom.toString();

    // quick check to validate that the static values also work for subclasses
    cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // First Instantiation of Dog class
    Dog spot(38, 16, "Spot", "Woof");

    // some quick tests to show that the Dog methods work
    spot.getSound();
    spot.toString();

    // Calls superclass to show how you get around overwritten methods
    // the :: notation is called the "scope operator"
    spot.Animal::toString();

    // quick check to validate that the static values also work for subclasses
    cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    return 0;
}
