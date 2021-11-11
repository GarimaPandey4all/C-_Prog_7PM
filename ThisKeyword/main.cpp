#include <iostream>

using namespace std;

class Student {

private:
    int rollno, age, marks;

public:
    void setData(int rollno, int age, int marks)
    {
        this->rollno = rollno;
        this->age = age;
        this->marks = marks;
    }

    void getData()
    {
        cout<<rollno<<endl;
        cout<<age<<endl;
        cout<<marks<<endl;
    }
};

//this: store/hold current object's address

int main()
{
    Student obj;
    obj.setData(101, 20, 456);
    obj.getData();

    return 0;
}
