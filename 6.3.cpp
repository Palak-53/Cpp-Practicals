#include <iostream>
using namespace std;

class Fuel
{
protected:
    string fuelType;

public:
    Fuel()
    {
        fuelType = "Unknown";
    }
    Fuel(string f)
    {
        fuelType = f;
    }
};

class Brand
{
protected:
    string brandName;

public:
    Brand()
    {
        brandName = "Unknown";
    }
    Brand(string b)
    {
        brandName = b;
    }
};

class Car : public Fuel, public Brand
{
public:
    Car() : Fuel(), Brand() {}
    Car(string f, string b) : Fuel(f), Brand(b) {}

    void display()
    {
        cout << "Brand: " << brandName << ", Fuel: " << fuelType << endl;
    }
};

int main()
{
    int n;
    cout<<"enter number of cars"<<endl;
    cin >> n;

    Car cars[n];

    string fuel, brand;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter brand of the car: "<<endl;
        cin >> brand;
         cout<<"Enter fuel type: "<<endl;
        cin >> fuel;
        cars[i] = Car(fuel, brand);
    }

    for (int i = 0; i < n; i++)
    {
        cars[i].display();
    }

    return 0;
}
