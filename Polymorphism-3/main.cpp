#include <iostream>

using namespace std;

//complex number : 10 + i8;
//real - 10
//imag - 8
//
//4 + i7
//2 + i3
//6 + i10
//
//obj3 = obj1 + obj2;

class Complex {

    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    //Operator Overloading
    Complex operator + (Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

};

int main()
{
    Complex obj1(4, 7);
    Complex obj2(2, 3);

    Complex obj3;

    obj3 = obj1 + obj2;

    obj3.print();

    return 0;
}
