#include <iostream>
using namespace std;
class point
{
    int x, y;
    int checkPointX, checkPointY;

public:
    point()
    {
        x = 0;
        y = 0;
    };

    point(int y, int x)
    {
        this->x = x;
        this->y = y;
    }

    point &move(int dy, int dx)
    {
        this->x += dx;
        this->y += dy;

        return *this;
    }

    void resetToZero()
    {
        move(-y, -x);
    }

    void display()
    {
        cout << "Point: (" << y << ", " << x << ")" << endl;
    }
};

int main()
{
    point p(2, 3);

    cout << "Point p";
    cout << endl;
    p.move(3, 4).move(5, 6);
    p.display();
    cout << "Reset to zero: ";
    p.resetToZero();
    p.display();

    point q(5, 4);
    cout << endl;
    cout << "Point q";
    cout << endl;
    q.move(3, 4).move(5, 6);
    q.display();
    cout << "Reset to zero: ";
    q.resetToZero();
    q.display();
}