#include <iostream>

using namespace std;

//Polymorphism: Poly - Many, Morphism - Forms
//
//Person: student, brother, father, trainer, empolyee etc
//
//Polymorphism Types:
//
//    1. Compile Type Polymorphism
//    a) Function Overloading
//    b) Operator Overloading
//
//    2. Runtime Type Polymorphism
//    a) Function Overriding

class Overloading {

public:

    void func()
    {
        int a;
        cout<<"Enter value for a:"<<endl;
        cin>>a;
        cout<<"A is:"<<a<<endl;
    }

    void func(int x, int y)
    {
        cout<<"X is: "<<x<<endl;
        cout<<"Y is: "<<y<<endl;
    }

    void func(float x, float y)
    {
        cout<<"X is: "<<x<<endl;
        cout<<"Y is: "<<y<<endl;
    }

};

int main()
{
    Overloading obj;

    obj.func();
    obj.func(10, 20);
    obj.func(34.6f, 67.9f);

    return 0;
}
