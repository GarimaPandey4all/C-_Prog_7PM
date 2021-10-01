#include <iostream>

using namespace std;

class Parent1 {

public:
    int parent1;

};

class Parent2 {

public:
    int parent2;

};

class Child : public Parent1, public Parent2
{
public:
    int child;

};

int main()
{
    Child obj;

    obj.child = 10;
    obj.parent1 = 20;
    obj.parent2 = 30;

    cout<<obj.child<<endl;
    cout<<obj.parent1<<endl;
    cout<<obj.parent2<<endl;

    return 0;
}
