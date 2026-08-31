#include <iostream>
using namespace std;

class Library
{
    int bookId;
    string bookName;
    string author;

public:
    void getData()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void display()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author Name: " << author << endl;
    }
};

int main()
{
    Library l;

    l.getData();
    l.display();

    return 0;
}