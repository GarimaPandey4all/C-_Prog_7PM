#include <iostream>

using namespace std;

class HelloWorld
{
public:
    HelloWorld()
    {
        cout<<"Hello World"<<endl;
    }
    ~HelloWorld()
    {
        cout<<"Destructor";
    }
};

int main()
{
    HelloWorld obj;

    return 0;
}
