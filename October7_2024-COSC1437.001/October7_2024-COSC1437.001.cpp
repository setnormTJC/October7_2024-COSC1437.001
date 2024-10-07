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
int main()
{

    Employee tupac; 
    tupac.firstName = "Tupac";
    //tupac.

    std::cout << "Hello World!\n";
}
