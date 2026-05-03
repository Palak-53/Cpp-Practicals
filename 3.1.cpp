#include<iostream>
using namespace std;
class employee
{
    string name;
    double basicsalary;
    double bonusamt;

public:
    employee()
    {
        name="none";

        basicsalary=0;
        bonusamt=0;
    }

    employee(string n,double bs,double boa)
    {
        name=n;
        if(bs<0)bs=0;
        if(boa<0)boa=0;
        bonusamt=boa;
        basicsalary=bs;
    }
    inline double totalsalary()
    {
        return basicsalary+bonusamt;
    }
    void updatebonus(double newbonus)
    {
        if(newbonus >= 0)
            bonusamt=newbonus;

    }
    void grade()
    {
         if(totalsalary() >= 50000)
            cout<<"grade a"<<endl;
         else if(totalsalary() >= 30000)
            cout<<"grade b"<<endl;
        else
            cout<<"grade c"<<endl;
    }
    
    void disply()
    {
        cout<<"name:"<<name<<endl;
        cout<<"basic salary:"<<basicsalary<<endl;
        cout<<"bonus amount:"<<bonusamt<<endl;
        cout<<"total salary:"<<totalsalary()<<endl;

        // if(totalsalary() >= 50000)
        //     cout<<"grade a";
        //  else if(totalsalary() >= 30000)
        //     cout<<"grade b";
        // else
        //     cout<<"grade c";
    }
    };

    int main()
    {
       int n =5;
       employee* emp=new employee[n]
       {
           employee("Palak",57000,7800),
           employee("Keya",48000,7000),
           employee("Dharmi",55000,3000),
           employee("Diya",69000,8900),
           employee("Kavya",44000,-3000)
       };
       for(int i=0;i<n;i++)
       {
           emp[i].disply();
           emp[i].grade();

       }
       delete[] emp;
        return 0;
    }