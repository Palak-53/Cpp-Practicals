#include<iostream>
#include<string>
using namespace std;
class account
{
    int acc_number;
    string name;
    double balance;
    static int total_accounts;

    public:
account()
{
    
}
static account createAccount()
{
    account x;
    cout<<"Please enter account no"<<endl;
    cin>>x.acc_number;

    cout<<"Please enter account name"<<endl;
    cin>>x.name;

    cout<<"Please enter balamce"<<endl;
    cin>>x.balance;
    
    total_accounts++;

    return x;

    // total_accounts++;
}
int transfer_money(account acc[], int b, int amount_transfer)
{
    int ano, amt;
    cout<<"Please enter the acciynt no to transfer to...."<<endl;
    cin>>ano;
    
    cout<<"Please enter the amount to transfer to...."<<ano<<endl;
    cin>>amt;
    int flag = 0;

    for(int i=0; i<total_accounts;i++)
    {
        if(acc[i].acc_number == ano)
        {
                acc[i].balance += amt;
                balance-=amt;
                flag = 1;
                cout<<"Amount "<<amt<<" Transfered to "<<ano<<endl;
                cout<<"Your new current balance is "<<balance<<endl;
                break;
        }
    }

    if(flag==0)
    {
        cout<<"No valid account found"<<endl;
    }


}
void display()

{
cout<<"Account number: "<<acc_number<<endl;
cout<<"Account holder name: "<<name<<endl;
cout<<"Account balance: "<<balance<<endl;
}

};
int account::total_accounts = 1;
int main()
{
    account *a = new account[100];
    int i = 0;
    int choice;
    cin>>choice;
    while(true)
    {
        switch(choice)
        {
            case 1: a[i] = account::createAccount();
                i++;
                break;

            case 2: a[i] = account :: display();
                    break;
            
            case 3: exit(0);

        }
    }
    

}