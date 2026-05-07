#include<iostream>
using namespace std;
class account
{
    protected:

    int accno;
    int balance;

    string history[100];
    int count;

    public:

    account(int a, int b)
    {
        accno=a;
        balance=b;
        count =0;

    }

    void deposit(int amount)
    {
        balance += amount;

        history[count] ="deposit:" +to_string(amount);
        count++;
    }

   virtual  void withdraw(int amount)
    {
        if(amount<=balance)
        {
          balance-=amount;
          history[count]="withdraw:" + to_string(amount);
          count++;
        }     
        else
        {
            cout<<"Insufficient balance\n";
        }
    }
     void display()
    {
        cout<<"Account No: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

    void showHistory()
    {
        cout<<"\nTransaction History:\n";
        for(int i=0; i<count; i++)
        {
            cout<<history[i]<<endl;
        }
    }

};

class saving_account:public account
{
    float interest;

public:
    saving_account(int a, int b, float i) : account(a,b)
    {
        interest = i;
    }
   void withdraw(int amount)
    {
        if(amount<=balance)
        {
          balance-=amount;
          history[count]="withdraw:" + to_string(amount);
          count++;
        }     
        else
        {
            cout<<"Insufficient balance\n";
        }
    }
   
};
class current_account:public account
{
    int overdraft;

public:
    current_account(int a, int b, int o) : account(a,b)
    {
        overdraft = o;
    }
 void withdraw(int amount)
    {
        if(amount <= balance + overdraft)
        {
            balance -= amount;

            history[count] = "Current Withdraw: " + to_string(amount);
            count++;
        }
        else
        {
            cout<<"Overdraft limit exceeded\n";
        }
    }
        
};
int main ()
{
    saving_account s(1,50000,3500);
    current_account c(2,80000,5000);

    s.deposit(10000);
    s.display();
    s.showHistory();

    c.withdraw(12000);
    c.display();
    c.showHistory();

    return 0;
}