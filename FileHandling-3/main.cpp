#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Reading from a file

    char ch;

    ifstream infile("test.txt", ios::in);

    while(infile)
    {
        infile.get(ch);
        cout<<ch;
    }

    infile.close();

    return 0;
}
