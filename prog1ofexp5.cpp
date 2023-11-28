#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    Complex(){}

    Complex(int x, int y)
    {
        real=x;
        img=y;
    }

    Complex(Complex & c)
    {
        real=c.real;
        img=c.img;
    }

    void display()
    {
        cout<<real<<"+ j"<<img<<endl;
    }

    friend Complex operator*(Complex,Complex);
};

Complex operator*(Complex a,Complex b)
{
    Complex C;

    C.real=(a.real*b.real)-(a.img*b.img);
    C.img=(a.real*b.img)+(a.img*b.real);

    return C;
}

int main()
{
    Complex C1(5,6);
    C1.display();

    Complex C2(3,7);
    C2.display();

    Complex C3;
    C3=C1*C2;

    cout<<"multiplication of both complex number is : ";
    C3.display();
    return 0;
}