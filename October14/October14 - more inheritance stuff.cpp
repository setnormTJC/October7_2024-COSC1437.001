// October14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//reminder of "non-object-oriented" function overloading 
int addTwo(int a)
{
    return a + 2; 
}

double addTwo(double a)
{
    return a + 2; 
}

double addTwo(double a, double b)
{
    return a + 2;
}

class Rectangle
{
//private:
protected: 
    int m_length;
    int m_width; //m as in a "member" variable ("Hungarian notation")

public:
    void setDimensions(int clientSuppliedLength, int cW) //dimension is length and another "dimension" is width
    {
        m_length = clientSuppliedLength;
        m_width = cW;
    }

    int calculateArea()
    {
        return m_length * m_width; 
    }
    
};

class A
{
    int a; 

    A(int a)
        :a(a) {}
};

class Box : public Rectangle //"is-a" relationship between Box and Rectangle 
{
    int m_height; 
    //Rectangle::m
    //Box::
public: 
    /*This is an "overloaded" function*/
    void setDimensions(int clientSuppliedLength, int cW, int clientsHeight)
    {
        //Rectangle::setDimensions(clientSuppliedLength, cW); //use if Rectangle's member vars are PRIVATE
        m_length = clientSuppliedLength; 
        Rectangle::m_width = cW;         //can use if Rectangle's member vars are PROTECTED 

        m_height = clientsHeight; 
    }

    /*This function "overrides" the parent class's `calculateArea` function*/
    int calculateArea()
    {
        return 1; //just a lazy space filler - see slides for proper def. 
    }
};

int main()
{
    Rectangle r; 
    ///r.m_length 
    r.setDimensions(2, 3);

    Box someBox; 
    someBox.setDimensions(2, 4, 6);
    someBox.calculateArea(); 

    //this is related to "polymorphism" (more on this later) 

}
