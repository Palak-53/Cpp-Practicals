#include<iostream>
using namespace std;

class student
{
   string name;
   int rollno;
   int marks1;
   int marks2;
   int marks3;

public:

student()
{
    name = "not given";
    rollno = 0;
    marks1 = 0;
    marks2 = 0;
    marks3 = 0;
}   


student(string n, int roll, int m1, int m2, int m3)
{
    name = n;
    rollno = roll;
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}

void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll number: "<<rollno<<endl;
    cout<<"Marks in subject 1: "<<marks1<<endl;
    cout<<"Marks in subject 2: "<<marks2<<endl;
    cout<<"Marks in subject 3: "<<marks3<<endl;
}

float average()
{
    float avg = (marks1 + marks2 + marks3) / 3.0;
    return avg;
}
};

int main()
{
    int a;
    cout<<"Enter number of students: "<<endl;
    cin>>a;
    student s[a];
    string name;
    int r;
    int mark1, mark2, mark3;

for(int i = 0; i<a; i++)
{
    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter roll number: ";
    cin>>r;

    cout<<"Enter marks: ";
    cin>>mark1>>mark2>>mark3;

   s[i] = student(name, r, mark1, mark2, mark3);

    s[i].display();

    cout<<"Average marks: "<<s[i].average()<<endl;
}
    return 0;
}