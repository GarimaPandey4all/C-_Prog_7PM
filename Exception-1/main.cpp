#include <iostream>

using namespace std;

//Exception Handling
//
//Exception: Abnormal Condition or runtime error
//
//try {}
//catch() {}
//throw

int main()
{
    //int value = 23;
    char value = 'B';

    try {

        if(value == 23)
        {
            throw 23;
        }
        if(value == 'A')
            throw 'A';

        cout<<"Try - Block"<<endl;

    }

    catch(int e)
    {
        cout<<"Exception Here"<<e<<endl;
    }

    catch(char e)
    {
        cout<<"Exception Here"<<e<<endl;
    }

    return 0;
}
