#include <iostream>

using namespace std;

class Counter {

public:
    void updateCount()
    {
        //int cnt = 0;
        static int cnt; // cnt = 0; because of static keyword
        cout<<"Count is: "<<cnt++<<endl;
    }

};

int main()
{
    Counter obj;

    for(int i = 0; i < 5; i++)
    obj.updateCount();

    return 0;
}
