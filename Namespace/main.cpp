#include <iostream>

using namespace std;

namespace first {

    int x = 600;

    int func()
    {
       return x;
    }
}

namespace second {

    int x = 800;

    int func()
    {
        return x;
    }
}

//global variable
//int x = 600;

int main()
{
    //local variable
    int x = 500;

    cout<<x<<endl;
    cout<<first::x<<endl;
    cout<<second::x<<endl;
    cout<<first::func()<<endl;
    cout<<second::func()<<endl;

    return 0;
}
