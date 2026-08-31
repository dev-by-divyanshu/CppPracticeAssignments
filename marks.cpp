#include <iostream>
using namespace std;

class Marks
{
    float m1, m2, m3, m4, m5;
    float total, percentage;

public:
    void getData()
    {
        cout << "Enter Marks of 5 Subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;
    }

    void display()
    {
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Marks m;

    m.getData();
    m.calculate();
    m.display();

    return 0;
}