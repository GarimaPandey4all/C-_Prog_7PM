#include <iostream>

using namespace std;

class Demo {

public:
    static void func()
    {
        cout<<"This is static method"<<endl;
    }

    void print()
    {
        cout<<"print method";
    }
};

int main()
{
    Demo :: func(); // calling of static function without using object of class.
    // ::  - scope resolution operator

    Demo obj;
    obj.print();

    return 0;
}
