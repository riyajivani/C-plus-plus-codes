#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2, sum;

    p1 = new int;
    p2 = new int;

    cout<<"enter first value :";
    cin>>*p1;

    cout<<"enter second value :";
    cin>>*p2;

    sum = *p1 + *p2;

    cout<<"Sum of values = "<<sum<<endl;

    delete []p1;
    delete []p2;

    cout<<*p1<<" "<<*p2;

    return 0;
}