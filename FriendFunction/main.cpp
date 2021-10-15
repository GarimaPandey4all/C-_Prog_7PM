#include <iostream>

using namespace std;

//void add(int);
//
//
//void add(int a)
//{
//
//}

class Complex {

private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void getData()
    {
        cout<<"a is:"<<a<<" b is:"<<b<<endl;
    }

    friend void func(Complex); // it is a declaration of friend function.

};

//friend function defined outside the class
void func(Complex obj)
{
    cout<<"Sum is: "<<obj.a + obj.b;
}

int main()
{
    Complex c;

    c.setData(10, 20);
    c.getData();

    func(c);

    return 0;
}
