#include <iostream>
using namespace std;

class store
{
public:
    int itemID;
    string itemName;
    int price;
    int quantityStock;

    store()
    {
        itemID = 0;
        itemName = "Not given";
        price = 0;
        quantityStock = 0;
    }

    void input()
    {
        cout << "Enter ID: ";
        cin >> itemID;

        cout << "Enter Name: ";
        cin >> itemName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantityStock;
    }

    void add()
    {
        int x;
        cout << "Add quantity: ";
        cin >> x;
        quantityStock = quantityStock + x;
    }

    void sell()
    {
        int x;
        cout << "Sell quantity: ";
        cin >> x;

        if (x <= quantityStock)
            quantityStock = quantityStock - x;
        else
            cout << "Not enough stock\n";
    }

    void display()
    {
        cout << "\nItem name: " << itemName << endl;
        cout << "Item ID: " << itemID << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantityStock << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    store a[10];   // simple fixed array

    for (int i = 0; i < n; i++)
    {
        cout << "\nItem " << i + 1 << endl;
        a[i].input();
    }

    int choice, id;

    do
    {
        cout << "\n1. Add\n2. Sell\n3. Display\n4. Exit\n";
        cin >> choice;

        if (choice == 1 || choice == 2)
        {
            cout << "Enter item ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (a[i].itemID == id)
                {
                    if (choice == 1)
                        a[i].add();
                    else
                        a[i].sell();
                }
            }
        }
        else if (choice == 3)
        {
            for (int i = 0; i < n; i++)
            {
                a[i].display();
            }
        }

    } while (choice != 4);

    return 0;
}