#include <iostream>

using namespace std;

class Shape {

public:
    void sound()
    {
        cout<<"Default Sound"<<endl;
    }
};

class Circle : public Shape{
public:
    //override
    void sound()
    {
        cout<<"Circle Sound"<<endl;
    }
};

int main()
{

    Circle obj;
    obj.sound();
    obj.sound();

    return 0;
}
