#include <iostream>
using namespace std;

class Distance
{
     float meter;
     float centimeter;

     public:
    
     Distance(){}

     Distance(Distance &D1,Distance &D2)
     {
          meter = D1.meter + D2.meter;
          centimeter = D1.centimeter + D2.centimeter;
     }

    friend void getdata(Distance &d)
    {
        cout<<"enter meter : ";
        cin>>d.meter;
        cout<<"enter centimeter : ";
        cin>>d.centimeter;   
    }

    friend void displaydata(Distance d)
    {
        cout<<"distance in meter is : "<<d.meter<<endl;
        cout<<"distance in centimeter is : "<<d.centimeter<<endl;   
    }
};

int main()
{
     Distance d1,d2;
     
     cout<<"enter first Distance.\n";
     getdata(d1);
     
     cout<<"enter second Distance.\n";
     getdata(d2);
     cout<<"\n";

     Distance d3(d1,d2);

     cout<<"info. about first distance :"<<endl;
     displaydata(d1);
     cout<<"\n";
     
     cout<<"info. about second distance :"<<endl;
     displaydata(d2);
     cout<<"\n";
     
     cout<<"total of both distance :"<<endl;
     displaydata(d3);

     return 0;
}