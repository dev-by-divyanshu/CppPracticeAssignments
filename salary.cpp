#include <iostream>
using namespace std;

class Salary
{
    float basic, hra, da, gross;

public:
    void getData()
    {
        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;
    }

    void calculate()
    {
        gross = basic + hra + da;
    }

    void display()
    {
        cout << "Gross Salary: " << gross << endl;
    }
};

int main()
{
    Salary s;

    s.getData();
    s.calculate();
    s.display();

    return 0;
}