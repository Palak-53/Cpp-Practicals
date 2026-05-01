#include <iostream>
using namespace std;

class library
{
    int id;
    string title;
    string author;
    int avail;

public:
    void addBook()
    {
        cout << "Enter id: ";
        cin >> id;
        cin.ignore();

        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter book author: ";
        getline(cin, author);

        cout << "Enter available copies: ";
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
            cout << "No copies available\n";
        }
    }

    void returnBook()
    {
        avail++;
        cout << "Book returned successfully\n";
    }

    void displayBook()
    {
        cout << "\n-----------------------------------\n";
        cout << "Id: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << avail << endl;
        cout << "-----------------------------------\n";
    }

    int getId()
    {
        return id;
    }
};

int main()
{
    library books[100];
    int count = 0;
    int choice, id;
    bool found;

    do
    {
        cout << "1.Add Book\n2.Issue Book\n3.Return Book\n4.Display All Books\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 100)
            {
                books[count].addBook();
                count++;
            }
            else
            {
                cout << "Library full\n";
            }
            break;

        case 2:
            if (count == 0)
            {
                cout << "No books available\n";
                break;
            }

            cout << "Enter book id to issue: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++)
            {
                if (books[i].getId() == id)
                {
                    books[i].issueBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found\n";
            break;

        case 3:
            if (count == 0)
            {
                cout << "No books available\n";
                break;
            }

            cout << "Enter book id to return: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++)
            {
                if (books[i].getId() == id)
                {
                    books[i].returnBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found\n";
            break;

        case 4:
            if (count == 0)
            {
                cout << "No books to display\n";
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    books[i].displayBook();
                }
            }
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}