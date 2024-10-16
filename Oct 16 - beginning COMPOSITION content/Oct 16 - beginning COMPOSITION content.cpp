// Oct 16 - beginning COMPOSITION content.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using std::string; 
using std::cout;

class Furniture
{
    double cost; 
    std::string use; //ex: sleeping, sitting
};

class Room
{
    int w, length; 

    Furniture furnitureObject; //this is called "composition" 


};

struct Tail
{ 
    string pattern; //ex: striped (as in a zebra), spotted as in 
    bool isBushy; 
};

struct Nose
{
    bool isPointy; 
    char capabilityRating; //ex: 'P' for POOR, 'A' for average, 'G' for good
    double temperature; //ex: dogs often have "cold" noses 
};

class Dog
{
    //private:
    string name; 
    Tail dogTailObject; 
    Nose dogNoseObject; 

public: 
    Dog
    (
        string name,
        Tail dogTailObject, 
        Nose dogNoseObject
    )
        :name(name), dogTailObject(dogTailObject), dogNoseObject(dogNoseObject)
    {

    }

    void printDogDetails()
    {
        cout << "Name is: " << name << "\n";
        cout << "Tail attribs: \n";
        cout << std::boolalpha;
        cout << dogTailObject.isBushy << "\n";
        cout << dogTailObject.pattern << "\n";

        cout << "Nose attribs: \n";
        cout << dogNoseObject.capabilityRating << "\n";
        cout << dogNoseObject.isPointy << "\n";
        cout << dogNoseObject.temperature << "\n";
    }
};

class RPGCharacter
{
    string name; 
    int strength; 
    //etc., etc., etc. 
};

class RPGTeam
{
    std::vector<RPGCharacter> theTeam; //another example of "composition" 

    void castGroupSpell(); 
    //etc.etc.etc. 
};

int main()
{
    Tail dorisTail; 
    dorisTail.isBushy = true; 
    dorisTail.pattern = "uniform pattern";

    Nose dorisNose;
    dorisNose.capabilityRating = 'A'; 
    dorisNose.isPointy = true; 
    dorisNose.temperature = 60.5; //fahrenheit

    Dog myDog
    {
        "Doris",
        dorisTail, // tail attribs: true means her tail is bushy
        dorisNose //nose attribs (true means her nose is pointy) 
    };

    myDog.printDogDetails(); 


        //temperature of her nose is 60.2 degF
    //std::cout << "Hello World!\n";
}
