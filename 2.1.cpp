#include <iostream>
#include<string>
using namespace std;
class plot
{
    unsigned int l;
    unsigned int b;

public:
    void check_shape(unsigned int l,unsigned int b)
    {
        if(l==b){
            cout<<"It is a square"<<endl;
        }
        else
        {
          cout<<"It is a rectangle"<<endl;
        }
    }
    void area(unsigned int l,unsigned int b)
    {
        cout<<"The area is: "<<l*b<<endl;
    }
    void perimeter(unsigned int l,unsigned int b)
    {
        cout<<"The perimeter is:"<<2*(l+b)<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of rectangles: ";
    cin>>n;

     plot p;
    unsigned int l, b;

    plot r[n];

    for(int i=0; i<n; i++)
    {
    cout<<"Enter length: "<<endl;
    cin>>l;

    cout<<"Enter breadth: "<<endl;
    cin>>b;
    cout<<"Rectangle "<<i+1<<endl;
    r[i].area(l,b);
    r[i].perimeter(l,b);
    r[i].check_shape(l,b);
    }

    return 0;
}