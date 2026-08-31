#include <iostream>
using namespace std;

class Interest
{
    float principal, rate, time, si;

public:
    void getData()
    {
        cout << "Enter Principal: ";
        cin >> principal;

        cout << "Enter Rate: ";
        cin >> rate;

        cout << "Enter Time: ";
        cin >> time;
    }

    void calculate()
    {
        si = (principal * rate * time) / 100;
    }

    void display()
    {
        cout << "Simple Interest: " << si << endl;
    }
};

int main()
{
    Interest i;

    i.getData();
    i.calculate();
    i.display();

    return 0;
}