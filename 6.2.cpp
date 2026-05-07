#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int empID;

public:
    Employee(string n = "", int a = 0, int id = 0) : Person(n, a) {
        empID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << empID << endl;
    }

    int getID() {
        return empID;
    }
};

class Manager : public Employee {
    string department;

public:
    Manager(string n = "", int a = 0, int id = 0, string dept = "") : Employee(n, a, id) {
        department = dept;
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    int n;
    cout<<"Enter number of managers: "<<endl;
    cin >> n;

    Manager managers[n];

    for (int i = 0; i < n; i++) {
        string name, dept;
        int age, id;
        
        cout<<"Enter manager name: "<<endl;
        cin >> name;

        cout<<"Enter manager age: "<<endl;
        cin>>age;

        cout<<"Enter manager ID: "<<endl;
        cin>>id;

        cout<<"Enter manager department: "<<endl;
        cin>>dept;
        managers[i] = Manager(name, age, id, dept);
    }

    for (int i = 0; i < n; i++) {
        managers[i].displayManager();
    }

    int searchID;
    cin >> searchID;

    for (int i = 0; i < n; i++) {
        if (managers[i].getID() == searchID) {
            managers[i].displayManager();
            break;
        }
    }

    return 0;
}