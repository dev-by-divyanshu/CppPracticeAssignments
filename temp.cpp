#include <iostream>
using namespace std;

class Temperature
{
    float celsius, fahrenheit;

public:
    void getData()
    {
        cout << "Enter Temperature in Celsius: ";
        cin >> celsius;
    }

    void convert()
    {
        fahrenheit = (celsius * 9 / 5) + 32;
    }

    void display()
    {
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << fahrenheit << endl;
    }
};

int main()
{
    Temperature t;

    t.getData();
    t.convert();
    t.display();

    return 0;
}