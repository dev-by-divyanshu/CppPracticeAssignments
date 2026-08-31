#include <iostream>
using namespace std;

class BMI
{
    float height, weight, bmi;

public:
    void getData()
    {
        cout << "Enter Height (in meters): ";
        cin >> height;

        cout << "Enter Weight (in kg): ";
        cin >> weight;
    }

    void calculate()
    {
        bmi = weight / (height * height);
    }

    void display()
    {
        cout << "BMI: " << bmi << endl;
    }
};

int main()
{
    BMI b;

    b.getData();
    b.calculate();
    b.display();

    return 0;
}