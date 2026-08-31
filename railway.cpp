#include <iostream>
using namespace std;

class Railway
{
    int passengerId;
    string passengerName;
    string trainName;
    string destination;

public:
    void getData()
    {
        cout << "Enter Passenger ID: ";
        cin >> passengerId;
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Train Name: ";
        getline(cin, trainName);

        cout << "Enter Destination: ";
        getline(cin, destination);
    }

    void display()
    {
        cout << "Passenger ID: " << passengerId << endl;
        cout << "Passenger Name: " << passengerName << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Destination: " << destination << endl;
    }
};

int main()
{
    Railway r;

    r.getData();
    r.display();

    return 0;
}