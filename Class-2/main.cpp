#include <iostream>

using namespace std;

class EvenOdd {

public:
    int n;

    //void setData(int a)
    void setData()
    {
       // n = a;
       cout<<"Enter any number:";
       cin>>n;
    }

    void isEvenOdd()
    {
        ((n % 2) == 0) ? cout<<"Number is Even" : cout<<"Number is Odd";
    }
};

int main()
{
    EvenOdd obj;
    obj.setData();
    //obj.setData(23);
    obj.isEvenOdd();

    return 0;
}
