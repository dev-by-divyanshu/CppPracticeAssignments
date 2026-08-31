#include <iostream>
using namespace std;

class Calculator
{
    float a, b;

public:
    void getData()
    {
        cout << "Enter Two Numbers: ";
        cin >> a >> b;
    }

    void addition()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtraction()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiplication()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void division()
    {
        if(b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division not possible" << endl;
    }
};

int main()
{
    Calculator c;

    c.getData();
    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();

    return 0;
}