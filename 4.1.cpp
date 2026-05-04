#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;
    int capacity;

public:

    DynamicArray() {
        data = nullptr;
        size = 0;
        capacity = 3;
    }

   
    ~DynamicArray() {
        delete[] data;
    }

    void resize() {
      
        if (capacity == 0)
            capacity = 1;
        else
            capacity = capacity * 2;

        int* newData = new int[capacity];

    
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
    }

   
    void insert(int x) {
        if (size == capacity) {
            resize();
        }

        data[size] = x;
        size++;
    }

  
    void deleteAt(int pos) {
        if (size == 0) {
            cout << "Array is empty\n";
            return;
        }

        if (pos < 0 || pos >= size) {
            cout << "Invalid position\n";
            return;
        }

       
        for (int i = pos; i < size - 1; i++) {
            data[i] = data[i + 1];
        }

        size--;
    }

  
    void display() {
        if (size == 0) {
            cout << "Array is empty\n";
            return;
        }

        cout << "Array: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray arr;

    arr.resize();
    
    arr.insert(15);
    arr.insert(5);
    arr.insert(10);
    
    arr.insert(20);

    arr.display();

    arr.deleteAt(1);
    arr.display();

    return 0;
}