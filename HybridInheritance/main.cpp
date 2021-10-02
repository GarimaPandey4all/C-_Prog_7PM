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

class Fourwheeler
{
public:
    Fourwheeler()
    {
        cout<<"This is Four wheeler class"<<endl;
    }
};

//Multiple
class Car : public Vehicle, public Fourwheeler {

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
