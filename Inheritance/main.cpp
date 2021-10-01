#include <iostream>

using namespace std;

//Inheritance: Code Reuseability
//
//Parent - Child Relationship
//
//Base / Parent Class and Derived / Child class
//
//Inheritance
//
//1. Single Inheritance
//2. Multiple Inheritance
//3. Multilevel Inheritnace
//4. Heirarchical Inheritance
//5. Hybrid Inheritance

//Parent Class
class Human {

public:
    Human()
    {
        cout<<"This is Parent Class"<<endl;
    }
};

//Child Class
class Child : public Human{ // inheritance

public:
    Child()
    {
        cout<<"This is Child Class"<<endl;
    }
};

int main()
{
    Child obj;

    return 0;
}
