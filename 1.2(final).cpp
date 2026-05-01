#include <iostream>
using namespace std;

class library
{
    int id;
    string title;
    string author;
    int avail;

public:
    library()
    {
        id = 0;
        title = "NOT ASSIGNED";
        author = "NOT ASSIGNED";
        avail = 0;
    }

    void addBook()
    {
        cout << "Enter id: ";
        cin >> id;

        cin.ignore(); 

        cout << "Enter book title: ";
        getline(cin, title);

        cin.ignore(); 
        
        cout << "Enter book author: ";
        getline(cin, author);

        cout << "Enter book available copies: ";
        cin >> avail;
    }

    void issueBook()
    {
        if (avail > 0)
        {
            avail--;
            cout << "Book issued successfully\n";
        }
        else
        {
            cout << "No books available\n";
        }
    }

    void returnBook()
    {
        avail++;
        cout << "Book returned successfully\n";
    }

    void totalBooks()
    {
        cout << "\nBook ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << avail << endl;
    }

    void displayBook()
    {
        cout << "\nId: " << id << endl;
        cout << "Book title: " << title << endl;
        cout << "Book author: " << author << endl;
        cout << "Book available copies: " << avail << endl;
    }
};

int main()
{
    library book1, book2;

    cout << "Enter details for Book 1:\n";
    book1.addBook();

    cout << "\nEnter details for Book 2:\n";
    book2.addBook();

    book1.issueBook();
    book2.returnBook();

    book1.totalBooks();
    book2.issueBook();

    book1.displayBook();
    book2.displayBook();

    return 0;
}