#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Animal{
    public:
        virtual void makeSound(){cout << "The Animal says GRR!" << endl;}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Dog : public Animal{
    public:
        void makeSound(){cout << "The Dog says WOOF!" << endl;}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Cat : public Animal{
    public:
        void makeSound(){cout << "The Cat says MEOW!" << endl;}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Fox : public Animal{
    public:
        void makeSound(){cout << "WHAT DOES THE FOX SAY?!?!?!" << endl;}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*
Additional Note:

He said as a homework assignment you could look into how you would set up
the "Animal" class as a capability class that exists only to be derived from.

This is actually called "Capability Query" and I will save the notes for it
Here is the URL if they get lost:

https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Capability_Query

He goes on to explain it with the car example below.

*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Car{
    public:
        // he lists these as "int" but they will not be returning anything later
        virtual void getNumWheels(){};
        virtual void getNumDoors(){};
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class StationWagon : public Car{
    public:
        void getNumWheels(){cout << "Station wagon has 4 wheels" << endl;}
        void getNumDoors(){cout << "Station wagon has 4 doors" << endl;}

        // empty constructor/destructor
        StationWagon(){};
        ~StationWagon(){};
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main(){

    // this is again using pointers to make the coding easier
    Animal* pDog = new Dog;
    Animal* pCat = new Cat;
    Animal* pFox = new Fox;

    pCat -> makeSound();
    pDog -> makeSound();
    pFox -> makeSound();

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // this is again using pointers to make the coding easier
    Car* pSWagon = new StationWagon;

    pSWagon -> getNumWheels();
    pSWagon -> getNumDoors();

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    return 0;
}
