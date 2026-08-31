#include <iostream>
using namespace std;

class Vehicle
{
    string ownerName;
    string vehicleNumber;
    string vehicleType;

public:
    void getData()
    {
        cout << "Enter Owner Name: ";
        cin.ignore();
        getline(cin, ownerName);

        cout << "Enter Vehicle Number: ";
        getline(cin, vehicleNumber);

        cout << "Enter Vehicle Type: ";
        getline(cin, vehicleType);
    }

    void display()
    {
        cout << "Owner Name: " << ownerName << endl;
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Vehicle Type: " << vehicleType << endl;
    }
};

int main()
{
    Vehicle v;

    v.getData();
    v.display();

    return 0;
}