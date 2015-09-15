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
        void getFamily(){cout << "We are animals" << endl;};

        // when you know that a subclass will overwrite a method of this class
        // you create a virtual class to help, sometimes needed for polymorphism in functions
        // you will see an example linked from main - function "whatClassAreYou".
        virtual void getClass(){cout << "I'm an Animal" << endl;}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Dog : public Animal{
    public:
        void getClass(){cout << "I'm a Dog" << endl;}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class GermanShepard : public Dog{
    public:
        void getClass(){cout << "I'm a German Shepard" << endl;}
        void getDerived(){cout << "I'm an Animal and Dog" << endl;}
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void whatClassAreYou(Animal *animal){
    animal->getClass();
}

int main(){

    Animal *animal = new Animal;
    Dog *dog = new Dog;

    animal->getClass();
    dog->getClass();

    // these functions will only work with virtual methods
    // if the method is not "virtual" the function will display "I'm an Animal" twice
    // instead of doing the appropriate one for dog
    whatClassAreYou(animal);
    whatClassAreYou(dog);

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    Dog spot;
    GermanShepard max;

    // you can also use pointers to allow for soft coding in polymorphism
    Animal* ptrDog = &spot;
    Animal* ptrGShepard = &max;

    ptrDog -> getFamily();
    ptrDog -> getClass();

    ptrGShepard -> getFamily();
    ptrGShepard -> getClass();

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    return 0;
}
