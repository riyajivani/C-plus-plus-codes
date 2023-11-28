/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class shape
{
     double x,y;
     
     public:
     
     void get_data()
     {
          cout<<"enter 1st dimension:";
          cin>>x;
          
          cout<<"enter 2nd dimension:";
          cin>>y;
     }    
          virtual void display_area(){}
     
     double getx(){return x;}
     double gety(){return y;}
};

class triangle : public shape
{
     double triangle_area;
     public:
     
     void display_area()
     {
          triangle_area=(getx()*gety())/2;
          
          cout<<"area of triangle is "<<triangle_area<<"\n\n";
     }   
};

class rectangle : public shape
{
     double rectangle_area;
     public:
     
     void display_area()
     {
          rectangle_area=getx()*gety();
          
          cout<<"area of rectangle is "<<rectangle_area<<endl;
     }
};

int main()
{
     triangle t;
     rectangle r;
     shape *s;
     
     s=&t;
     cout<<"enter dimension for triangle"<<endl;
     s->get_data();
     s->display_area();
     
     s=&r;
     cout<<"enter dimension for rectangle"<<endl;
     s->get_data();
     s->display_area();

    return 0;
}