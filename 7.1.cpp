#include<iostream>
using namespace std;
class calculator
{
    public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, int b)
    {
        return a + b;
    }
     float add(float a, float b)
    {
        return a + b;
    }
    float add(int a, float b)
    {
        return a + b;
    }
};

int main()
{
    calculator c;
    cout<<"Sum of 5 and 10: "<<c.add(5,10)<<endl;
    cout<<"Sum of 3.5 and 7: "<<c.add(3.5f,7)<<endl;
    cout<<"Sum of 2.5 and 4.5: "<<c.add(2.5f,4.5f)<<endl;
    cout<<"Sum of 6 and 2.5: "<<c.add(6,2.5f)<<endl;

    return 0;
}