#include <iostream>

using namespace std;

class Parent {

protected: // like private
    int id;

};

class Child : public Parent {

public:
    void setData(int id)
    {
        this->id = id;
    }

    void getData()
    {
        cout<<id<<endl;
    }

};

int main()
{
    Child obj;
    obj.setData(10);
    obj.getData();

    return 0;
}
