#include <iostream>

using namespace std;

class Digit {

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
    Digit obj;
    obj.setData(10);
    obj.getData();

    return 0;
}
