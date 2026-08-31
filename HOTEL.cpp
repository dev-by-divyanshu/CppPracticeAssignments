#include <iostream>
using namespace std;

class Hotel
{
    int roomNumber;
    string customerName;
    int days;

public:
    void getData()
    {
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Number of Days: ";
        cin >> days;
    }

    void display()
    {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Number of Days: " << days << endl;
    }
};

int main()
{
    Hotel h;

    h.getData();
    h.display();

    return 0;
}