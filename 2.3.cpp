#include <iostream>
#include <string>
using namespace std;

class Account
{
    string name;
    int id;
    int balance;

public:
    Account()
    {
        name = "Not Given";
        id = 0;
        balance = 0;
    }

    void create()
    {
        cin.ignore();  
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter account id: ";
        cin >> id;

        cout << "Enter balance: ";
        cin >> balance;

        cout << "Account created\n";
    }

    void deposit()
    {
        int amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;

        if (amt > 0)
        {
            balance += amt;
            cout << "New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid amount\n";
        }
    }

    void withdraw()
    {
        int amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;

        if (amt <= 0)
        {
            cout << "Invalid amount\n";
        }
        else if (amt > balance)
        {
            cout << "Insufficient balance\n";
        }
        else
        {
            balance -= amt;
            cout << "New balance: " << balance << endl;
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    Account a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nAccount " << i + 1 << endl;
        a[i].create();

        int choice;
        do
        {
            cout << "\n1.Deposit  2.Withdraw  3.Display  4.Next\nEnter choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1: a[i].deposit(); break;
                case 2: a[i].withdraw(); break;
                case 3: a[i].display(); break;
            }

        } while (choice != 4);
    }

    return 0;
}