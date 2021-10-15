#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter value for a and b:";
    cin>>a>>b;

    try {

        if(b == 0)
        {
            throw b;
        }

        c = a / b;

        cout<<"Division is: "<<c<<endl;

    }

    catch(int e)
    {
        cout<<"Exception, Divide by "<<e<<endl;
    }

    return 0;
}
