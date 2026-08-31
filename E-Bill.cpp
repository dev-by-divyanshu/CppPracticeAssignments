#include <iostream>
using namespace std;

class ElectricityBill
{
    string name;
    int units;
    float bill;

public:
    void getData()
    {
        cin.ignore();
        cout << "Enter Consumer Name: ";
        getline(cin, name);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill()
    {
        bill = units * 5;
    }

    void display()
    {
        cout << "Consumer Name: " << name << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Electricity Bill: " << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.getData();
    e.calculateBill();
    e.display();

    return 0;
}