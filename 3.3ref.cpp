#include<iostream>
using namespace std;
class act
{
    int actno;
    string name;
    double balance;

    static int totalactno;
    public:

    act(int an,string n,double b)
    {
        actno=an;
        name=n;
        balance=b;
        totalactno++;
    }
    void transfer(act &receiver, double amt)
    {
        if(amt>0 && balance>=amt)
        {
           balance-=amt;
        receiver.balance+=amt;

        cout<<"transfer succesfully...";
        }

        else
            cout<<"invalid transfer..";
    }
    void disply()
    {
        cout<<"account no:"<<actno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"balance:"<<balance<<endl;

    }

    static void showtotal()
    {
        cout<<"total account:"<<totalactno<<endl;
    }
};
int act::totalactno=0;

int main()
{
    act* acc=new act[4]
    {
        act(1,"ABC",60000),
        act(2,"DEF",50000),
        act(3,"RST",30000),
        act(4,"XYZ",56000)
    };

    acc[0].transfer(acc[3],3000);

    for(int i=0;i<4;i++)
    {
        acc[i].disply();
    }


    act::showtotal();

    delete[] acc;

    return 0;
}