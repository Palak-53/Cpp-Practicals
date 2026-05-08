#include <iostream>
using namespace std;

class base {
public:
    virtual ~base() { 
        cout << "Base Destructor called" << endl;
    }
};

class derived : public base {
    int* data;

public:
    derived() {
        data = new int[5];
        cout << "Derived Constructor called" << endl;
    }

    ~derived() {
        delete[] data;
        cout << "Derived Destructor called" << endl;
    }
};

int main() {
    base* obj = new derived();

    delete obj; 

    return 0;
}