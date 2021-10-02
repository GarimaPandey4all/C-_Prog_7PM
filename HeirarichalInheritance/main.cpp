#include <iostream>

using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout<<"This is Vehicle Class"<<endl;
    }
};

class Car : public Vehicle {

public:
    Car()
    {
        cout<<"This is Car Class"<<endl;
    }
};

class Bus : public Vehicle {
public:
    Bus()
    {
        cout<<"This is Bus Class"<<endl;
    }
};

int main()
{
    Bus obj1;
    Car obj2;

    return 0;
}
