#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float Area() = 0;
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    float Area()
    {
        return length * width;
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    float Area()
    {
        return 3.14f * radius * radius;
    }
};

int main()
{
    cout << "Polymorphism using Shape pointer:" << endl;

    Rectangle rect(5, 3);
    Circle circ(4);

    Shape *s;

    s = &rect;
    cout << "Area of Rectangle = " << s->Area() << endl;

    s = &circ;
    cout << "Area of Circle = " << s->Area() << endl;

    cout << endl;
    cout << "Dynamic storage:" << endl;

    Shape *dynamicShapes[2];
    dynamicShapes[0] = new Rectangle(6, 2);
    dynamicShapes[1] = new Circle(3);

    for (int i = 0; i < 2; i++)
    {
        cout << "Area = " << dynamicShapes[i]->Area() << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        delete dynamicShapes[i];
    }

    cout << endl;
    cout << "Static storage:" << endl;

    Rectangle rectArray[2] = {Rectangle(2, 4), Rectangle(3, 5)};
    Circle circleArray[2] = {Circle(2), Circle(5)};

    for (int i = 0; i < 2; i++)
    {
        cout << "Rectangle " << i + 1 << " area = " << rectArray[i].Area() << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Circle " << i + 1 << " area = " << circleArray[i].Area() << endl;
    }

    return 0;
}
