#include <iostream>

using namespace std;

void myFunc()
{
    if(10 > 5)
    {
        throw 10;
    }
}

int main()
{
    try {

        myFunc(); // function calling

        cout<<"Try - block"<<endl;

    }

    catch(...)
    {
        cout<<"Admin Error"<<endl;
    }

//    catch(int e)
//    {
//        cout<<e<<endl;
//    }

    return 0;
}
