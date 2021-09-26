#include <iostream>

using namespace std;
//
//Constructor: It is a special type of function because constructor
//name and class name both are same.
//It is used to initialize a class / instance variables.
//It is called when class's object is created.

class Add {

    int a, b;

public:
//    Add() // default constructor
//    {
//        a = 10;
//        b = 20;
//    }

    Add(int x, int y) // Parameterized Constructor
    {
        a = x;
        b = y;
    }

    void getData()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    Add obj(10, 20); // Called Parameterized Constructor
    obj.getData();

    return 0;
}
