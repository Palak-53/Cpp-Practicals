#include<iostream>
using namespace std;
class cel
{
    float temp;
    public:
    cel(){}
    cel(float t)
    {
        temp=t;
    }
    void display()
    {
        cout<<temp<<"celsius";
    }

    float fahren1()
    {
        
    return (temp*9.0/5.0+32);
}
    bool operator==(cel c)
    {
        return temp==c.temp;

    }

    float gettemp(){return temp;}
};

class fahren
{
    float temp;
    public:
    fahren(){}
    fahren(float t)
    {
        temp=t;
    }
    void display()
    {
        cout<<temp<<"fahrenheit";
    }
   
    float cel1()
   {
        return ((temp-32)*5.0/9.0);
   }
    bool operator==(fahren f)
    {
        return temp==f.temp;

    }

    float gettemp(){return temp;}
};


int main()
{
   
    cel c1(2),c2(2);
    fahren f1(36),f2(35);
    cout<<"Converting to celsius: ";
    cout<<f1.cel1()<<endl;
    cout<<"Converting to farenheit: ";
    cout<<c1.fahren1()<<endl;
    cout<<"Comparing two celsius objects: ";
    cout<<(c1==c2)<<endl;
    cout<<"Comparing two fahrenheit objects: ";
    cout<<(f1==f2)<<endl;
}