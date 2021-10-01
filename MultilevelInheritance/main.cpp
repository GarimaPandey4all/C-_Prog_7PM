#include <iostream>

using namespace std;

class Parent {

public:
    int parent;

};

class Child1 :  public Parent{

public:
    int child1;

};

class Child2 : public Child1
{
public:
    int child2;

};

int main()
{
    Child2 obj;

    obj.parent = 10;
    obj.child1 = 20;
    obj.child2 = 30;

    cout<<obj.parent<<endl;
    cout<<obj.child1<<endl;
    cout<<obj.child2<<endl;

    return 0;
}
