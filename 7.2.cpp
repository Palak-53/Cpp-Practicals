#include<iostream>
using namespace std;

class Complex
{
    private:
    float real;
    float imaginary;

    public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(const Complex& c)
    {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex operator-(const Complex& c)
    {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    void display() 
    {
        cout << real;
        if (imaginary >= 0)
        {
            cout << " + " << imaginary << "i";
        }
        else
        {
            cout << " - " << -imaginary << "i";
        }
    }
};

int main()
{
    Complex c1(4, 5);
   
    Complex c2(7, -2);
    c1.display();
    cout<<endl;
    c2.display();
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    cout<<endl;
    cout<< "SUM: ";
    sum.display();
    cout<<endl;
    cout<< "DIFFERENCE: ";
    difference.display();


    return 0;
}
   
