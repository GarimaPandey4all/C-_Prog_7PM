#include <iostream>

using namespace std;

class Student {

private:
    int rollno;
    static int marks;

public:

    void setData(int r)
    {
        rollno = r;
    }

    void getData()
    {
        cout<<rollno<<endl;
        cout<<marks<<endl;
    }
};

int Student :: marks = 546; // static variable initialization

int main()
{
    Student obj;
    obj.setData(10);
    obj.getData();

    return 0;
}
