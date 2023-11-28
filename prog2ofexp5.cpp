#include <iostream>
using namespace std;

class Distance
{
    float feet;
    float inches;

    public:

    Distance(){}

    Distance(float f,float i)
    {
        feet=f;
        inches=i;
    }
    
    Distance(Distance & D)
    {
        feet=D.feet;
        inches=D.inches;
    }

    Distance operator+(Distance);
    Distance operator-(Distance);

    void display()
    {
        cout<<feet<<" feets and "<<inches<<" inches"<<endl;
    }
};

Distance Distance :: operator+(Distance A)
{
    Distance temp;

    temp.feet = feet + A.feet;
    temp.inches = inches + A.inches;

    return temp;
}

Distance Distance :: operator-(Distance A)
{
    Distance temp;

    temp.feet = feet - A.feet;
    temp.inches = inches - A.inches;

    return temp;
}

int main()
{
    Distance D1(1.3,2.4);
    D1.display();

    Distance D2(2.0,2.5);
    D2.display();

    Distance D3;

    D3=D1+D2;
    D3.display();

    D3=D1-D2;
    D3.display();

    Distance D4 = D2;

    D3=D4+D2;
    D3.display();

    D3=D4-D2;
    D3.display();
    
    return 0;
}