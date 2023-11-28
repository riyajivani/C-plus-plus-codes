#include <iostream>
using namespace std;

void abc(const int no);

int main()
{
    abc(5);
    return 0;
}

void abc(const int no)
{
    //no=no+10;   invalid
    cout<<no; //5
}