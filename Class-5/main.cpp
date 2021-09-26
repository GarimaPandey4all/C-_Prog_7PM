#include <iostream>

using namespace std;

//Encapsulation: It is the process in which we wrap data members
//and member functions in a single unit is called encapsulation.
//
//And class is an example of Encapsulation.

//Abstraction or Data Hiding: Only provide essential information to
//client not internal information.

class Digit {

private: // Data Hiding or Abstraction
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    void getData(); // function declaration
};

void Digit ::getData() // :: - scope resolution operator
{
    cout<<"a is:"<<a<<endl;
}

int main()
{

    return 0;
}
