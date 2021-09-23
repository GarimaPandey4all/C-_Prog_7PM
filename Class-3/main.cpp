#include <iostream>

using namespace std;

class Add {

//public:
private:

    int a, b; // instance Variable

public:

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout<<"Addition is:"<<(a + b)<<endl;
    }

};

int main()
{
    Add obj;
//    obj.a = 10;
//    obj.b = 20;
    obj.setData(13, 16);
    obj.getData();

    return 0;
}
