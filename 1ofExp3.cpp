#include <iostream>
using namespace std;

class employee
{
    char name[20];
    char city[20];
    float basic_salary;
    float dearness_allowance;
    float house_rent;

    public:

    void getdata()
    {
        cout<<"enter employee name : ";
        cin>>name;
        cout<<"enter employee city : ";
        cin>>city;
        cout<<"enter employee basic_salary : ";
        cin>>basic_salary;
        cout<<"enter employee dearness_allowance : ";
        cin>>dearness_allowance;
        cout<<"enter employee house_rent : ";
        cin>>house_rent;
        cout<<"\n";
    }
    
    float calculate(float, float, float);

    void display()
    {
        cout<<"employee name : "<<name<<endl;
        cout<<"employee city : "<<city<<endl;
        cout<<"employee basic_salary : "<<basic_salary<<endl;
        cout<<"employee dearness_allowance : "<<dearness_allowance<<endl;
        cout<<"employee house_rent : "<<house_rent<<endl;

        cout.setf(ios :: fixed, ios :: floatfield);
        cout.precision(2);

        cout<<"emplyee total salary : "<< calculate(basic_salary, dearness_allowance, house_rent) <<"\n\n"<<endl;

    }
};

float employee :: calculate(float b_s, float d_a, float h_r)
{
    float total;

    total = b_s + ((b_s * d_a) / 100) + ((b_s*h_r) / 100);

    return total;
} 

int main()
{
    int n,i;

    cout<<"enter total no. of employees : ";
    cin>>n;
    cout<<"\n";
    
    employee emp[n];

    for(i=0; i<n; i++)
    {
        emp[i].getdata();
    }

    cout<<"\n\ndisplay information : \n\n";

    for(i=0; i<n; i++)
    {
        emp[i].display();
    }

    return 0;
}