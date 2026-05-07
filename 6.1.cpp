#include <iostream>
#define pi 3.1415
using namespace std;

class Shape
{
protected:
    double radius;

public:
    void getRadius()
    {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

};

class Circle : public Shape
{
public:
    void calculateArea()
    {
        double area = pi * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of circles: ";
    cin >> n;

    
    Circle* circles = new Circle[n];

    for (int i = 0; i < n; i++)
    {
        circles[i].getRadius();     
        circles[i].calculateArea(); 
    }

   
    delete[] circles;

    return 0;
}