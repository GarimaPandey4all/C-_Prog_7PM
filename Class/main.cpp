#include <iostream>

using namespace std;

class HelloWorld {

int a, b;
    /*
    class consists two things:
        1. class variables/ data members
        2. member functions/ method
    */
public:
    void setData()
    {
        a = 10;
        b = 20;
    }
    void showData()
    {
        cout<<"Hello World"<<endl;
        cout<<a<<" "<<b;
    }
};

int main()
{
    HelloWorld obj;
    HelloWorld obj2;

    obj.setData();
    obj.showData();

    obj2.setData();
    obj2.showData();

    return 0;
}
