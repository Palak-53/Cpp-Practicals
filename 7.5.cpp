#include <iostream>
#include <string>
using namespace std;

class GradingSystem
{
protected:
    float marks;

public:
    GradingSystem(float m)
    {
        marks = m;
    }

    virtual char computeGrade() = 0;
};

class Undergraduate : public GradingSystem
{
public:
    Undergraduate(float m) : GradingSystem(m) {}

    char computeGrade()
    {
        if (marks >= 80)
            return 'A';
        else if (marks >= 60)
            return 'B';
        else if (marks >= 40)
            return 'C';
        else
            return 'F';
    }
};

class Postgraduate : public GradingSystem
{
public:
    Postgraduate(float m) : GradingSystem(m) {}

    char computeGrade()
    {
        if (marks >= 85)
            return 'A';
        else if (marks >= 70)
            return 'B';
        else if (marks >= 50)
            return 'C';
        else
            return 'F';
    }
};

int main()
{
    int n;
   

    
    cout << "Enter the number of students: ";
    cin >> n;
  string name[n];
    string level[n];
    float marks[n];
    cout << "Enter details of " << n << " students:" << endl;

    for (int i = 0; i < n; i++)
    {
       
        cout << "Student " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> name[i];
        cout << "Enter level (UG for Undergraduate, PG for Postgraduate): ";
        cin >> level[i];
        cout << "Enter marks: ";
        cin >> marks[i];
    }

    
    cout << "Student Records:" << endl;

    for (int i = 0; i < n; i++)
    {
        GradingSystem *student;

        if (level[i] == "UG")
            student = new Undergraduate(marks[i]);
        else
            student = new Postgraduate(marks[i]);

        cout << "Name: " << name[i] << endl;
        cout << "Level: " << level[i] << endl;
        cout << "Marks: " << marks[i] << endl;
        cout << "Grade: " << student->computeGrade() << endl;
        cout << endl;

        delete student;
    }

    return 0;
}
