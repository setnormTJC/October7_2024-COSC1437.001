// October7_2024-COSC1437.001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::string; 
using std::cout; 


class Person
{
public: 
    string firstName;
    //string middleName; 
    string lastName; 


};


class Employee : public Person //the SINGLE colon means "inherits from" 
{
public: 

    double salary; 
};

/*Vehicle will be the PARENT/BASE classe of some other, "derived"/children classes*/
class Vehicle
{
    string cargoName; //like a person, cargo containers 
    double cargoPayload; //ex: how many pounds (kgs?) 

    double massOfVehicle; 

    int maxSpeed; 

public: 
    Vehicle(string cargoName, double cargoPayload, double massOfVehicle, int maxSpeed)
        :cargoName(cargoName), cargoPayload(cargoPayload), massOfVehicle(massOfVehicle), maxSpeed(maxSpeed)
    {

    }

    void print() const 
    {
        cout << "Cargo Name: " << cargoName << "\n";
        cout << "Cargo Payload: " << cargoPayload << " lbs\n";
        cout << "Mass of Vehicle: " << massOfVehicle << " lbs\n";
        cout << "Max Speed: " << maxSpeed << " mph\n";
    }
};

class Truck : public Vehicle
{
    bool hasFourWheels; //dually
    bool isCustomised; 
    double bedLength; 

public: 
    //Truck() 
    //{

    //};

};

class Airplane : public Vehicle
{
    bool isJetEngine; 
    double wingSpan; 

public: 
    Airplane(string cargoName, double cargoPayload, double massOfVehicle, int maxSpeed, 
        bool isJetEngine, double wingSpan)

    : Vehicle(cargoName, cargoPayload, massOfVehicle, maxSpeed), isJetEngine(isJetEngine), wingSpan(wingSpan) {}

    /*This print function will OVERRIDE the parent class's (Vehicle) print function*/
    void print() //override
    {
        Vehicle::print(); //call the parent function's print method/function 
        //and then print the remaining member variables that are particular to an Airplane object:
        cout << std::boolalpha << "Is this plane a jet engine: " << isJetEngine << "\n";
        cout << "The wingspan is " << wingSpan << " feet\n";

    }
};


int main()
{

    Vehicle someGenericVehicle{ "shoes", 111.11, 2222.22, 10 };
    cout << "The GENERIC vehicle attributes:\n";
    someGenericVehicle.print(); 

    cout << "\n\n\nThe Cessna 150 attributes:\n";

    Airplane cessna150{ "people and not much else!", 450.00, 3'000.50, 80, false, 35.5 };
    cessna150.print(); 

    //Employee employeeOfTheMonth; 
    //employeeOfTheMonth.firstName = "Tupac";
    ////tupac.
    //employeeOfTheMonth.lastName = "Shakur";
    //employeeOfTheMonth.salary = 8'675'309.01; 



    std::cout << "Hello World!\n";
}
