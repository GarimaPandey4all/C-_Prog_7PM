#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //writing in a file

    //ofstream outfile("test.txt", ios::out);

    ofstream outfile;
    outfile.open("test.txt", ios::out);

    outfile<<"Welcome to Brain Mentors"<<endl;
    outfile<<"Have a nice day!"<<endl;
    outfile<<"Welcome to Brain Mentors"<<endl;

    outfile.close();

    return 0;
}
